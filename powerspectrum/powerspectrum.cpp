#include "armadillo"
#include <pybind11/pybind11.h>
#include <pybind11/numpy.h>

namespace py = pybind11;

py::array_t<double> power(py::array_t<double> deltaksq, py::array_t<double> knorm, int boxsize, py::array_t<double> bins)
{
	arma::cube deltasq;
	arma::cube k;
	arma::vec bin;

	py::buffer_info deltasqinfo = deltaksq.request();
	py::buffer_info kinfo = knorm.request();
	py::buffer_info bininfo = bins.request();

	deltasq = arma::cube(reinterpret_cast<double*>(deltasqinfo.ptr), deltasqinfo.shape[0], deltasqinfo.shape[1], deltasqinfo.shape[2]);
	k = arma::cube(reinterpret_cast<double*>(kinfo.ptr), kinfo.shape[0], kinfo.shape[1], kinfo.shape[2]);
	bin = arma::vec(reinterpret_cast<double*>(bininfo.ptr), bininfo.shape[0], 1);

	arma::mat result;
	result.zeros(bin.n_elem, 2);
	int n; double weight;
	double volume = boxsize*boxsize*boxsize;
	deltasq /= volume;
	
	arma::cube w(arma::size(deltasq));
	arma::cube W(arma::size(deltasq));

	for(int i = 0; i < bin.n_elem-1; i++)
	{
		w = arma::conv_to<arma::cube>::from((k > bin[i])) + arma::conv_to<arma::cube>::from((k < bin[i+1]));
		W = arma::conv_to<arma::cube>::from((w > 1.0));

		weight = arma::accu(W);
		
		if (weight != 0)
		{
			result(i,0) = arma::accu(W%k)/weight;
			result(i,1) = arma::accu(W%deltasq)/weight;
		}
	}
			
	py::buffer_info buffer( result.memptr(),
				sizeof(double),
				py::format_descriptor<double>::format(),
				2,
				py::detail::any_container<ssize_t> ({result.n_rows, result.n_cols}),
				py::detail::any_container<ssize_t> ({sizeof(double), sizeof(double)*result.n_rows}));

	return py::array_t<double>(buffer);
}

PYBIND11_MODULE(powerspectrum, m)
{
    m.doc() = " ";
    m.def("powerspectrum", &power);

}
