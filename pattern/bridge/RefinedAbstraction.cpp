/*
 * RefinedAbstraction.cpp
 *
 *  Created on: 2016年10月20日
 *      Author: JSS
 */

#include "RefinedAbstraction.h"

RefinedAbstraction::RefinedAbstraction() {
	// TODO Auto-generated constructor stub

}

RefinedAbstraction::~RefinedAbstraction() {
	// TODO Auto-generated destructor stub
}

void RefinedAbstraction::Operation() {
	this->imp->OperationImp();
}
