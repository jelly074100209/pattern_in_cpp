/*
 * concreteprototype1.cpp
 *
 *  Created on: 2016年10月19日
 *      Author: JSS
 */

#include "concreteprototype1.h"

concreteprototype1::concreteprototype1() {
	// TODO Auto-generated constructor stub
	cout<<"create concreteprototype1"<<endl;
}

concreteprototype1::~concreteprototype1() {
	// TODO Auto-generated destructor stub
	cout<<"delete concreteprototype1"<<endl;
}

concreteprototype1::concreteprototype1(const concreteprototype1 &prototype) {
	cout<<"copy the concreteprototype1"<<endl;
}

prototype* concreteprototype1::clone() {
	return new concreteprototype1(*this);//通过拷贝构造函数克隆自身
}
