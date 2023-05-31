/*
 * ConcreteFactory2.cpp
 *
 *  Created on: 2016年10月14日
 *      Author: JSS
 */

#include "ConcreteFactory2.h"
#include "ProductA2.h"
#include "ProductB2.h"
ConcreteFactory2::ConcreteFactory2() {
	std::cout<<"ConcreteFactory2() called"<<std::endl;
}

ConcreteFactory2::~ConcreteFactory2() {
	std::cout<<"~ConcreteFactory2() called"<<std::endl;
}

shared_ptr<AbstractProductA> ConcreteFactory2::CreateProductA() {
	return std::make_shared<ProductA2>();
}

shared_ptr<AbstractProductB> ConcreteFactory2::CreateProductB() {
	return std::make_shared<ProductB2>();
}
