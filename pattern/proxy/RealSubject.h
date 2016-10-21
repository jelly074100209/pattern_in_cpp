/*
 * RealSubject.h
 *
 *  Created on: 2016年10月21日
 *      Author: JSS
 */

#ifndef PATTERN_PROXY_REALSUBJECT_H_
#define PATTERN_PROXY_REALSUBJECT_H_

#include "Subject.h"

class RealSubject: public Subject {
public:
	RealSubject();
	virtual ~RealSubject();
	virtual void Request();
};

#endif /* PATTERN_PROXY_REALSUBJECT_H_ */
