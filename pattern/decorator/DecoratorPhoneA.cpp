/*
 * DecoratorPhoneA.cpp
 *
 *  Created on: 2016年10月20日
 *      Author: jss
 */

#include "DecoratorPhoneA.h"

DecoratorPhoneA::DecoratorPhoneA() {
	// TODO Auto-generated constructor stub

}

DecoratorPhoneA::DecoratorPhoneA(Phone* phone) {
	this->m_phone = phone;
}

DecoratorPhoneA::~DecoratorPhoneA() {
	// TODO Auto-generated destructor stub
}

void DecoratorPhoneA::AddDecorate() {
	cout<<"Add Decorator"<<endl;
}

