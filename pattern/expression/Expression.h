/*
 * Expression.h
 *
 *  Created on: 2016年10月23日
 *      Author: jss
 */

#ifndef PATTERN_EXPRESSION_EXPRESSION_H_
#define PATTERN_EXPRESSION_EXPRESSION_H_

#include "Context.h"

class Expression {
public:
	Expression();
	virtual ~Expression();
	virtual int interpret(Context* context) = 0;
};

#endif /* PATTERN_EXPRESSION_EXPRESSION_H_ */
