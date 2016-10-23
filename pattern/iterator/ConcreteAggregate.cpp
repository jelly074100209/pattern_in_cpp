/*
 * ConcreteAggregate.cpp
 *
 *  Created on: 2016年10月23日
 *      Author: Cherish
 */

#include "ConcreteAggregate.h"

ConcreteAggregate::ConcreteAggregate() {
	// TODO Auto-generated constructor stub
	m_pIterator = 0;
	m_vecItems.clear();
}

ConcreteAggregate::~ConcreteAggregate() {
	// TODO Auto-generated destructor stub
	if (m_pIterator != 0) {
		delete m_pIterator;
		m_pIterator = 0;
	}
}

Iterator* ConcreteAggregate::CreateIterator() {
	if (m_pIterator == 0) {
		m_pIterator = new ConcreteIterator(this);
	}
	return m_pIterator;
}

int ConcreteAggregate::Count() {
	return m_vecItems.size();
}

void ConcreteAggregate::Push(const string& strValue) {
	m_vecItems.push_back(strValue);
}

string ConcreteAggregate::Pop(const int nIndex) {
	string strRet;
	if (nIndex < Count()) {
		strRet = m_vecItems[nIndex];
	}
	return strRet;
}

