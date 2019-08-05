import os, sys

from distutils.core import setup, Extension
from distutils import sysconfig

ext_modules = [
    Extension('powerspectrum', ['powerspectrum/powerspectrum.cpp'],
    language='c++',
    include_dirs=['~/anaconda3/include'],
    extra_compile_args = ['-std=c++11', '-Wall', '-O3', '-march=native',  '-DARMA_NO_DEBUG']
    ),
]

setup(
    name='powerspectrum',
    version='0.0.1',
    author='Utkarsh Giri',
    author_email='utkarshgiri18@gmail.com',
    description='Powerspectrum algorithm',
    ext_modules=ext_modules,
)
