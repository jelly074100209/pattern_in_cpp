/*
 * DecoratorPhone.cpp
 *
 *  Created on: 2016年10月20日
 *      Author: jss
 */

#include "DecoratorPhone.h"

DecoratorPhone::DecoratorPhone() {
	// TODO Auto-generated constructor stub

}

DecoratorPhone::DecoratorPhone(Phone* phone) {
	this->m_phone = phone;
}

DecoratorPhone::~DecoratorPhone() {
	// TODO Auto-generated destructor stub
}

void DecoratorPhone::ShowDecorate() {
	cout<<"decorator ";
	this->m_phone->ShowDecorate();
	cout<<endl;
}
