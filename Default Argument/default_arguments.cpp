#include <pybind11/pybind11.h>
#include<iostream>
namespace py = pybind11;
/**
*This function calculate sum of two numbers
*@param i Default argument with default value 1
*@param j Default argument with default value 2
*/
void default_arg(int i=1,int j=2){
	std::cout<<"Answer is:"<<i+j;
}
/**
*Module to expose function to python
*/
PYBIND11_MODULE(default_arguments, m) {
    m.def("default_arg", &default_arg, "A function which adds two numbers",
      py::arg("i") = 1, py::arg("j") = 2);//py::arg is used to expose default arguments
}