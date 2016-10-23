/*
 * ConcreteColleague1.cpp
 *
 *  Created on: 2016年10月23日
 *      Author: Cherish
 */

#include "ConcreteColleague1.h"

ConcreteColleague1::ConcreteColleague1(Mediator* mediator) {
	// TODO Auto-generated constructor stub
	this->mediator = mediator;
}

ConcreteColleague1::~ConcreteColleague1() {
	// TODO Auto-generated destructor stub
}

void ConcreteColleague1::Send(string message) {
	this->mediator->Send(message, this);
}

void ConcreteColleague1::Notify(string message) {
	cout<<"get message: "<<message<<endl;
}
