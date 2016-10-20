/*
 * NokiaPhone.cpp
 *
 *  Created on: 2016年10月20日
 *      Author: jss
 */

#include "NokiaPhone.h"

NokiaPhone::NokiaPhone() {
	// TODO Auto-generated constructor stub

}

NokiaPhone::NokiaPhone(string name) {
	this->m_name = name;
}

NokiaPhone::~NokiaPhone() {
	// TODO Auto-generated destructor stub
}

void NokiaPhone::ShowDecorate() {
	cout<<this->m_name<<endl;
}

