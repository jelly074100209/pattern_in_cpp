/*
 * ConcreteIterator.cpp
 *
 *  Created on: 2016年10月23日
 *      Author: Cherish
 */

#include "ConcreteIterator.h"

ConcreteIterator::ConcreteIterator(Aggregate* pAggregate) {
	// TODO Auto-generated constructor stub
	m_nCurrent = 0;
	m_Aggregate = pAggregate;

}

ConcreteIterator::~ConcreteIterator() {
	// TODO Auto-generated destructor stub
}

string ConcreteIterator::First() {
	return m_Aggregate->Pop(0);
}

string ConcreteIterator::Next() {
	string strRet;
	m_nCurrent++;
	if(m_nCurrent < m_Aggregate->Count()) {
		strRet = m_Aggregate->Pop(m_nCurrent);
	}
	return strRet;
}

string ConcreteIterator::GetCur() {
	return m_Aggregate->Pop(m_nCurrent);
}

bool ConcreteIterator::IsEnd() {
	return ((m_nCurrent >= m_Aggregate->Count()) ? true : false);
}
