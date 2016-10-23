/*
 * AddNorterminalExpression.cpp
 *
 *  Created on: 2016年10月23日
 *      Author: Cherish
 */

#include "AddNorterminalExpression.h"

AddNorterminalExpression::AddNorterminalExpression(Expression* left, Expression* right) {
	// TODO Auto-generated constructor stub
	this->left = left;
	this->right = right;
}

AddNorterminalExpression::~AddNorterminalExpression() {
	// TODO Auto-generated destructor stub
}

int AddNorterminalExpression::interpret(Context* context) {
	return this->left->interpret(context) + this->right->interpret(context);
}
