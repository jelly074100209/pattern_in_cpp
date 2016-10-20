/*
 * Builder.h
 *
 *  Created on: 2016年10月18日
 *      Author: JSS
 */

#ifndef PATTERN_BUILDER_BUILDER_H_
#define PATTERN_BUILDER_BUILDER_H_
#include "Food.h"

class Builder {
public:
	Builder();
	virtual ~Builder();

	virtual void BuildCoolDish() = 0;
	virtual void BuildDrink() = 0;
	virtual void BuildRice() = 0;
	virtual Food* GetFood() = 0;
};

#endif /* PATTERN_BUILDER_BUILDER_H_ */
