/*
 * SubtractNonterminalExpression.h
 *
 *  Created on: 2016年10月23日
 *      Author: Cherish
 */

#ifndef PATTERN_EXPRESSION_SUBTRACTNONTERMINALEXPRESSION_H_
#define PATTERN_EXPRESSION_SUBTRACTNONTERMINALEXPRESSION_H_

#include "Expression.h"

class SubtractNonterminalExpression: public Expression {
private:
	Expression* left;
	Expression* right;
public:
	SubtractNonterminalExpression(Expression*, Expression*);
	virtual ~SubtractNonterminalExpression();
	virtual int interpret(Context* context);
};

#endif /* PATTERN_EXPRESSION_SUBTRACTNONTERMINALEXPRESSION_H_ */
