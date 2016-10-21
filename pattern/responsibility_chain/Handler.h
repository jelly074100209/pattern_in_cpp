/*
 * Handler.h
 *
 *  Created on: 2016年10月21日
 *      Author: JSS
 */

#ifndef PATTERN_RESPONSIBILITY_CHAIN_HANDLER_H_
#define PATTERN_RESPONSIBILITY_CHAIN_HANDLER_H_

#include <iostream>
using namespace std;

class Handler {
public:
	Handler();
	virtual ~Handler();
	virtual void HandlerRequest() = 0;
protected:
	Handler* m_pHandler;
};

#endif /* PATTERN_RESPONSIBILITY_CHAIN_HANDLER_H_ */
