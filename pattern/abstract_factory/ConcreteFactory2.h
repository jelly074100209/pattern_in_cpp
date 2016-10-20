/*
 * ConcreteFactory2.h
 *
 *  Created on: 2016年10月14日
 *      Author: JSS
 */

#ifndef PATTERN_CONCRETEFACTORY2_H_
#define PATTERN_CONCRETEFACTORY2_H_

#include "AbstractFactory.h"

class ConcreteFactory2: public AbstractFactory {
public:
	ConcreteFactory2();
	virtual ~ConcreteFactory2();

	virtual AbstractProductA *CreateProductA();
	virtual AbstractProductB *CreateProductB();
};

#endif /* PATTERN_CONCRETEFACTORY2_H_ */
