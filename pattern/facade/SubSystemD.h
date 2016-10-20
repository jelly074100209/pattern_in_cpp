/*
 * SubSystemD.h
 *
 *  Created on: 2016年10月20日
 *      Author: JSS
 */

#ifndef PATTERN_FACADE_SUBSYSTEMD_H_
#define PATTERN_FACADE_SUBSYSTEMD_H_
#include <iostream>
using namespace std;

class SubSystemD {
public:
	SubSystemD();
	virtual ~SubSystemD();
	void show() { cout<<"showD"<<endl;}
};

#endif /* PATTERN_FACADE_SUBSYSTEMD_H_ */
