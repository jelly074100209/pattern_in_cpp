/*
 * Component.h
 *
 *  Created on: 2016年10月20日
 *      Author: JSS
 */

#ifndef PATTERN_COMPOSITE_COMPONENT_H_
#define PATTERN_COMPOSITE_COMPONENT_H_

#include <iostream>
#include <string>
using namespace std;

class Component {
public:
	Component();
	virtual ~Component();
	virtual void Add(Component*);
	virtual void Remove(Component*);
	virtual Component* GetChild(int index);

	virtual void Operation() = 0;
};

#endif /* PATTERN_COMPOSITE_COMPONENT_H_ */
