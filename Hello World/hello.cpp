#include<pybind11/pybind11.h>
#include<iostream>
namespace py=pybind11;
/**
*Function displays Hello World
*/
void helloworld(){
	std::cout<<"Hello World!"<<std::endl;
}
/**
*Exposes the helloworld function to python script
*/
PYBIND11_MODULE(hello,m){
	m.def("helloworld",&helloworld,"Display Hello World");
}