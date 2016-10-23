/*
 * Aggregate.h
 *
 *  Created on: 2016年10月23日
 *      Author: Cherish
 */

#ifndef PATTERN_ITERATOR_AGGREGATE_H_
#define PATTERN_ITERATOR_AGGREGATE_H_

#include <iostream>
#include <string>
#include <vector>
#include "Iterator.h"
using namespace std;

class Aggregate {
public:
	Aggregate();
	virtual ~Aggregate();

	virtual int Count() = 0;
	virtual void Push(const string& strValue) = 0;
	virtual string Pop(const int nIndex) = 0;
	virtual Iterator* CreateIterator() = 0;
};

#endif /* PATTERN_ITERATOR_AGGREGATE_H_ */
