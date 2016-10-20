/*
 * Director.h
 *
 *  Created on: 2016年10月18日
 *      Author: JSS
 */

#ifndef PATTERN_BUILDER_DIRECTOR_H_
#define PATTERN_BUILDER_DIRECTOR_H_
#include "Builder.h"
using namespace std;

class Director {
private:
	Builder *builder;
public:
	Director(Builder *_builder);
	virtual ~Director();

	Food* BuilderFood();
};

#endif /* PATTERN_BUILDER_DIRECTOR_H_ */
