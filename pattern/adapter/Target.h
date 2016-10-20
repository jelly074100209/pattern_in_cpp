/*
 * Target.h
 *
 *  Created on: 2016年10月19日
 *      Author: JSS
 */

#ifndef PATTERN_ADAPTER_TARGET_H_
#define PATTERN_ADAPTER_TARGET_H_

class Target {
public:
	Target();
	virtual ~Target();
	virtual void Request() = 0;
};

#endif /* PATTERN_ADAPTER_TARGET_H_ */
