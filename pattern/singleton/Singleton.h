/*
 * Singleton.h
 *
 *  Created on: 2016年10月17日
 *      Author: JSS
 */

#ifndef PATTERN_SINGLETON_H_
#define PATTERN_SINGLETON_H_
#include <memory>
#include <iostream>

class Singleton {
public:
	virtual ~Singleton();
    static void display();
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;
	static std::shared_ptr<Singleton> getInstance();
private:
	static std::shared_ptr<Singleton> _instance;
public:
	Singleton(); // TODO 单例模式一般要把构造函数设置为private，防止以构造函数方式获取对象
};

#endif /* PATTERN_SINGLETON_H_ */
