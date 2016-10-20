/*
 * IPhone.cpp
 *
 *  Created on: 2016年10月20日
 *      Author: jss
 */

#include "IPhone.h"

IPhone::IPhone() {
	// TODO Auto-generated constructor stub

}

IPhone::IPhone(string name) {
	this->m_name = name;
}

IPhone::~IPhone() {
	// TODO Auto-generated destructor stub
}

void IPhone::ShowDecorate() {
	cout<<"m_name"<<endl;
}

