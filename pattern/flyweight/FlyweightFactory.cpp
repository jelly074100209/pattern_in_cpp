/*
 * FlyweightFactory.cpp
 *
 *  Created on: 2016年10月21日
 *      Author: JSS
 */

#include "FlyweightFactory.h"

FlyweightFactory::FlyweightFactory() {
	Flyweight* tmp = new ConcreteFlyWeight();
	this->m_flyWeights.push_back(tmp);

}

FlyweightFactory::~FlyweightFactory() {
	Flyweight* tmp = this->m_flyWeights.at(0);//返回的是引用所以可以直接delete
	delete tmp;
	tmp = NULL;
}

Flyweight* FlyweightFactory::GetFlyWeight(int key) {
	int size = this->size();
	if (size > key) {
		return this->m_flyWeights.at(key);
	} else {
		Flyweight* tmp = new ConcreteFlyWeight();
		this->m_flyWeights.push_back(tmp);
		return tmp;
	}
}

