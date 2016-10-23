/*
 * OrExpression.h
 *
 *  Created on: 2016年10月23日
 *      Author: jss
 */

#ifndef PATTERN_EXPRESSION_OREXPRESSION_H_
#define PATTERN_EXPRESSION_OREXPRESSION_H_

#include "Expression.h"

class OrExpression: public Expression {
private:
	Expression* expr1;
	Expression* expr2;
public:
	OrExpression(Expression*, Expression*);
	virtual ~OrExpression();
	bool virtual interpret(string context);
};

#endif /* PATTERN_EXPRESSION_OREXPRESSION_H_ */
