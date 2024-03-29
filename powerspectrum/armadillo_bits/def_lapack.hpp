// Copyright 2008-2016 Conrad Sanderson (http://conradsanderson.id.au)
// Copyright 2008-2016 National ICT Australia (NICTA)
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// ------------------------------------------------------------------------



#ifdef ARMA_USE_LAPACK

#if defined(dgetrf) || defined(DGETRF)
  #pragma message ("WARNING: detected possible interference with definitions of LAPACK functions;")
  #pragma message ("WARNING: include the armadillo header before any other header as a workaround")
#endif

#if !defined(ARMA_BLAS_CAPITALS)
  #define arma_sgetrf sgetrf
  #define arma_dgetrf dgetrf
  #define arma_cgetrf cgetrf
  #define arma_zgetrf zgetrf
  
  #define arma_sgetri sgetri
  #define arma_dgetri dgetri
  #define arma_cgetri cgetri
  #define arma_zgetri zgetri
  
  #define arma_strtri strtri
  #define arma_dtrtri dtrtri
  #define arma_ctrtri ctrtri
  #define arma_ztrtri ztrtri
  
  #define arma_sgeev  sgeev
  #define arma_dgeev  dgeev
  #define arma_cgeev  cgeev
  #define arma_zgeev  zgeev
  
  #define arma_ssyev  ssyev
  #define arma_dsyev  dsyev

  #define arma_cheev  cheev
  #define arma_zheev  zheev
  
  #define arma_ssyevd ssyevd
  #define arma_dsyevd dsyevd
  
  #define arma_cheevd cheevd
  #define arma_zheevd zheevd
  
  #define arma_sggev  sggev
  #define arma_dggev  dggev
  
  #define arma_cggev  cggev
  #define arma_zggev  zggev
  
  #define arma_spotrf spotrf
  #define arma_dpotrf dpotrf
  #define arma_cpotrf cpotrf
  #define arma_zpotrf zpotrf
  
  #define arma_spbtrf spbtrf
  #define arma_dpbtrf dpbtrf
  #define arma_cpbtrf cpbtrf
  #define arma_zpbtrf zpbtrf
  
  #define arma_spotri spotri
  #define arma_dpotri dpotri
  #define arma_cpotri cpotri
  #define arma_zpotri zpotri
  
  #define arma_sgeqrf sgeqrf
  #define arma_dgeqrf dgeqrf
  #define arma_cgeqrf cgeqrf
  #define arma_zgeqrf zgeqrf
  
  #define arma_sorgqr sorgqr
  #define arma_dorgqr dorgqr
  
  #define arma_cungqr cungqr
  #define arma_zungqr zungqr
  
  #define arma_sgesvd sgesvd
  #define arma_dgesvd dgesvd
  
  #define arma_cgesvd cgesvd
  #define arma_zgesvd zgesvd
  
  #define arma_sgesdd sgesdd
  #define arma_dgesdd dgesdd
  #define arma_cgesdd cgesdd
  #define arma_zgesdd zgesdd
  
  #define arma_sgesv  sgesv
  #define arma_dgesv  dgesv
  #define arma_cgesv  cgesv
  #define arma_zgesv  zgesv
  
  #define arma_sgesvx sgesvx
  #define arma_dgesvx dgesvx
  #define arma_cgesvx cgesvx
  #define arma_zgesvx zgesvx
  
  #define arma_sposv  sposv
  #define arma_dposv  dposv
  #define arma_cposv  cposv
  #define arma_zposv  zposv
  
  #define arma_sposvx sposvx
  #define arma_dposvx dposvx
  #define arma_cposvx cposvx
  #define arma_zposvx zposvx
  
  #define arma_sgels  sgels
  #define arma_dgels  dgels
  #define arma_cgels  cgels
  #define arma_zgels  zgels
  
  #define arma_sgelsd sgelsd
  #define arma_dgelsd dgelsd
  #define arma_cgelsd cgelsd
  #define arma_zgelsd zgelsd
  
  #define arma_strtrs strtrs
  #define arma_dtrtrs dtrtrs
  #define arma_ctrtrs ctrtrs
  #define arma_ztrtrs ztrtrs

  #define arma_sgbsv  sgbsv
  #define arma_dgbsv  dgbsv
  #define arma_cgbsv  cgbsv
  #define arma_zgbsv  zgbsv
  
  #define arma_sgbsvx sgbsvx
  #define arma_dgbsvx dgbsvx
  #define arma_cgbsvx cgbsvx
  #define arma_zgbsvx zgbsvx
  
  #define arma_sgtsv  sgtsv
  #define arma_dgtsv  dgtsv
  #define arma_cgtsv  cgtsv
  #define arma_zgtsv  zgtsv
  
  #define arma_sgtsvx sgtsvx
  #define arma_dgtsvx dgtsvx
  #define arma_cgtsvx cgtsvx
  #define arma_zgtsvx zgtsvx
  
  #define arma_sgees  sgees
  #define arma_dgees  dgees
  #define arma_cgees  cgees
  #define arma_zgees  zgees
  
  #define arma_strsyl strsyl
  #define arma_dtrsyl dtrsyl
  #define arma_ctrsyl ctrsyl
  #define arma_ztrsyl ztrsyl
  
  #define arma_sgges  sgges
  #define arma_dgges  dgges
  #define arma_cgges  cgges
  #define arma_zgges  zgges
  
  #define arma_slange slange
  #define arma_dlange dlange
  #define arma_clange clange
  #define arma_zlange zlange
  
  #define arma_sgecon sgecon
  #define arma_dgecon dgecon
  #define arma_cgecon cgecon
  #define arma_zgecon zgecon
  
  #define arma_spocon spocon
  #define arma_dpocon dpocon
  #define arma_cpocon cpocon
  #define arma_zpocon zpocon
  
  #define arma_ilaenv ilaenv
  
  #define arma_slahqr slahqr
  #define arma_dlahqr dlahqr
  
  #define arma_sstedc sstedc
  #define arma_dstedc dstedc
  
  #define arma_strevc strevc
  #define arma_dtrevc dtrevc
  
  #define arma_slarnv slarnv
  #define arma_dlarnv dlarnv
  
  #define arma_sgehrd sgehrd
  #define arma_dgehrd dgehrd
  #define arma_cgehrd cgehrd
  #define arma_zgehrd zgehrd
  
