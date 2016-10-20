/*
 * Food.h
 *
 *  Created on: 2016年10月18日
 *      Author: JSS
 */

#ifndef PATTERN_BUILDER_FOOD_H_
#define PATTERN_BUILDER_FOOD_H_
#include <vector>
#include <string>
using namespace std;
class Food {
public:
	Food();
	virtual ~Food();
	void add(string foodName, int price);
	void show();
private:
	vector<string> mFoodName;
	vector<int> mPrice;
};

#endif /* PATTERN_BUILDER_FOOD_H_ */
