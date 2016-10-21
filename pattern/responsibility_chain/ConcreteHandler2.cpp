/*
 * ConcreteHandler2.cpp
 *
 *  Created on: 2016年10月21日
 *      Author: JSS
 */

#include "ConcreteHandler2.h"

ConcreteHandler2::ConcreteHandler2(Handler* inPHandler) {
	this->m_pHandler = inPHandler;

}

ConcreteHandler2::~ConcreteHandler2() {
	if (m_pHandler!=0) {
			delete m_pHandler;
			m_pHandler = 0;
		} else {
			cout <<"ConcreateHandler2 haven't next processor object,so ConcreateHandler1 process"<<endl;
		}
}

void ConcreteHandler2::HandlerRequest() {
	if (m_pHandler!=0) {
		cout<<"ConcreteHandler2 request"<<endl;
	} else {
		cout <<"ConcreateHandler2 haven't next processor object,so ConcreateHandler1 process"<<endl;
	}
}
