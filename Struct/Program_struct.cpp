#include<pybind11/pybind11.h>
#include<string>
namespace py=pybind11;
/**
*This class contains the implementation of class Product which contain name of thing and its quantity
*/
struct Product{
	/**
	*Variable of string type to store name of Product
	*/
	std::string name;
	/**
	*Variable of integer type to store quantity of Product
	*/
	int quantity{};
	/**
	*Constructor
	*@param name Name of product
	*@param quantity Quantity of the product
	*/
	Product(const std::string &name,const int &quantity):name{name},quantity{quantity}{}

	/**
	*Method to set name of the product
	*@param name Name to be set
	*/
	void setName(const std::string &name){
		this->name=name;
	}

	/**
	*Method to set the quantity of product
	*param quantity Quantity to be set
	*/
	void setQuantity(const int& quantity){
		this->quantity=quantity;
	}

	/**
	*Method to get quantity of Product
	*@return quantity of product
	*/
	const int& getQuantity()const{
		return quantity;
	}

	/**
	*Method to get Name of Product
	*@return name of product
	*/
	const std::string& getName()const{
		return name;
	}	
};

PYBIND11_MODULE(Program_struct,m){
	//This expose the struct
	py::class_<Product>(m,"Product")
	//This is for exposing constructor
	.def(py::init<const std::string &,const int &>())
	//Rest of these expose the functions
	.def("setName",&Product::setName)
	.def("setQuantity",&Product::setQuantity)
	.def("getQuantity",&Product::getQuantity)
	.def("getName",&Product::getName);
}