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
	~ConcreteFactory2() override;

	shared_ptr<AbstractProductA> CreateProductA() override;
	shared_ptr<AbstractProductB> CreateProductB() override;
};

#endif /* PATTERN_CONCRETEFACTORY2_H_ */
