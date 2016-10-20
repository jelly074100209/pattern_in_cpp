/*
 * Adapter.h
 *
 *  Created on: 2016年10月19日
 *      Author: JSS
 */

#ifndef PATTERN_ADAPTER_ADAPTER_H_
#define PATTERN_ADAPTER_ADAPTER_H_

#include "Target.h"
#include "Adaptee.h"
class Adapter: public Target {
private:
	 //通过类的组合，实现适配的接口
	Adaptee *adaptee;
public:
	Adapter();
	virtual ~Adapter();
	virtual void Request();
};

#endif /* PATTERN_ADAPTER_ADAPTER_H_ */
