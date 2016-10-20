/*
 * Food.cpp
 *
 *  Created on: 2016年10月18日
 *      Author: JSS
 */

#include "Food.h"
#include <iostream>
#include <string>
using namespace std;
Food::Food() {
	// TODO Auto-generated constructor stub

}

Food::~Food() {
	// TODO Auto-generated destructor stub
}

void Food::add(string foodName, int price) {
	mFoodName.push_back(foodName);
	mPrice.push_back(price);
}

void Food::show() {
	cout<<"food list:"<<endl;
	cout<<"______________"<<endl;
	for(int i=0; i<(int)mFoodName.size(); i++) {
		cout<<mFoodName[i]<<" "<<mPrice[i]<<endl;
	}
}
