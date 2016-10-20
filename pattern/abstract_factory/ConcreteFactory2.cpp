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
	// TODO Auto-generated constructor stub

}

ConcreteFactory2::~ConcreteFactory2() {
	// TODO Auto-generated destructor stub
}

AbstractProductA* ConcreteFactory2::CreateProductA() {
	return new ProductA2();
}

AbstractProductB* ConcreteFactory2::CreateProductB() {
	return new ProductB2();
}
