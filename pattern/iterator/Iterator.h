/*
 * Iterator.h
 *
 *  Created on: 2016年10月23日
 *      Author: Cherish
 */

#ifndef PATTERN_ITERATOR_ITERATOR_H_
#define PATTERN_ITERATOR_ITERATOR_H_

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Iterator {
public:
	Iterator();
	virtual ~Iterator();

	virtual string First() = 0;
	virtual string Next() = 0;
	virtual string GetCur() = 0;
	virtual bool IsEnd() = 0;
};

#endif /* PATTERN_ITERATOR_ITERATOR_H_ */
