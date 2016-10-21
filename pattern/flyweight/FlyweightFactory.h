/*
 * FlyweightFactory.h
 *
 *  Created on: 2016年10月21日
 *      Author: JSS
 */

#ifndef PATTERN_FLYWEIGHT_FLYWEIGHTFACTORY_H_
#define PATTERN_FLYWEIGHT_FLYWEIGHTFACTORY_H_

#include <vector>
#include "Flyweight.h"
#include "ConcreteFlyWeight.h"

class FlyweightFactory {
private:
	vector<Flyweight*> m_flyWeights;
public:
	FlyweightFactory();
	virtual ~FlyweightFactory();
	Flyweight* GetFlyWeight(int key);
	inline int size() {return (int)this->m_flyWeights.size();}
};

#endif /* PATTERN_FLYWEIGHT_FLYWEIGHTFACTORY_H_ */
