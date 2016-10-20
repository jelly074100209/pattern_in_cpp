/*
 * Adapter.cpp
 *
 *  Created on: 2016年10月19日
 *      Author: JSS
 */

#include "Adapter.h"
Adapter::Adapter() {
	// 构造函数中使用new，需要在析构函数中delete
	adaptee = new Adaptee();
}

Adapter::~Adapter() {
	// TODO Auto-generated destructor stub
	delete adaptee;
}

void Adapter::Request() {
	adaptee->SpecialRequest();
}
