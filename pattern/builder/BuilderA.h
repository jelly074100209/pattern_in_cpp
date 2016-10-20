/*
 * BuilderA.h
 *
 *  Created on: 2016年10月18日
 *      Author: JSS
 */

#ifndef PATTERN_BUILDER_BUILDERA_H_
#define PATTERN_BUILDER_BUILDERA_H_

#include "Builder.h"
#include <iostream>
#include <string>
using namespace std;
class BuilderA: public Builder {
public:
	BuilderA();
	virtual ~BuilderA();

	virtual void BuildCoolDish();
	virtual void BuildDrink();
	virtual void BuildRice();
	virtual Food* GetFood();
private:
	Food *food;
};

#endif /* PATTERN_BUILDER_BUILDERA_H_ */