#else
  
  #define arma_sgetrf SGETRF
  #define arma_dgetrf DGETRF
  #define arma_cgetrf CGETRF
  #define arma_zgetrf ZGETRF
  
  #define arma_sgetri SGETRI
  #define arma_dgetri DGETRI
  #define arma_cgetri CGETRI
  #define arma_zgetri ZGETRI
  
  #define arma_strtri STRTRI
  #define arma_dtrtri DTRTRI
  #define arma_ctrtri CTRTRI
  #define arma_ztrtri ZTRTRI
  
  #define arma_sgeev  SGEEV
  #define arma_dgeev  DGEEV
  #define arma_cgeev  CGEEV
  #define arma_zgeev  ZGEEV
  
  #define arma_ssyev  SSYEV
  #define arma_dsyev  DSYEV
  
  #define arma_cheev  CHEEV
  #define arma_zheev  ZHEEV
  
  #define arma_ssyevd SSYEVD
  #define arma_dsyevd DSYEVD
  
  #define arma_cheevd CHEEVD
  #define arma_zheevd ZHEEVD
  
  #define arma_sggev  SGGEV
  #define arma_dggev  DGGEV
  
  #define arma_cggev  CGGEV
  #define arma_zggev  ZGGEV
  
  #define arma_spotrf SPOTRF
  #define arma_dpotrf DPOTRF
  #define arma_cpotrf CPOTRF
  #define arma_zpotrf ZPOTRF
  
  #define arma_spbtrf SPBTRF
  #define arma_dpbtrf DPBTRF
  #define arma_cpbtrf CPBTRF
  #define arma_zpbtrf ZPBTRF
  
  #define arma_spotri SPOTRI
  #define arma_dpotri DPOTRI
  #define arma_cpotri CPOTRI
  #define arma_zpotri ZPOTRI
  
  #define arma_sgeqrf SGEQRF
  #define arma_dgeqrf DGEQRF
  #define arma_cgeqrf CGEQRF
  #define arma_zgeqrf ZGEQRF
  
  #define arma_sorgqr SORGQR
  #define arma_dorgqr DORGQR
  
  #define arma_cungqr CUNGQR
  #define arma_zungqr ZUNGQR
  
  #define arma_sgesvd SGESVD
  #define arma_dgesvd DGESVD
  
  #define arma_cgesvd CGESVD
  #define arma_zgesvd ZGESVD
  
  #define arma_sgesdd SGESDD
  #define arma_dgesdd DGESDD
  #define arma_cgesdd CGESDD
  #define arma_zgesdd ZGESDD
  
  #define arma_sgesv  SGESV
  #define arma_dgesv  DGESV
  #define arma_cgesv  CGESV
  #define arma_zgesv  ZGESV
  
  #define arma_sgesvx SGESVX
  #define arma_dgesvx DGESVX
  #define arma_cgesvx CGESVX
  #define arma_zgesvx ZGESVX
  
  #define arma_sposv  SPOSV
  #define arma_dposv  DPOSV
  #define arma_cposv  CPOSV
  #define arma_zposv  ZPOSV
  
  #define arma_sposvx SPOSVX
  #define arma_dposvx DPOSVX
  #define arma_cposvx CPOSVX
  #define arma_zposvx ZPOSVX
  
  #define arma_sgels  SGELS
  #define arma_dgels  DGELS
  #define arma_cgels  CGELS
  #define arma_zgels  ZGELS
  
  #define arma_sgelsd SGELSD
  #define arma_dgelsd DGELSD
  #define arma_cgelsd CGELSD
  #define arma_zgelsd ZGELSD
  
  #define arma_strtrs STRTRS
  #define arma_dtrtrs DTRTRS
  #define arma_ctrtrs CTRTRS
  #define arma_ztrtrs ZTRTRS

  #define arma_sgbsv  SGBSV
  #define arma_dgbsv  DGBSV
  #define arma_cgbsv  CGBSV
  #define arma_zgbsv  ZGBSV
  
  #define arma_sgbsvx SGBSVX
  #define arma_dgbsvx DGBSVX
  #define arma_cgbsvx CGBSVX
  #define arma_zgbsvx ZGBSVX
  
  #define arma_sgtsv  SGTSV
  #define arma_dgtsv  DGTSV
  #define arma_cgtsv  CGTSV
  #define arma_zgtsv  ZGTSV
  
  #define arma_sgtsvx SGTSVX
  #define arma_dgtsvx DGTSVX
  #define arma_cgtsvx CGTSVX
  #define arma_zgtsvx ZGTSVX
  
  #define arma_sgees  SGEES
  #define arma_dgees  DGEES
  #define arma_cgees  CGEES
  #define arma_zgees  ZGEES

  #define arma_strsyl STRSYL
  #define arma_dtrsyl DTRSYL
  #define arma_ctrsyl CTRSYL
  #define arma_ztrsyl ZTRSYL
  
  #define arma_sgges  SGGES
  #define arma_dgges  DGGES
  #define arma_cgges  CGGES
  #define arma_zgges  ZGGES
  
  #define arma_slange SLANGE
  #define arma_dlange DLANGE
  #define arma_clange CLANGE
  #define arma_zlange ZLANGE
  
  #define arma_sgecon SGECON
  #define arma_dgecon DGECON
  #define arma_cgecon CGECON
  #define arma_zgecon ZGECON
  
  #define arma_spocon SPOCON
  #define arma_dpocon DPOCON
  #define arma_cpocon CPOCON
  #define arma_zpocon ZPOCON
  
  #define arma_ilaenv ILAENV
  
  #define arma_slahqr SLAHQR
  #define arma_dlahqr DLAHQR
  
  #define arma_sstedc SSTEDC
  #define arma_dstedc DSTEDC
  
  #define arma_strevc STREVC
  #define arma_dtrevc DTREVC
  
  #define arma_slarnv SLARNV
  #define arma_dlarnv DLARNV

  #define arma_sgehrd SGEHRD
  #define arma_dgehrd DGEHRD
  #define arma_cgehrd CGEHRD
  #define arma_zgehrd ZGEHRD
  
#endif



