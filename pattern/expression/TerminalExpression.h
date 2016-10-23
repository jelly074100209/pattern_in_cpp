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
	string data;
public:
	TerminalExpression(string data);
	virtual ~TerminalExpression();
	virtual bool interpret(string context);
};

#endif /* PATTERN_EXPRESSION_TERMINALEXPRESSION_H_ */
