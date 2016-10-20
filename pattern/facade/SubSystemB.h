/*
 * SubSystemB.h
 *
 *  Created on: 2016年10月20日
 *      Author: JSS
 */

#ifndef PATTERN_FACADE_SUBSYSTEMB_H_
#define PATTERN_FACADE_SUBSYSTEMB_H_
#include <iostream>
using namespace std;

class SubSystemB {
public:
	SubSystemB();
	virtual ~SubSystemB();
	void show() { cout<<"showB"<<endl;}
};

#endif /* PATTERN_FACADE_SUBSYSTEMB_H_ */
