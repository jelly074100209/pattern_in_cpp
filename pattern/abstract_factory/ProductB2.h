/*
 * ProductB2.h
 *
 *  Created on: 2016年10月14日
 *      Author: JSS
 */

#ifndef PATTERN_PRODUCTB2_H_
#define PATTERN_PRODUCTB2_H_

#include "AbstractProductB.h"

class ProductB2: public AbstractProductB {
public:
	ProductB2();
	~ProductB2() override;
	void display() override;
};

#endif /* PATTERN_PRODUCTB2_H_ */
