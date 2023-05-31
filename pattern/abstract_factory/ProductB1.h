/*
 * ProductB1.h
 *
 *  Created on: 2016年10月14日
 *      Author: JSS
 */

#ifndef PATTERN_PRODUCTB1_H_
#define PATTERN_PRODUCTB1_H_

#include "AbstractProductB.h"

class ProductB1: public AbstractProductB {
public:
	ProductB1();
    ~ProductB1() override;
    void display() override;
};

#endif /* PATTERN_PRODUCTB1_H_ */
