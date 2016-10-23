/*
 * ConcreteMediator.cpp
 *
 *  Created on: 2016年10月23日
 *      Author: Cherish
 */

#include "ConcreteMediator.h"

ConcreteMediator::ConcreteMediator() {
	// TODO Auto-generated constructor stub

}

ConcreteMediator::~ConcreteMediator() {
	// TODO Auto-generated destructor stub
}

void ConcreteMediator::Send(string message, Colleague* colleague) {
	if (colleague == colleague1) {
		colleague2->Notify(message);
	} else {
		colleague1->Notify(message);
	}
}
