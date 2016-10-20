/*
 * BuilderA.cpp
 *
 *  Created on: 2016年10月18日
 *      Author: JSS
 */

#include "BuilderA.h"

BuilderA::BuilderA() {
	// TODO Auto-generated constructor stub
	food = new Food();
}

BuilderA::~BuilderA() {
	// TODO Auto-generated destructor stub
	delete food;
}

void BuilderA::BuildCoolDish() {
	cout<<"凉菜加入工序"<<endl;
	food->add("CoolDish", 20);
}

void BuilderA::BuildDrink() {
	cout<<"饮料加入工序"<<endl;
	food->add("Drink", 15);
}

void BuilderA::BuildRice() {
	cout<<"米饭加入工序"<<endl;
	food->add("Rice", 10);
}

Food* BuilderA::GetFood() {
	return food;
}
