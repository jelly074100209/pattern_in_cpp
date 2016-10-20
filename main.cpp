/*
 * main.cpp
 *
 *  Created on: 2016年9月9日
 *      Author: JSS
 */

/**
 * TODO:有些演示没有很好的进去指针回收
 */
#include <iostream>
#include "pattern/abstract_factory/AbstractFactory.h"
#include "pattern/abstract_factory/ConcreteFactory1.h"
#include "pattern/abstract_factory/AbstractProductA.h"
#include "pattern/abstract_factory/ProductA1.h"

#include "pattern/singleton/Singleton.h"

#include "pattern/builder/Builder.h"
#include "pattern/builder/BuilderA.h"
#include "pattern/builder/director.h"

#include "pattern/factory_method/database.h"
#include "pattern/factory_method/DB.h"
#include "pattern/factory_method/MongoDB.h"
#include "pattern/factory_method/MysqlDB.h"

#include "pattern/prototype/prototype.h"
#include "pattern/prototype/concreteprototype1.h"

#include "pattern/adapter/Target.h"
#include "pattern/adapter/Adapter.h"

#include "pattern/bridge/Abstraction.h"
#include "pattern/bridge/RefinedAbstraction.h"
#include "pattern/bridge/ConcreteImplementorA.h"

#include "pattern/composite/Composite.h"
#include "pattern/composite/Leaf.h"

using namespace std;

/**
 * 面向对象的原则：
 * 单一职责原则（Single Responsibility Principle SRP）
 * 开闭原则（Open Closed Principle OCP）模块对扩展开放，对修改关闭
 * 里氏替换原则（Liskov Substitution Principle LSP）如果调用的是父类，则用子类代替也行
 * 依赖倒转原则（Dependency Inversion Principle DIP）把父类替换为子类，程序行为没有变化
 * 接口隔离原则（Interface Segregation Principle ISP）每一种接口只干自己应该做的那一件事
 * 合成/聚合复用原则（Composite/Aggregate Reuse Principle CARP）--组合原则（组合优先于继承）
 * 最小知识原则（Principle of Least Knowledge, PLK）--迪米特法则（每个对象应对其他对象有尽可能少的了解）
 */

