/*
 * ProductA1.h
 *
 *  Created on: 2016年10月14日
 *      Author: JSS
 */

#ifndef PATTERN_PRODUCTA1_H_
#define PATTERN_PRODUCTA1_H_

#include "AbstractProductA.h"

class ProductA1: public AbstractProductA {
public:
	ProductA1();
	virtual ~ProductA1();
	virtual void display();
};

#endif /* PATTERN_PRODUCTA1_H_ */
