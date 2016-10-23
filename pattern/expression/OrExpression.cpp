/*
 * OrExpression.cpp
 *
 *  Created on: 2016年10月23日
 *      Author: jss
 */

#include "OrExpression.h"

OrExpression::OrExpression(Expression* expr1, Expression* expr2) {
	this->expr1 = expr1;
	this->expr2 = expr2;
}

OrExpression::~OrExpression() {
	delete expr1;
	delete expr2;
}

bool OrExpression::interpret(string context) {
	return expr1->interpret(context) || expr2->interpret(context);
}
