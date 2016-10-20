/*
 * Singleton.h
 *
 *  Created on: 2016年10月17日
 *      Author: JSS
 */

#ifndef PATTERN_SINGLETON_H_
#define PATTERN_SINGLETON_H_

class Singleton {
public:
	virtual ~Singleton();
	static Singleton* getInstance();
private:
	static Singleton* _instance;
	Singleton();
};

#endif /* PATTERN_SINGLETON_H_ */
