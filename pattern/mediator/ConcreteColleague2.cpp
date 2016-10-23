/*
 * ConcreteColleague2.cpp
 *
 *  Created on: 2016年10月23日
 *      Author: Cherish
 */

#include "ConcreteColleague2.h"

ConcreteColleague2::ConcreteColleague2(Mediator* mediator) {
	// TODO Auto-generated constructor stub
	this->mediator = mediator;
}

ConcreteColleague2::~ConcreteColleague2() {
	// TODO Auto-generated destructor stub
}

void ConcreteColleague2::Send(string message) {
	this->mediator->Send(message, this);
}

void ConcreteColleague2::Notify(string message) {
	cout<<"get message: "<<message<<endl;
}
