/*
 * Leaf.h
 *
 *  Created on: 2016年10月20日
 *      Author: JSS
 */

#ifndef PATTERN_COMPOSITE_LEAF_H_
#define PATTERN_COMPOSITE_LEAF_H_

#include "Component.h"

class Leaf: public Component {
public:
	Leaf();
	virtual ~Leaf();

	virtual void Operation();
};

#endif /* PATTERN_COMPOSITE_LEAF_H_ */
