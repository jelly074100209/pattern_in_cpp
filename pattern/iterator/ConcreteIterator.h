/*
 * ConcreteIterator.h
 *
 *  Created on: 2016年10月23日
 *      Author: Cherish
 */

#ifndef PATTERN_ITERATOR_CONCRETEITERATOR_H_
#define PATTERN_ITERATOR_CONCRETEITERATOR_H_

#include "Iterator.h"
#include "Aggregate.h"

class ConcreteIterator: public Iterator {
public:
	ConcreteIterator(Aggregate* pAggregate);
	virtual ~ConcreteIterator();
	virtual string First();
	virtual string Next();
	virtual string GetCur();
	virtual bool IsEnd();
private:
	Aggregate* m_Aggregate;
	int m_nCurrent;
};

#endif /* PATTERN_ITERATOR_CONCRETEITERATOR_H_ */
