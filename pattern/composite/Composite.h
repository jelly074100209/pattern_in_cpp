/*
 * Composite.h
 *
 *  Created on: 2016年10月20日
 *      Author: JSS
 */

#ifndef PATTERN_COMPOSITE_COMPOSITE_H_
#define PATTERN_COMPOSITE_COMPOSITE_H_

#include "Component.h"
#include <vector>
class Composite: public Component {
public:
	Composite();
	virtual ~Composite();

	void Operation();
	void Add(Component*);
	void Remove(Component*);
	Component* GetChild(int index);
private:
	vector<Component*> m_ComVec;
};

#endif /* PATTERN_COMPOSITE_COMPOSITE_H_ */
