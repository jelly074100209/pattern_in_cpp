/*
 * ConcreteAggregate.h
 *
 *  Created on: 2016年10月23日
 *      Author: Cherish
 */

#ifndef PATTERN_ITERATOR_CONCRETEAGGREGATE_H_
#define PATTERN_ITERATOR_CONCRETEAGGREGATE_H_

#include "Aggregate.h"
#include "ConcreteIterator.h"

class ConcreteAggregate: public Aggregate {
public:
	ConcreteAggregate();
	virtual ~ConcreteAggregate();
	virtual int Count();
	virtual void Push(const string& strValue);
	virtual string Pop(const int nIndex);
	virtual Iterator* CreateIterator();
private:
	vector<string> m_vecItems;
	Iterator* m_pIterator;
};

#endif /* PATTERN_ITERATOR_CONCRETEAGGREGATE_H_ */
