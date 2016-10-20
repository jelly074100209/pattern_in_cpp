/*
 * prototype.h
 *
 *  Created on: 2016年10月19日
 *      Author: JSS
 */

#ifndef PATTERN_PROTOTYPE_PROTOTYPE_H_
#define PATTERN_PROTOTYPE_PROTOTYPE_H_

#include <iostream>
using namespace std;

class prototype {
public:
	prototype();
	virtual ~prototype();
	virtual prototype* clone() = 0;
};

#endif /* PATTERN_PROTOTYPE_PROTOTYPE_H_ */