extern "C"
  {
  // LU factorisation
  void arma_fortran(arma_sgetrf)(const blas_int* m, const blas_int* n,  float* a, const blas_int* lda, blas_int* ipiv, blas_int* info);
  void arma_fortran(arma_dgetrf)(const blas_int* m, const blas_int* n, double* a, const blas_int* lda, blas_int* ipiv, blas_int* info);
  void arma_fortran(arma_cgetrf)(const blas_int* m, const blas_int* n,   void* a, const blas_int* lda, blas_int* ipiv, blas_int* info);
  void arma_fortran(arma_zgetrf)(const blas_int* m, const blas_int* n,   void* a, const blas_int* lda, blas_int* ipiv, blas_int* info);
  
  // matrix inversion (using LU factorisation result)
  void arma_fortran(arma_sgetri)(const blas_int* n,  float* a, const blas_int* lda, const blas_int* ipiv,  float* work, const blas_int* lwork, blas_int* info);
  void arma_fortran(arma_dgetri)(const blas_int* n, double* a, const blas_int* lda, const blas_int* ipiv, double* work, const blas_int* lwork, blas_int* info);
  void arma_fortran(arma_cgetri)(const blas_int* n,  void*  a, const blas_int* lda, const blas_int* ipiv,   void* work, const blas_int* lwork, blas_int* info);
  void arma_fortran(arma_zgetri)(const blas_int* n,  void*  a, const blas_int* lda, const blas_int* ipiv,   void* work, const blas_int* lwork, blas_int* info);
  
  // matrix inversion (triangular matrices)
  void arma_fortran(arma_strtri)(const char* uplo, const char* diag, const blas_int* n,  float* a, const blas_int* lda, blas_int* info);
  void arma_fortran(arma_dtrtri)(const char* uplo, const char* diag, const blas_int* n, double* a, const blas_int* lda, blas_int* info);
  void arma_fortran(arma_ctrtri)(const char* uplo, const char* diag, const blas_int* n,   void* a, const blas_int* lda, blas_int* info);
  void arma_fortran(arma_ztrtri)(const char* uplo, const char* diag, const blas_int* n,   void* a, const blas_int* lda, blas_int* info);
  
  // eigen decomposition of general matrix (real)
  void arma_fortran(arma_sgeev)(const char* jobvl, const char* jobvr, const blas_int* N,  float* a, const blas_int* lda,  float* wr,  float* wi,  float* vl, const blas_int* ldvl,  float* vr, const blas_int* ldvr,  float* work, const blas_int* lwork, blas_int* info);
  void arma_fortran(arma_dgeev)(const char* jobvl, const char* jobvr, const blas_int* N, double* a, const blas_int* lda, double* wr, double* wi, double* vl, const blas_int* ldvl, double* vr, const blas_int* ldvr, double* work, const blas_int* lwork, blas_int* info);
  
  // eigen decomposition of general matrix (complex)
  void arma_fortran(arma_cgeev)(const char* jobvl, const char* jobvr, const blas_int* N, void* a, const blas_int* lda, void* w, void* vl, const blas_int* ldvl, void* vr, const blas_int* ldvr, void* work, const blas_int* lwork,  float* rwork, blas_int* info);
  void arma_fortran(arma_zgeev)(const char* jobvl, const char* jobvr, const blas_int* N, void* a, const blas_int* lda, void* w, void* vl, const blas_int* ldvl, void* vr, const blas_int* ldvr, void* work, const blas_int* lwork, double* rwork, blas_int* info);
  
  // eigen decomposition of symmetric real matrices
  void arma_fortran(arma_ssyev)(const char* jobz, const char* uplo, const blas_int* n,  float* a, const blas_int* lda,  float* w,  float* work, const blas_int* lwork, blas_int* info);
  void arma_fortran(arma_dsyev)(const char* jobz, const char* uplo, const blas_int* n, double* a, const blas_int* lda, double* w, double* work, const blas_int* lwork, blas_int* info);
    
  // eigen decomposition of hermitian matrices (complex)
  void arma_fortran(arma_cheev)(const char* jobz, const char* uplo, const blas_int* n,   void* a, const blas_int* lda,  float* w,   void* work, const blas_int* lwork,  float* rwork, blas_int* info);
  void arma_fortran(arma_zheev)(const char* jobz, const char* uplo, const blas_int* n,   void* a, const blas_int* lda, double* w,   void* work, const blas_int* lwork, double* rwork, blas_int* info);
  
  // eigen decomposition of symmetric real matrices by divide and conquer
  void arma_fortran(arma_ssyevd)(const char* jobz, const char* uplo, const blas_int* n,  float* a, const blas_int* lda,  float* w,  float* work, const blas_int* lwork, blas_int* iwork, const blas_int* liwork, blas_int* info);
  void arma_fortran(arma_dsyevd)(const char* jobz, const char* uplo, const blas_int* n, double* a, const blas_int* lda, double* w, double* work, const blas_int* lwork, blas_int* iwork, const blas_int* liwork, blas_int* info);
  
  // eigen decomposition of hermitian matrices (complex) by divide and conquer
  void arma_fortran(arma_cheevd)(const char* jobz, const char* uplo, const blas_int* n,   void* a, const blas_int* lda,  float* w,   void* work, const blas_int* lwork,  float* rwork, const blas_int* lrwork, blas_int* iwork, const blas_int* liwork, blas_int* info);
  void arma_fortran(arma_zheevd)(const char* jobz, const char* uplo, const blas_int* n,   void* a, const blas_int* lda, double* w,   void* work, const blas_int* lwork, double* rwork, const blas_int* lrwork, blas_int* iwork, const blas_int* liwork, blas_int* info);
  
  // eigen decomposition of general real matrix pair
  void arma_fortran(arma_sggev)(const char* jobvl, const char* jobvr, const blas_int* n,  float* a, const blas_int* lda,  float* b, const blas_int* ldb,  float* alphar,  float* alphai,  float* beta,  float* vl, const blas_int* ldvl,  float* vr, const blas_int* ldvr,  float* work, const blas_int* lwork, blas_int* info);
  void arma_fortran(arma_dggev)(const char* jobvl, const char* jobvr, const blas_int* n, double* a, const blas_int* lda, double* b, const blas_int* ldb, double* alphar, double* alphai, double* beta, double* vl, const blas_int* ldvl, double* vr, const blas_int* ldvr, double* work, const blas_int* lwork, blas_int* info);
  
  // eigen decomposition of general complex matrix pair
  void arma_fortran(arma_cggev)(const char* jobvl, const char* jobvr, const blas_int* n, void* a, const blas_int* lda, void* b, const blas_int* ldb, void* alpha, void* beta, void* vl, const blas_int* ldvl, void* vr, const blas_int* ldvr, void* work, const blas_int* lwork,  float* rwork, blas_int* info);
  void arma_fortran(arma_zggev)(const char* jobvl, const char* jobvr, const blas_int* n, void* a, const blas_int* lda, void* b, const blas_int* ldb, void* alpha, void* beta, void* vl, const blas_int* ldvl, void* vr, const blas_int* ldvr, void* work, const blas_int* lwork, double* rwork, blas_int* info);
  
  // Cholesky decomposition
  void arma_fortran(arma_spotrf)(const char* uplo, const blas_int* n,  float* a, const blas_int* lda, blas_int* info);
  void arma_fortran(arma_dpotrf)(const char* uplo, const blas_int* n, double* a, const blas_int* lda, blas_int* info);
  void arma_fortran(arma_cpotrf)(const char* uplo, const blas_int* n,   void* a, const blas_int* lda, blas_int* info);
  void arma_fortran(arma_zpotrf)(const char* uplo, const blas_int* n,   void* a, const blas_int* lda, blas_int* info);
  
  // Cholesky decomposition (band matrices)
  void arma_fortran(arma_spbtrf)(const char* uplo, const blas_int* n, const blas_int* kd,  float* ab, const blas_int* ldab, blas_int* info);
  void arma_fortran(arma_dpbtrf)(const char* uplo, const blas_int* n, const blas_int* kd, double* ab, const blas_int* ldab, blas_int* info);
  void arma_fortran(arma_cpbtrf)(const char* uplo, const blas_int* n, const blas_int* kd,   void* ab, const blas_int* ldab, blas_int* info);
  void arma_fortran(arma_zpbtrf)(const char* uplo, const blas_int* n, const blas_int* kd,   void* ab, const blas_int* ldab, blas_int* info);
  
  // matrix inversion (using Cholesky decomposition result)
  void arma_fortran(arma_spotri)(const char* uplo, const blas_int* n,  float* a, const blas_int* lda, blas_int* info);
  void arma_fortran(arma_dpotri)(const char* uplo, const blas_int* n, double* a, const blas_int* lda, blas_int* info);
  void arma_fortran(arma_cpotri)(const char* uplo, const blas_int* n,   void* a, const blas_int* lda, blas_int* info);
  void arma_fortran(arma_zpotri)(const char* uplo, const blas_int* n,   void* a, const blas_int* lda, blas_int* info);
  
  // QR decomposition
  void arma_fortran(arma_sgeqrf)(const blas_int* m, const blas_int* n,  float* a, const blas_int* lda,  float* tau,  float* work, const blas_int* lwork, blas_int* info);
  void arma_fortran(arma_dgeqrf)(const blas_int* m, const blas_int* n, double* a, const blas_int* lda, double* tau, double* work, const blas_int* lwork, blas_int* info);
  void arma_fortran(arma_cgeqrf)(const blas_int* m, const blas_int* n,   void* a, const blas_int* lda,   void* tau,   void* work, const blas_int* lwork, blas_int* info);
  void arma_fortran(arma_zgeqrf)(const blas_int* m, const blas_int* n,   void* a, const blas_int* lda,   void* tau,   void* work, const blas_int* lwork, blas_int* info);
  
  // Q matrix calculation from QR decomposition (real matrices)
  void arma_fortran(arma_sorgqr)(const blas_int* m, const blas_int* n, const blas_int* k,  float* a, const blas_int* lda,  const float* tau,  float* work, const blas_int* lwork, blas_int* info);
  void arma_fortran(arma_dorgqr)(const blas_int* m, const blas_int* n, const blas_int* k, double* a, const blas_int* lda, const double* tau, double* work, const blas_int* lwork, blas_int* info);
  
  // Q matrix calculation from QR decomposition (complex matrices)
  void arma_fortran(arma_cungqr)(const blas_int* m, const blas_int* n, const blas_int* k,   void* a, const blas_int* lda,   const void* tau,   void* work, const blas_int* lwork, blas_int* info);
  void arma_fortran(arma_zungqr)(const blas_int* m, const blas_int* n, const blas_int* k,   void* a, const blas_int* lda,   const void* tau,   void* work, const blas_int* lwork, blas_int* info);
  
  // SVD (real matrices)
  void arma_fortran(arma_sgesvd)(const char* jobu, const char* jobvt, const blas_int* m, const blas_int* n, float*  a, const blas_int* lda, float*  s, float*  u, const blas_int* ldu, float*  vt, const blas_int* ldvt, float*  work, const blas_int* lwork, blas_int* info);
  void arma_fortran(arma_dgesvd)(const char* jobu, const char* jobvt, const blas_int* m, const blas_int* n, double* a, const blas_int* lda, double* s, double* u, const blas_int* ldu, double* vt, const blas_int* ldvt, double* work, const blas_int* lwork, blas_int* info);
  
  // SVD (complex matrices)
  void arma_fortran(arma_cgesvd)(const char* jobu, const char* jobvt, const blas_int* m, const blas_int* n, void*   a, const blas_int* lda, float*  s, void*   u, const blas_int* ldu, void*   vt, const blas_int* ldvt, void*   work, const blas_int* lwork, float*  rwork, blas_int* info);
  void arma_fortran(arma_zgesvd)(const char* jobu, const char* jobvt, const blas_int* m, const blas_int* n, void*   a, const blas_int* lda, double* s, void*   u, const blas_int* ldu, void*   vt, const blas_int* ldvt, void*   work, const blas_int* lwork, double* rwork, blas_int* info);
  
  // SVD (real matrices) by divide and conquer
  void arma_fortran(arma_sgesdd)(const char* jobz, const blas_int* m, const blas_int* n, float*  a, const blas_int* lda, float*  s, float*  u, const blas_int* ldu, float*  vt, const blas_int* ldvt, float*  work, const blas_int* lwork, blas_int* iwork, blas_int* info);
  void arma_fortran(arma_dgesdd)(const char* jobz, const blas_int* m, const blas_int* n, double* a, const blas_int* lda, double* s, double* u, const blas_int* ldu, double* vt, const blas_int* ldvt, double* work, const blas_int* lwork, blas_int* iwork, blas_int* info);
  
  // SVD (complex matrices) by diconst vide and conconst quer
  void arma_fortran(arma_cgesdd)(const char* jobz, const blas_int* m, const blas_int* n, void* a, const blas_int* lda, float*  s, void* u, const blas_int* ldu, void* vt, const blas_int* ldvt, void* work, const blas_int* lwork, float*  rwork, blas_int* iwork, blas_int* info);
  void arma_fortran(arma_zgesdd)(const char* jobz, const blas_int* m, const blas_int* n, void* a, const blas_int* lda, double* s, void* u, const blas_int* ldu, void* vt, const blas_int* ldvt, void* work, const blas_int* lwork, double* rwork, blas_int* iwork, blas_int* info);
  
  // solve system of linear equations (general square matrix)
  void arma_fortran(arma_sgesv)(const blas_int* n, const blas_int* nrhs, float*  a, const blas_int* lda, blas_int* ipiv, float*  b, const blas_int* ldb, blas_int* info);
  void arma_fortran(arma_dgesv)(const blas_int* n, const blas_int* nrhs, double* a, const blas_int* lda, blas_int* ipiv, double* b, const blas_int* ldb, blas_int* info);
  void arma_fortran(arma_cgesv)(const blas_int* n, const blas_int* nrhs, void*   a, const blas_int* lda, blas_int* ipiv, void*   b, const blas_int* ldb, blas_int* info);
  void arma_fortran(arma_zgesv)(const blas_int* n, const blas_int* nrhs, void*   a, const blas_int* lda, blas_int* ipiv, void*   b, const blas_int* ldb, blas_int* info);
  
  // solve system of linear equations (general square matrix, advanced form, real matrices)
  void arma_fortran(arma_sgesvx)(const char* fact, const char* trans, const blas_int* n, const blas_int* nrhs,  float* a, const blas_int* lda,  float* af, const blas_int* ldaf, blas_int* ipiv, char* equed,  float* r,  float* c,  float* b, const blas_int* ldb,  float* x, const blas_int* ldx,  float* rcond,  float* ferr,  float* berr,  float* work, blas_int* iwork, blas_int* info);
  void arma_fortran(arma_dgesvx)(const char* fact, const char* trans, const blas_int* n, const blas_int* nrhs, double* a, const blas_int* lda, double* af, const blas_int* ldaf, blas_int* ipiv, char* equed, double* r, double* c, double* b, const blas_int* ldb, double* x, const blas_int* ldx, double* rcond, double* ferr, double* berr, double* work, blas_int* iwork, blas_int* info);
  
  // solve system of linear equations (general square matrix, advanced form, complex matrices)
  void arma_fortran(arma_cgesvx)(const char* fact, const char* trans, const blas_int* n, const blas_int* nrhs, void* a, const blas_int* lda, void* af, const blas_int* ldaf, blas_int* ipiv, char* equed,  float* r,  float* c, void* b, const blas_int* ldb, void* x, const blas_int* ldx,  float* rcond,  float* ferr,  float* berr, void* work,  float* rwork, blas_int* info);
  void arma_fortran(arma_zgesvx)(const char* fact, const char* trans, const blas_int* n, const blas_int* nrhs, void* a, const blas_int* lda, void* af, const blas_int* ldaf, blas_int* ipiv, char* equed, double* r, double* c, void* b, const blas_int* ldb, void* x, const blas_int* ldx, double* rcond, double* ferr, double* berr, void* work, double* rwork, blas_int* info);
  
  // solve system of linear equations (symmetric positive definite matrix)
  void arma_fortran(arma_sposv)(const char* uplo, const blas_int* n, const blas_int* nrhs,  float* a, const blas_int* lda,  float* b, const blas_int* ldb, blas_int* info);
  void arma_fortran(arma_dposv)(const char* uplo, const blas_int* n, const blas_int* nrhs, double* a, const blas_int* lda, double* b, const blas_int* ldb, blas_int* info);
  void arma_fortran(arma_cposv)(const char* uplo, const blas_int* n, const blas_int* nrhs,   void* a, const blas_int* lda,   void* b, const blas_int* ldb, blas_int* info);
  void arma_fortran(arma_zposv)(const char* uplo, const blas_int* n, const blas_int* nrhs,   void* a, const blas_int* lda,   void* b, const blas_int* ldb, blas_int* info);
  
  // solve system of linear equations (symmetric positive definite matrix, advanced form, real matrices)
  void arma_fortran(arma_sposvx)(const char* fact, const char* uplo, const blas_int* n, const blas_int* nrhs,  float* a, const blas_int* lda,  float* af, const blas_int* ldaf, char* equed,  float* s,  float* b, const blas_int* ldb,  float* x, const blas_int* ldx,  float* rcond,  float* ferr,  float* berr,  float* work, blas_int* iwork, blas_int* info);
  void arma_fortran(arma_dposvx)(const char* fact, const char* uplo, const blas_int* n, const blas_int* nrhs, double* a, const blas_int* lda, double* af, const blas_int* ldaf, char* equed, double* s, double* b, const blas_int* ldb, double* x, const blas_int* ldx, double* rcond, double* ferr, double* berr, double* work, blas_int* iwork, blas_int* info);
  
  // solve system of linear equations (hermitian positive definite matrix, advanced form, complex matrices)
  void arma_fortran(arma_cposvx)(const char* fact, const char* uplo, const blas_int* n, const blas_int* nrhs, void* a, const blas_int* lda, void* af, const blas_int* ldaf, char* equed,  float* s, void* b, const blas_int* ldb, void* x, const blas_int* ldx,  float* rcond,  float* ferr,  float* berr, void* work,  float* rwork, blas_int* info);
  void arma_fortran(arma_zposvx)(const char* fact, const char* uplo, const blas_int* n, const blas_int* nrhs, void* a, const blas_int* lda, void* af, const blas_int* ldaf, char* equed, double* s, void* b, const blas_int* ldb, void* x, const blas_int* ldx, double* rcond, double* ferr, double* berr, void* work, double* rwork, blas_int* info);
  
  // solve over/under-determined system of linear equations
  void arma_fortran(arma_sgels)(const char* trans, const blas_int* m, const blas_int* n, const blas_int* nrhs, float*  a, const blas_int* lda, float*  b, const blas_int* ldb, float*  work, const blas_int* lwork, blas_int* info);
  void arma_fortran(arma_dgels)(const char* trans, const blas_int* m, const blas_int* n, const blas_int* nrhs, double* a, const blas_int* lda, double* b, const blas_int* ldb, double* work, const blas_int* lwork, blas_int* info);
  void arma_fortran(arma_cgels)(const char* trans, const blas_int* m, const blas_int* n, const blas_int* nrhs, void*   a, const blas_int* lda, void*   b, const blas_int* ldb, void*   work, const blas_int* lwork, blas_int* info);
  void arma_fortran(arma_zgels)(const char* trans, const blas_int* m, const blas_int* n, const blas_int* nrhs, void*   a, const blas_int* lda, void*   b, const blas_int* ldb, void*   work, const blas_int* lwork, blas_int* info);
  
  // approximately solve system of linear equations using svd (real)
  void arma_fortran(arma_sgelsd)(const blas_int* m, const blas_int* n, const blas_int* nrhs,  float* a, const blas_int* lda,  float* b, const blas_int* ldb,  float* S,  const float* rcond, blas_int* rank,  float* work, const blas_int* lwork, blas_int* iwork, blas_int* info);
  void arma_fortran(arma_dgelsd)(const blas_int* m, const blas_int* n, const blas_int* nrhs, double* a, const blas_int* lda, double* b, const blas_int* ldb, double* S, const double* rcond, blas_int* rank, double* work, const blas_int* lwork, blas_int* iwork, blas_int* info);
  
  // approximately solve system of linear equations using svd (complex)
  void arma_fortran(arma_cgelsd)(const blas_int* m, const blas_int* n, const blas_int* nrhs, void* a, const blas_int* lda, void* b, const blas_int* ldb,  float* S,  const float* rcond, blas_int* rank, void* work, const blas_int* lwork,  float* rwork, blas_int* iwork, blas_int* info);
  void arma_fortran(arma_zgelsd)(const blas_int* m, const blas_int* n, const blas_int* nrhs, void* a, const blas_int* lda, void* b, const blas_int* ldb, double* S, const double* rcond, blas_int* rank, void* work, const blas_int* lwork, double* rwork, blas_int* iwork, blas_int* info);
  
  // solve system of linear equations (triangular matrix)
  void arma_fortran(arma_strtrs)(const char* uplo, const char* trans, const char* diag, const blas_int* n, const blas_int* nrhs, const float*  a, const blas_int* lda, float*  b, const blas_int* ldb, blas_int* info);
  void arma_fortran(arma_dtrtrs)(const char* uplo, const char* trans, const char* diag, const blas_int* n, const blas_int* nrhs, const double* a, const blas_int* lda, double* b, const blas_int* ldb, blas_int* info);
  void arma_fortran(arma_ctrtrs)(const char* uplo, const char* trans, const char* diag, const blas_int* n, const blas_int* nrhs, const void*   a, const blas_int* lda, void*   b, const blas_int* ldb, blas_int* info);
  void arma_fortran(arma_ztrtrs)(const char* uplo, const char* trans, const char* diag, const blas_int* n, const blas_int* nrhs, const void*   a, const blas_int* lda, void*   b, const blas_int* ldb, blas_int* info);
  
  // solve system of linear equations (general band matrix)
  void arma_fortran(arma_sgbsv)(const blas_int* n, const blas_int* kl, const blas_int* ku, const blas_int* nrhs,  float* ab, const blas_int* ldab, blas_int* ipiv,  float* b, const blas_int* ldb, blas_int* info);
  void arma_fortran(arma_dgbsv)(const blas_int* n, const blas_int* kl, const blas_int* ku, const blas_int* nrhs, double* ab, const blas_int* ldab, blas_int* ipiv, double* b, const blas_int* ldb, blas_int* info);
  void arma_fortran(arma_cgbsv)(const blas_int* n, const blas_int* kl, const blas_int* ku, const blas_int* nrhs,   void* ab, const blas_int* ldab, blas_int* ipiv,   void* b, const blas_int* ldb, blas_int* info);
  void arma_fortran(arma_zgbsv)(const blas_int* n, const blas_int* kl, const blas_int* ku, const blas_int* nrhs,   void* ab, const blas_int* ldab, blas_int* ipiv,   void* b, const blas_int* ldb, blas_int* info);
  
  // solve system of linear equations (general band matrix, advanced form, real matrices)
  void arma_fortran(arma_sgbsvx)(const char* fact, const char* trans, const blas_int* n, const blas_int* kl, const blas_int* ku, const blas_int* nrhs,  float* ab, const blas_int* ldab,  float* afb, const blas_int* ldafb, blas_int* ipiv, char* equed,  float* r,  float* c,  float* b, const blas_int* ldb,  float* x, const blas_int* ldx,  float* rcond,  float* ferr,  float* berr,  float* work, blas_int* iwork, blas_int* info);
  void arma_fortran(arma_dgbsvx)(const char* fact, const char* trans, const blas_int* n, const blas_int* kl, const blas_int* ku, const blas_int* nrhs, double* ab, const blas_int* ldab, double* afb, const blas_int* ldafb, blas_int* ipiv, char* equed, double* r, double* c, double* b, const blas_int* ldb, double* x, const blas_int* ldx, double* rcond, double* ferr, double* berr, double* work, blas_int* iwork, blas_int* info);
  
  // solve system of linear equations (general band matrix, advanced form, complex matrices)
  void arma_fortran(arma_cgbsvx)(const char* fact, const char* trans, const blas_int* n, const blas_int* kl, const blas_int* ku, const blas_int* nrhs, void* ab, const blas_int* ldab, void* afb, const blas_int* ldafb, blas_int* ipiv, char* equed,  float* r,  float* c, void* b, const blas_int* ldb, void* x, const blas_int* ldx,  float* rcond,  float* ferr,  float* berr, void* work,  float* rwork, blas_int* info);
  void arma_fortran(arma_zgbsvx)(const char* fact, const char* trans, const blas_int* n, const blas_int* kl, const blas_int* ku, const blas_int* nrhs, void* ab, const blas_int* ldab, void* afb, const blas_int* ldafb, blas_int* ipiv, char* equed, double* r, double* c, void* b, const blas_int* ldb, void* x, const blas_int* ldx, double* rcond, double* ferr, double* berr, void* work, double* rwork, blas_int* info);
  
  // solve system of linear equations (tridiagonal band matrix)
  void arma_fortran(arma_sgtsv)(const blas_int* n, const blas_int* nrhs,  float* dl,  float* d,  float* du,  float* b, const blas_int* ldb, blas_int* info);
  void arma_fortran(arma_dgtsv)(const blas_int* n, const blas_int* nrhs, double* dl, double* d, double* du, double* b, const blas_int* ldb, blas_int* info);
  void arma_fortran(arma_cgtsv)(const blas_int* n, const blas_int* nrhs,   void* dl,   void* d,   void* du,   void* b, const blas_int* ldb, blas_int* info);
  void arma_fortran(arma_zgtsv)(const blas_int* n, const blas_int* nrhs,   void* dl,   void* d,   void* du,   void* b, const blas_int* ldb, blas_int* info);
  
  // solve system of linear equations (tridiagonal band matrix, advaned form, real matrices)
  void arma_fortran(arma_sgtsvx)(const char* fact, const char* trans, const blas_int* n, const blas_int* nrhs,  const float* dl,  const float* d,  const float* du,  float* dlf,  float* df,  float* duf,  float* du2, blas_int* ipiv,  const float* b, const blas_int* ldb,  float* x, const blas_int* ldx,  float* rcond,  float* ferr,  float* berr,  float* work, blas_int* iwork, blas_int* info);
  void arma_fortran(arma_dgtsvx)(const char* fact, const char* trans, const blas_int* n, const blas_int* nrhs, const double* dl, const double* d, const double* du, double* dlf, double* df, double* duf, double* du2, blas_int* ipiv, const double* b, const blas_int* ldb, double* x, const blas_int* ldx, double* rcond, double* ferr, double* berr, double* work, blas_int* iwork, blas_int* info);
  
  // solve system of linear equations (tridiagonal band matrix, advaned form, complex matrices)
  void arma_fortran(arma_cgtsvx)(const char* fact, const char* trans, const blas_int* n, const blas_int* nrhs, const void* dl, const void* d, const void* du, void* dlf, void* df, void* duf, void* du2, blas_int* ipiv, const void* b, const blas_int* ldb, void* x, const blas_int* ldx,  float* rcond,  float* ferr,  float* berr, void* work,  float* rwork, blas_int* info);
  void arma_fortran(arma_zgtsvx)(const char* fact, const char* trans, const blas_int* n, const blas_int* nrhs, const void* dl, const void* d, const void* du, void* dlf, void* df, void* duf, void* du2, blas_int* ipiv, const void* b, const blas_int* ldb, void* x, const blas_int* ldx, double* rcond, double* ferr, double* berr, void* work, double* rwork, blas_int* info);
  
  // Schur decomposition (real matrices)
  void arma_fortran(arma_sgees)(const char* jobvs, const char* sort, const void* select, const blas_int* n, float*  a, const blas_int* lda, blas_int* sdim, float*  wr, float*  wi, float*  vs, const blas_int* ldvs, float*  work, const blas_int* lwork, blas_int* bwork, blas_int* info);
  void arma_fortran(arma_dgees)(const char* jobvs, const char* sort, const void* select, const blas_int* n, double* a, const blas_int* lda, blas_int* sdim, double* wr, double* wi, double* vs, const blas_int* ldvs, double* work, const blas_int* lwork, blas_int* bwork, blas_int* info);
  
  // Schur decomposition (complex matrices)
  void arma_fortran(arma_cgees)(const char* jobvs, const char* sort, const void* select, const blas_int* n, void* a, const blas_int* lda, blas_int* sdim, void* w, void* vs, const blas_int* ldvs, void* work, const blas_int* lwork, float*  rwork, blas_int* bwork, blas_int* info);
  void arma_fortran(arma_zgees)(const char* jobvs, const char* sort, const void* select, const blas_int* n, void* a, const blas_int* lda, blas_int* sdim, void* w, void* vs, const blas_int* ldvs, void* work, const blas_int* lwork, double* rwork, blas_int* bwork, blas_int* info);
  
  // solve a Sylvester equation ax + xb = c, with a and b assumed to be in Schur form
  void arma_fortran(arma_strsyl)(const char* transa, const char* transb, const blas_int* isgn, const blas_int* m, const blas_int* n, const float*  a, const blas_int* lda, const float*  b, const blas_int* ldb, float*  c, const blas_int* ldc, float*  scale, blas_int* info);
  void arma_fortran(arma_dtrsyl)(const char* transa, const char* transb, const blas_int* isgn, const blas_int* m, const blas_int* n, const double* a, const blas_int* lda, const double* b, const blas_int* ldb, double* c, const blas_int* ldc, double* scale, blas_int* info);
  void arma_fortran(arma_ctrsyl)(const char* transa, const char* transb, const blas_int* isgn, const blas_int* m, const blas_int* n, const void*   a, const blas_int* lda, const void*   b, const blas_int* ldb, void*   c, const blas_int* ldc, float*  scale, blas_int* info);
  void arma_fortran(arma_ztrsyl)(const char* transa, const char* transb, const blas_int* isgn, const blas_int* m, const blas_int* n, const void*   a, const blas_int* lda, const void*   b, const blas_int* ldb, void*   c, const blas_int* ldc, double* scale, blas_int* info);
  
  // QZ decomposition (real matrices)
  void arma_fortran(arma_sgges)(const char* jobvsl, const char* jobvsr, const char* sort, const void* selctg, const blas_int* n,  float* a, const blas_int* lda,  float* b, const blas_int* ldb, blas_int* sdim,  float* alphar,  float* alphai,  float* beta,  float* vsl, const blas_int* ldvsl,  float* vsr, const blas_int* ldvsr,  float* work, const blas_int* lwork,  float* bwork, blas_int* info);
  void arma_fortran(arma_dgges)(const char* jobvsl, const char* jobvsr, const char* sort, const void* selctg, const blas_int* n, double* a, const blas_int* lda, double* b, const blas_int* ldb, blas_int* sdim, double* alphar, double* alphai, double* beta, double* vsl, const blas_int* ldvsl, double* vsr, const blas_int* ldvsr, double* work, const blas_int* lwork, double* bwork, blas_int* info);
  
  // QZ decomposition (complex matrices)
  void arma_fortran(arma_cgges)(const char* jobvsl, const char* jobvsr, const char* sort, const void* selctg, const blas_int* n, void* a, const blas_int* lda, void* b, const blas_int* ldb, blas_int* sdim, void* alpha, void* beta, void* vsl, const blas_int* ldvsl, void* vsr, const blas_int* ldvsr, void* work, const blas_int* lwork,  float* rwork,  float* bwork, blas_int* info);
  void arma_fortran(arma_zgges)(const char* jobvsl, const char* jobvsr, const char* sort, const void* selctg, const blas_int* n, void* a, const blas_int* lda, void* b, const blas_int* ldb, blas_int* sdim, void* alpha, void* beta, void* vsl, const blas_int* ldvsl, void* vsr, const blas_int* ldvsr, void* work, const blas_int* lwork, double* rwork, double* bwork, blas_int* info);
  
  // 1-norm
  float  arma_fortran(arma_slange)(const char* norm, const blas_int* m, const blas_int* n,  const float* a, const blas_int* lda,  float* work);
  double arma_fortran(arma_dlange)(const char* norm, const blas_int* m, const blas_int* n, const double* a, const blas_int* lda, double* work);
  float  arma_fortran(arma_clange)(const char* norm, const blas_int* m, const blas_int* n,   const void* a, const blas_int* lda,  float* work);
  double arma_fortran(arma_zlange)(const char* norm, const blas_int* m, const blas_int* n,   const void* a, const blas_int* lda, double* work);
  
  // reciprocal of condition number (real, generic matrix)
  void arma_fortran(arma_sgecon)(const char* norm, const blas_int* n,  const float* a, const blas_int* lda,  const float* anorm,  float* rcond,  float* work, blas_int* iwork, blas_int* info);
  void arma_fortran(arma_dgecon)(const char* norm, const blas_int* n, const double* a, const blas_int* lda, const double* anorm, double* rcond, double* work, blas_int* iwork, blas_int* info);
  
  // reciprocal of condition number (complex, generic matrix)
  void arma_fortran(arma_cgecon)(const char* norm, const blas_int* n, const void* a, const blas_int* lda,  const float* anorm,  float* rcond, void* work,  float* rwork, blas_int* info);
  void arma_fortran(arma_zgecon)(const char* norm, const blas_int* n, const void* a, const blas_int* lda, const double* anorm, double* rcond, void* work, double* rwork, blas_int* info);
  
  // reciprocal of condition number (real, symmetric positive definite matrix)
  void arma_fortran(arma_spocon)(const char* uplo, const blas_int* n,  const float* a, const blas_int* lda,  const float* anorm,  float* rcond,  float* work, blas_int* iwork, blas_int* info);
  void arma_fortran(arma_dpocon)(const char* uplo, const blas_int* n, const double* a, const blas_int* lda, const double* anorm, double* rcond, double* work, blas_int* iwork, blas_int* info);
  
  // reciprocal of condition number (complex, hermitian positive definite matrix)
  void arma_fortran(arma_cpocon)(const char* uplo, const blas_int* n, const void* a, const blas_int* lda,  const float* anorm,  float* rcond, void* work,  float* rwork, blas_int* info);
  void arma_fortran(arma_zpocon)(const char* uplo, const blas_int* n, const void* a, const blas_int* lda, const double* anorm, double* rcond, void* work, double* rwork, blas_int* info);
  
  // obtain parameters according to the local configuration of lapack
  blas_int arma_fortran(arma_ilaenv)(const blas_int* ispec, const char* name, const char* opts, const blas_int* n1, const blas_int* n2, const blas_int* n3, const blas_int* n4);
  
  // calculate eigenvalues of an upper Hessenberg matrix
  void arma_fortran(arma_slahqr)(const blas_int* wantt, const blas_int* wantz, const blas_int* n, const blas_int* ilo, const blas_int* ihi, float*  h, const blas_int* ldh, float*  wr, float*  wi, const blas_int* iloz, const blas_int* ihiz, float*  z, const blas_int* ldz, blas_int* info);
  void arma_fortran(arma_dlahqr)(const blas_int* wantt, const blas_int* wantz, const blas_int* n, const blas_int* ilo, const blas_int* ihi, double* h, const blas_int* ldh, double* wr, double* wi, const blas_int* iloz, const blas_int* ihiz, double* z, const blas_int* ldz, blas_int* info);
  
  // calculate eigenvalues of a symmetric tridiagonal matrix
  void arma_fortran(arma_sstedc)(const char* compz, const blas_int* n, float*  d, float*  e, float*  z, const blas_int* ldz, float*  work, const blas_int* lwork, blas_int* iwork, const blas_int* liwork, blas_int* info);
  void arma_fortran(arma_dstedc)(const char* compz, const blas_int* n, double* d, double* e, double* z, const blas_int* ldz, double* work, const blas_int* lwork, blas_int* iwork, const blas_int* liwork, blas_int* info);
  
  // calculate eigenvectors of a Schur form matrix
  void arma_fortran(arma_strevc)(const char* side, const char* howmny, blas_int* select, const blas_int* n, const float*  t, const blas_int* ldt, float*  vl, const blas_int* ldvl, float*  vr, const blas_int* ldvr, const blas_int* mm, blas_int* m, float*  work, blas_int* info);
  void arma_fortran(arma_dtrevc)(const char* side, const char* howmny, blas_int* select, const blas_int* n, const double* t, const blas_int* ldt, double* vl, const blas_int* ldvl, double* vr, const blas_int* ldvr, const blas_int* mm, blas_int* m, double* work, blas_int* info);
  
  // generate a vector of random numbers
  void arma_fortran(arma_slarnv)(const blas_int* idist, blas_int* const iseed, blas_int* n, float*  x);
  void arma_fortran(arma_dlarnv)(const blas_int* idist, blas_int* const iseed, blas_int* n, double* x);
  
  // hessenberg decomposition
  void arma_fortran(arma_sgehrd)(const blas_int* n, const blas_int* ilo, const blas_int* ihi, float*  a, const blas_int* lda, float*  tao, float*  work, const blas_int* lwork, blas_int* info);
  void arma_fortran(arma_dgehrd)(const blas_int* n, const blas_int* ilo, const blas_int* ihi, double* a, const blas_int* lda, double* tao, double* work, const blas_int* lwork, blas_int* info);
  void arma_fortran(arma_cgehrd)(const blas_int* n, const blas_int* ilo, const blas_int* ihi, void*   a, const blas_int* lda, void*   tao, void*   work, const blas_int* lwork, blas_int* info);
  void arma_fortran(arma_zgehrd)(const blas_int* n, const blas_int* ilo, const blas_int* ihi, void*   a, const blas_int* lda, void*   tao, void*   work, const blas_int* lwork, blas_int* info);
  }


#endif
