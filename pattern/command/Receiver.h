/*
 * Receiver.h
 *
 *  Created on: 2016年10月22日
 *      Author: Cherish
 */

#ifndef PATTERN_COMMAND_RECEIVER_H_
#define PATTERN_COMMAND_RECEIVER_H_

#include <iostream>
using namespace std;

class Receiver {
public:
	Receiver();
	virtual ~Receiver();

	void executeCommandA();
	void executeCommandB();
};

#endif /* PATTERN_COMMAND_RECEIVER_H_ */
