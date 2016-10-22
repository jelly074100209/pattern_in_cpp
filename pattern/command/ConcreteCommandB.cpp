/*
 * ConcreteCommandB.cpp
 *
 *  Created on: 2016骞�10鏈�21鏃�
 *      Author: JSS
 */

#include "ConcreteCommandB.h"

ConcreteCommandB::ConcreteCommandB() {
	// TODO Auto-generated constructor stub

}

ConcreteCommandB::ConcreteCommandB(Receiver* pReceiver) {
	this->_recv = pReceiver;
}

ConcreteCommandB::~ConcreteCommandB() {
	// TODO Auto-generated destructor stub
	delete _recv;
}

void ConcreteCommandB::Execute() {
	this->_recv->executeCommandB();
}
