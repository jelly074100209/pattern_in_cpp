/*
 * ConcreteHandler1.cpp
 *
 *  Created on: 2016年10月21日
 *      Author: JSS
 */

#include "ConcreteHandler1.h"

ConcreteHandler1::ConcreteHandler1(Handler* inPHandler) {
	this->m_pHandler = inPHandler;
}

ConcreteHandler1::~ConcreteHandler1() {
	if (m_pHandler!=0) {
		delete m_pHandler;
		m_pHandler = 0;
	} else {
		cout <<"ConcreateHandler1 haven't next processor object,so ConcreateHandler1 process"<<endl;
	}
}

void ConcreteHandler1::HandlerRequest() {
	if (m_pHandler!=0) {
		cout<<"ConcreteHandler1 request"<<endl;
		this->m_pHandler->HandlerRequest();
	} else {
		cout <<"ConcreateHandler1 haven't next processor object,so ConcreateHandler1 process"<<endl;
	}
}
