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
	// TODO Auto-generated constructor stub

}

ConcreteFactory1::~ConcreteFactory1() {
	// TODO Auto-generated destructor stub
}

AbstractProductA* ConcreteFactory1::CreateProductA() {
	return new ProductA1();
}

AbstractProductB* ConcreteFactory1::CreateProductB() {
	return new ProductB1();
}
