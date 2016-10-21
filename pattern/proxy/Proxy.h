/*
 * Proxy.h
 *
 *  Created on: 2016年10月21日
 *      Author: JSS
 */

#ifndef PATTERN_PROXY_PROXY_H_
#define PATTERN_PROXY_PROXY_H_

#include "Subject.h"
#include "RealSubject.h"

class Proxy: public Subject {
public:
	Proxy();
	virtual ~Proxy();
	virtual void Request();
private:
	RealSubject *m_pRealSubject;
};

#endif /* PATTERN_PROXY_PROXY_H_ */
