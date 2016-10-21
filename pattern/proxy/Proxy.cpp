/*
 * Proxy.cpp
 *
 *  Created on: 2016年10月21日
 *      Author: JSS
 */

#include "Proxy.h"

Proxy::Proxy() {
	// TODO Auto-generated constructor stub
	m_pRealSubject = 0;
}

Proxy::~Proxy() {
	// TODO Auto-generated destructor stub
	if (m_pRealSubject != NULL) {
		delete m_pRealSubject;
	}
}

void Proxy::Request() {
	if (m_pRealSubject == 0) {
		m_pRealSubject = new RealSubject();
		cout<<"object created"<<endl;
	}
	cout<<"Proxy Request"<<endl;
	m_pRealSubject->Request();
}
