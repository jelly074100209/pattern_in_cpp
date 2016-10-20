/*
 * Director.cpp
 *
 *  Created on: 2016年10月18日
 *      Author: JSS
 */

#include "Director.h"

Director::Director(Builder *_builder) {
	// TODO Auto-generated constructor stub
	builder = _builder;
}

Director::~Director() {
	// TODO Auto-generated destructor stub
}

Food* Director::BuilderFood() {
	builder->BuildCoolDish();
	builder->BuildDrink();
	builder->BuildRice();
}