int main() {
	/**
	 * 抽象工厂
	 * 提供一个创建一系列相关或相互依赖对象的接口，而无需指定它们具体的类（里氏替换原则）
	 * 适用性
	 *   一个系统要独立于它的产品的创建、组合和表示时
	 *   一个系统要由多个产品系列中的一个来配置时
	 *   当你要强调一系列相关的产品对象的设计以便进行联合使用时
	 *   当你提供一个产品类库，而只想显示它们的接口而不是实现时
	 */
	AbstractFactory *factory = new ConcreteFactory1();
	AbstractProductA *productA1 = factory->CreateProductA();
	productA1->display();
	delete productA1;
	delete factory;

	/**
	 * 单例模式
	 * 保证类只有一个实例，并提供一个访问它的全局访问点
	 * 适用性
	 *   当类只能有一个实例而且客户可以从一个众所周知的访问点访问它时
	 *   当这个唯一实例应该是通过子类化可扩展的，并且客户应该无需更改代码就能使用一个扩展的实例时
	 */
	Singleton *singleton = Singleton::getInstance();
	delete singleton;

	/**
	 * 建造者模式
	 * 将一个复杂对象的创建与表示分离，使得同样的构建过程可以创建不同的表示（依赖倒转）
	 * 适用性
	 *   当创建复杂对象的算法应该独立于该对象的组成部分以及它们的装配方式时
	 *   当构造过程必须允许被构造的对象有不同的表示时
	 */
	BuilderA *builder = new BuilderA();
	Director director(builder);
	director.BuilderFood();
	delete builder;

	/**
	 * 工厂方法模式
	 * 定义一个用于创建对象的接口，让子类决定实例化哪一个类。工厂方法使一个类的实例化延迟到其子类
	 * 适用性
	 *   当一个类不知道它所必须创建的对象的类的时候
	 *   当一个类希望由它的子类来指定它所创建的对象的时候
	 *   当类将创建对象的职责委托给多个帮助子类中的某一个，并且你希望将哪一个帮助子类是代理者这一信息局部化的时候
	 */
	DB *mongo_factory = new MongoDB();
	database *mongodb = mongo_factory->createDB();
	mongodb->display();

	DB *mysql_factory = new MysqlDB();
	database *mysql = mysql_factory->createDB();
	mysql->display();
	delete mongodb;
	delete mysql;

	/**
	 * 原型模式
	 * 用原型实例指定创建对象的种类，并且通过拷贝这些原型创建新的对象
	 * 适用性
	 *   当一个系统应该独立于它的产品创建、构成和表示时，要使用Prototype模式
	 *   当要实例化的类是在运行时刻指定时，例如，通过动态装载
	 *   为了避免创建一个与产品类层次平行的工厂类层次时
	 *   当一个类的实例只能有几个不同状态组合中一种时。建立相应数目的原型并克隆它们可能比每次用合适的状态手工实例化该类更方便一些。
	 */
	prototype *p1 = new concreteprototype1();
	prototype *p2 = p1->clone();
	delete p2;
	delete p1;

	/**
	 * 适配器模式
	 * 将一个类的接口转换成客户希望的另外一个接口。Adapter模式使得原本由于接口不兼容而不能一起工作的那些类可以一起工作
	 * 适用性
	 *   你想使用一个已经存在的类，而它的接口不符合你的需求
	 *   你想创建一个可以复用的类，该类可以与其他不相关的类或不可预见的类（即那些接口可能不一定兼容的类）协同工作
	 *   （仅适用于对象Adapter）你想使用一些已经存在的子类，但是不可能对每一个都进行子类化以匹配它们的接口。对象适配器可以适配它的父类接口
	 */
	Target *target = new Adapter();
	target->Request();
	delete target;

	/**
	 * 桥接模式
	 * 将抽象部分与它的实现部分分离，使它们都可以独立地变化
	 * 适用性
	 *   你不希望在抽象和它的实现部分之间有一个固定的绑定关系，例如这种情况可能是因为在程序运行时刻实现部分应可以被选择或者切换。
	 *   类的抽象以及它的实现都应该可以通过生成子类的方法加以扩充，这时Bridge模式使你可以对不同的抽象接口和实现部分进行组合，并分别对它们进行扩充。
	 *   对一个抽象的实现部分的修改应对客户不产生影响，即客户的代码不必重新编译。
	 *   （C++）你想对客户完全隐藏抽象的实现部分。在C++中， 类的表示在类接口中是可见的。
	 *   正如在意图一节的第一个类图中所示的那样，在许多类要生成。这样一种类层次结构说明你必须将一个对象分解成两个部分。
	 *   你想在多个对象间共享实现（可能使用引用计数），但同时要求客户并不知道这一点。
	 */
	Abstraction *ab = new RefinedAbstraction();
	ab->SetImplementor(new ConcreteImplementorA());
	ab->Operation();
	delete ab;

	/**
	 * 组合模式
	 * 将对象组合成树形以表示“部分-整体”的层次结构。Composite使得用户对单个对象和组合对象的使用具有一致性
	 * 适用性
	 *   你想表示对象的部分-整体层次结构
	 *   你希望用户忽略组合对象与单个对象的不同，用户将统一地使用组合结构中的所有对象
	 */
	Composite* pRoot = new Composite();
	pRoot->Add(new Leaf());
	Leaf* pLeaf1 = new Leaf();
	Leaf* pLeaf2 = new Leaf();

	pLeaf1->Add(pLeaf2);
	pLeaf1->Remove(pLeaf2);
	pLeaf1->Operation();

	Composite* pCom = new Composite();
	pCom->Add(pLeaf1);
	pCom->Add(pLeaf2);
	pCom->Operation();

	pRoot->Add(pCom);
	pRoot->Operation();

	/**
	 * 装饰模式
	 * 动态地给一个对象添加一些额外的职责。就增加功能来说，Decorator模式相比生成子类更为灵活
	 * 适用性
	 * 在不影响其他对象的情况下，以动态透明的方式给单个对象添加职责
	 * 处理那些可以撤消的职责
	 * 当不能采用生成子类的方法进行扩充时。一种情况是，可能有大量独立的扩展，为支持每一种组合将产生大量的子类，
	 * 使得子类数目呈爆炸性增长。另一种情况可能是因为类定义被隐藏，或 类定义不能用于生成子类。
	 */

	return 0;
}




