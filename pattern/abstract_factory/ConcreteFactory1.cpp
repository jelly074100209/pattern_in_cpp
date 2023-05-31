/*
 * ConcreteFactory1.cpp
 *
 *  Created on: 2016年10月14日
 *      Author: JSS
 */

#include "ConcreteFactory1.h"
#include "ProductA1.h"
#include "ProductB1.h"
ConcreteFactory1::ConcreteFactory1() {
	std::cout<<"ConcreteFactory1 called"<<endl;
}

ConcreteFactory1::~ConcreteFactory1() {
    std::cout<<"~ConcreteFactory1 called"<<endl;
}

std::shared_ptr<AbstractProductA> ConcreteFactory1::CreateProductA() {
	return std::make_shared<ProductA1>();
}

std::shared_ptr<AbstractProductB> ConcreteFactory1::CreateProductB() {
	return std::make_shared<ProductB1>();
}
