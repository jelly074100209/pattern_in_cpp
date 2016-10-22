/*
 * ConcreteCommand.cpp
 *
 *  Created on: 2016年10月21日
 *      Author: JSS
 */

#include "ConcreteCommandA.h"

ConcreteCommandA::ConcreteCommandA() {
	// TODO Auto-generated constructor stub

}

ConcreteCommandA::ConcreteCommandA(Receiver* pReceiver) {
	this->_recv = pReceiver;
}

ConcreteCommandA::~ConcreteCommandA() {
	// TODO Auto-generated destructor stub
	delete _recv;
}

void ConcreteCommandA::Execute() {
	this->_recv->executeCommandA();
}
