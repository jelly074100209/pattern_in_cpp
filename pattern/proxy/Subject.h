/*
 * Subject.h
 *
 *  Created on: 2016年10月21日
 *      Author: JSS
 */

#ifndef PATTERN_PROXY_SUBJECT_H_
#define PATTERN_PROXY_SUBJECT_H_

#include <iostream>
#include <string>
using namespace std;

class Subject {
public:
	Subject();
	virtual ~Subject();
	virtual void Request() = 0;
};

#endif /* PATTERN_PROXY_SUBJECT_H_ */
