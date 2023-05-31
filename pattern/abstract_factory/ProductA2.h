/*
 * ProductA2.h
 *
 *  Created on: 2016年10月14日
 *      Author: JSS
 */

#ifndef PATTERN_PRODUCTA2_H_
#define PATTERN_PRODUCTA2_H_

#include "AbstractProductA.h"

class ProductA2: public AbstractProductA {
public:
	ProductA2();
	~ProductA2() override;
	void display() override;
};

#endif /* PATTERN_PRODUCTA2_H_ */
