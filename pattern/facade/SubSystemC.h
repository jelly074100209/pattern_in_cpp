/*
 * SubSystemC.h
 *
 *  Created on: 2016年10月20日
 *      Author: JSS
 */

#ifndef PATTERN_FACADE_SUBSYSTEMC_H_
#define PATTERN_FACADE_SUBSYSTEMC_H_
#include <iostream>
using namespace std;

class SubSystemC {
public:
	SubSystemC();
	virtual ~SubSystemC();
	void show() { cout<<"showC"<<endl;}
};

#endif /* PATTERN_FACADE_SUBSYSTEMC_H_ */
