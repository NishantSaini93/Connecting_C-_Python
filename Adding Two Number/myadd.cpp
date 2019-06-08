#include<pybind11/pybind11.h>
#include<iostream>
namespace py=pybind11;
/**
*This function perform addition of two numbers
*@param a First number
*@param b Second number
*/
void add(int a,int b){
	std::cout<<a+b;
}
/**
*Exposes add() to the python script
*/
PYBIND11_MODULE(myadd,m){
	m.def("add",&add,"add two integer");
}