/*
 * Abstraction.cpp
 *
 *  Created on: 2016年10月20日
 *      Author: JSS
 */

#include "Abstraction.h"

Abstraction::Abstraction() {
	// TODO Auto-generated constructor stub
}

Abstraction::~Abstraction() {
	// TODO Auto-generated destructor stub
}

void Abstraction::SetImplementor(Implementor *_imp) {
	this->imp = _imp;
}

//组合接口
void Abstraction::Operation() {
	this->imp->OperationImp();
}
