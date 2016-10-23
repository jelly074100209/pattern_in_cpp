/*
 * TerminalExpression.h
 *
 *  Created on: 2016年10月23日
 *      Author: jss
 */

#ifndef PATTERN_EXPRESSION_TERMINALEXPRESSION_H_
#define PATTERN_EXPRESSION_TERMINALEXPRESSION_H_

#include "Expression.h"

class TerminalExpression: public Expression {
private:
	int i;
public:
	TerminalExpression(int i);
	virtual ~TerminalExpression();
	virtual int interpret(Context* context);
};

#endif /* PATTERN_EXPRESSION_TERMINALEXPRESSION_H_ */
