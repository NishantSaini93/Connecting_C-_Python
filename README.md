# Connecting_Cplusplus_Python

Requirements:

Pybind11

Python 2.7 or greater

C++ compiler(Tested on ubuntu 18.04)

#How to run:

#1.Use this command to compile:c++ -O3 -Wall -shared -std=c++11 -fPIC `python3 -m pybind11 --includes` filename.cpp -o filename`python3-config --extension-suffix`

#2. Then type command python filename.py

