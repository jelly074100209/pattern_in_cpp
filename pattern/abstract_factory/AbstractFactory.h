/*
 * AbstractFactory.h
 *
 *  Created on: 2016年10月14日
 *      Author: JSS
 */

#ifndef PATTERN_ABSTRACTFACTORY_H_
#define PATTERN_ABSTRACTFACTORY_H_
#include "AbstractProductA.h"
#include "AbstractProductB.h"
class AbstractFactory {
public:
	AbstractFactory();
	virtual ~AbstractFactory();

	virtual AbstractProductA *CreateProductA() = 0;
	virtual AbstractProductB *CreateProductB() = 0;
};

#endif /* PATTERN_ABSTRACTFACTORY_H_ */
