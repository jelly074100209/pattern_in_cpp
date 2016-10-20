/*
 * ConcreteFactory1.h
 *
 *  Created on: 2016年10月14日
 *      Author: JSS
 */

#ifndef PATTERN_CONCRETEFACTORY1_H_
#define PATTERN_CONCRETEFACTORY1_H_

#include "AbstractFactory.h"

class ConcreteFactory1: public AbstractFactory {
public:
	ConcreteFactory1();
	virtual ~ConcreteFactory1();

	virtual AbstractProductA* CreateProductA();
	virtual AbstractProductB* CreateProductB();
};

#endif /* PATTERN_CONCRETEFACTORY1_H_ */
