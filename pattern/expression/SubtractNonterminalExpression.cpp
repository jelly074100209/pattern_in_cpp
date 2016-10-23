/*
 * SubtractNonterminalExpression.cpp
 *
 *  Created on: 2016年10月23日
 *      Author: Cherish
 */

#include "SubtractNonterminalExpression.h"

SubtractNonterminalExpression::SubtractNonterminalExpression(Expression* left, Expression* right) {
	// TODO Auto-generated constructor stub
	this->left = left;
	this->right = right;

}

SubtractNonterminalExpression::~SubtractNonterminalExpression() {
	// TODO Auto-generated destructor stub
}

int SubtractNonterminalExpression::interpret(Context* context) {
	return this->left->interpret(context) - this->right->interpret(context);
}

