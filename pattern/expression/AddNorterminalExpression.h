/*
 * AddNorterminalExpression.h
 *
 *  Created on: 2016年10月23日
 *      Author: Cherish
 */

#ifndef PATTERN_EXPRESSION_ADDNORTERMINALEXPRESSION_H_
#define PATTERN_EXPRESSION_ADDNORTERMINALEXPRESSION_H_

#include "Expression.h"

class AddNorterminalExpression: public Expression {
private:
	Expression* left;
	Expression* right;
public:
	AddNorterminalExpression(Expression* left, Expression* right);
	virtual ~AddNorterminalExpression();
	virtual int interpret(Context* context);
};

#endif /* PATTERN_EXPRESSION_ADDNORTERMINALEXPRESSION_H_ */
