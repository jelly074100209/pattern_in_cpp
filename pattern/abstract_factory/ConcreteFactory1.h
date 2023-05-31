/*
 * ConcreteFactory1.h
 *
 *  Created on: 2016年10月14日
 *      Author: JSS
 */

#ifndef PATTERN_CONCRETEFACTORY1_H_
#define PATTERN_CONCRETEFACTORY1_H_

#include "AbstractFactory.h"
#include <memory>

class ConcreteFactory1: public AbstractFactory {
public:
	ConcreteFactory1();
	~ConcreteFactory1() override;

	std::shared_ptr<AbstractProductA> CreateProductA() override;
	std::shared_ptr<AbstractProductB> CreateProductB() override;
};

#endif /* PATTERN_CONCRETEFACTORY1_H_ */
