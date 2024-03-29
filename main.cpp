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
#include "pattern/builder/Director.h"

#include "pattern/factory_method/database.h"
#include "pattern/factory_method/DBInterface.h"
#include "pattern/factory_method/MongoDBInterface.h"
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

#include "pattern/decorator/Phone.h"
#include "pattern/decorator/NokiaPhone.h"
#include "pattern/decorator/DecoratorPhoneA.h"

#include "pattern/facade/Facade.h"

#include "pattern/flyweight/FlyweightFactory.h"
#include "pattern/flyweight/Flyweight.h"

#include "pattern/proxy/Proxy.h"
#include "pattern/proxy/Subject.h"

#include "pattern/responsibility_chain/ConcreteHandler1.h"
#include "pattern/responsibility_chain/ConcreteHandler2.h"

#include "pattern/command/Invoker.h"
#include "pattern/command/ConcreteCommandA.h"
#include "pattern/command/ConcreteCommandB.h"
#include "pattern/command/Receiver.h"

#include "pattern/expression/Context.h"
#include "pattern/expression/SubtractNonterminalExpression.h"
#include "pattern/expression/AddNorterminalExpression.h"
#include "pattern/expression/TerminalExpression.h"

#include "pattern/iterator/Iterator.h"
#include "pattern/iterator/ConcreteAggregate.h"

#include "pattern/mediator/ConcreteMediator.h"
#include "pattern/mediator/ConcreteColleague1.h"
#include "pattern/mediator/ConcreteColleague2.h"

#include "pattern/memento/Originator.h"
#include "pattern/memento/Caretaker.h"

#include "pattern/observer/ConcreteSubjector.h"
#include "pattern/observer/Subjector.h"
#include "pattern/observer/Observer.h"
#include "pattern/observer/ConcreteObserver.h"

#include "pattern/state/Request.h"
#include "pattern/state/GetState.h"

#include "pattern/strategy/StrategyContext.h"
#include "pattern/strategy/ConcreteStrategyA.h"
#include "pattern/strategy/ConcreteStrategyB.h"
#include "pattern/strategy/Strategy.h"

#include "pattern/template/TemplateMethod.h"
#include "pattern/template/ConcreteTemplateMethod.h"

#include "pattern/visitor/ObjectStructure.h"
#include "pattern/visitor/ConcreteElementA.h"
#include "pattern/visitor/ConcreteElementB.h"
#include "pattern/visitor/ConcreteVisitor1.h"
#include "pattern/visitor/ConcreteVisitor2.h"

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

	delete pLeaf1;
	delete pLeaf2;
	delete pCom;
	delete pRoot;

	/**
	 * 装饰模式
	 * 动态地给一个对象添加一些额外的职责。就增加功能来说，Decorator模式相比生成子类更为灵活
	 * 适用性
	 * 在不影响其他对象的情况下，以动态透明的方式给单个对象添加职责
	 * 处理那些可以撤消的职责
	 * 当不能采用生成子类的方法进行扩充时。一种情况是，可能有大量独立的扩展，为支持每一种组合将产生大量的子类，
	 * 使得子类数目呈爆炸性增长。另一种情况可能是因为类定义被隐藏，或 类定义不能用于生成子类。
	 */
	Phone *phone = new NokiaPhone("lumia 925");
	Phone *dpa = new DecoratorPhoneA(phone);
	dpa->ShowDecorate();
	delete dpa;
	delete phone;

	/**
	 * 外观模式
	 * 为子系统中的一组接口提供一个一致的界面，Facade模式定义了一个高层接口，这个接口使得这一子系统更加容易使用
	 * 适用性
	 *   当你要为一个复杂子系统提供一个简单接口时。子系统往往因为不断深化而变得越来越复杂。大多数模式使用时都会产生
	 *   更多更小的类。这使得子系统更具可重用性，也更容易对子系统进行定制，但这也给那些不需要定制子系统的用户带来一
	 *   些使用上的困难。Facade可以提供一个简单的缺省视图，这一视图对大多数用户来说已经足够，而那些需要更多的可定制
	 *   的用户可以越过Facade层。
	 *   客户程序与抽象类的实现部分之间存在着很大的依赖性。引入Facade将这个子系统与客户以及其他的子系统分离，可以提高
	 *   子系统的独立性和可移植性。
	 *   当你需要构建一个层次结构的子系统时，使用facade模式定义子系统中每层的入口点。如果子系统之间是相互依赖的，你可以
	 *   让它们仅通过facade进行通讯，从而简化了它们之间的依赖关系。
	 */

	Facade facade;
	facade.MethodA();
	facade.MethodB();

	/**
	 * 享元模式
	 * 运用共享技术有效地支持大量细粒度的对象
	 * 适用性
	 *   一个应用程序使用了大量的对象
	 *   完全由于使用大量的对象，造成很大的存储开销
	 *   对象的大多数状态都可变为外部状态
	 *   如果删除对象的外部状态，那么可以用相对较少的共享对象取代很多组对象
	 *   应用程序不依赖对象标识。由于Flyweight对象可以被共享，对于概念上明显有别的对象，标识测试将返回真值
	 */

	FlyweightFactory *flyweight_factory = new FlyweightFactory();
	Flyweight *flyWeight = flyweight_factory->GetFlyWeight(1);
	flyWeight->operation();
	cout<<"flyweight size is: "<<flyweight_factory->size()<<endl;
	delete flyweight_factory;

	/**
	 * 代理模式
	 * 为其他对象提供一种代理以控制对这个对象的访问
	 * 适用性
	 *   远程代理 为一个对象在不同地址空间提供局部代表
	 *   虚代理  根据需要创建开销很大的对象
	 *   保护代理 控制对原始对象的访问。保护代理用于对象应该有不同的访问权限的时候。
	 *   智能指引 取代了简单的指针，它在访问对象时执行一些附加操作。它的典型用途包括
	 *   	（对指向实际对象的引用计数，这样当该对象没有引用时，可以自动翻译它）
	 *   	（当第一次引用一个持久对象时，将它装入内存）
	 *   	（在访问一个实际对象前，检查是否已经锁定了它，以确保其他对象不能改变它）
	 */

	Subject *pSubject = new Proxy();
	pSubject->Request();
	delete pSubject;

	/**
	 * 职责链模式
	 * 使多个对象都有机会处理请求，从而避免请求的发送者和接收者之间的耦合关系。将这些对象连成一条链，并沿着这条链传递该请求，直到有一个对象处理它为止。
	 * 适用性
	 *   有多个对象可以处理这一请求，哪个对象处理该请求运行时刻自动确定
	 *   你想在不明确指定接收者的情况下，向多个对象中的一个提交一个请求
	 *   可处理一个请求的对象集合应被动态指定
	 */
	ConcreteHandler2 *handler2 = new ConcreteHandler2(0);
	ConcreteHandler1 *handler1 = new ConcreteHandler1(handler2);
	handler1->HandlerRequest();

	/**
	 * 命令模式
	 * 将一个请求封闭为一个对象，从而使你可用不同的请求对客户进行参数化；对请求排队或记录请求日志，以及支持可撤消操作
	 * 适用性
	 *   抽象出待执行的动作以参数化某对象。Command模式是回调机制的一个面向对象的替代品
	 *   在不同的时刻指定、排列和执行请求。
	 *   支持取消操作
	 *   支持个性日志，这样当系统崩溃时，这些修改可以被重做一遍
	 */
	Receiver *receiver = new Receiver();
	ConcreteCommandA *cmdA = new ConcreteCommandA(receiver);
	ConcreteCommandB *cmdB = new ConcreteCommandB(receiver);
	Invoker *invoker = new Invoker();
	invoker->setCommand(cmdA);
	invoker->setCommand(cmdB);
	invoker->Notify();

	/**
	 * 解释器模式
	 * 给定一个语言，定义它的方法的一种表示，并定义一个解释器，这个解释器使用该表示来解释语言中的句子
	 * 适用性
	 *   当有一个语言需要解释执行，并且你可将该语言中的句子表示为一个抽象语法树时，可使用解释器模式。而当存在以下情况时该模式效果最好：
	 *   	该方法简单对于复杂的文法，文法的类层次变得庞大而无法管理。此时语法分析程序生成器这样的工具是更好的选择。它们无需构建抽象语法树
	 *   	即可解释表达式，这样可以节省空间而且还可能节省时间
	 *   	效率不是一个关键问题最高效的解释器通常不是通过直接解释语法分析树实现的，而是首先将它们转换成另一种形式。例如，正则表达式通常被
	 *   	转换成状态机。但即使在这种情况下，转换器仍可用解释器模式实现，该模式仍是有用的。
	 */
	Context *context = new Context();
	context->addValue("a", 7);
	context->addValue("b", 8);
	context->addValue("c", 2);
	SubtractNonterminalExpression *subtractValue = new SubtractNonterminalExpression(new TerminalExpression(
	        context->getValue("a")), new TerminalExpression(context->getValue("b")));

	AddNorterminalExpression *addValue = new AddNorterminalExpression(subtractValue, new TerminalExpression(
	        context->getValue("c")));

	cout<< addValue->interpret(context);

	/**
	 * 迭代器
	 * 提供一种方法顺序访问一个聚合对象中各个元素，而又需要暴露该对象的内部表示
	 * 适用性
	 *   访问一个聚合对象的内容而无需暴露它的内部表示
	 *   支持对聚合对象的多种遍历
	 *   为遍历不同的聚合结构提供一个统一的接口
	 */

	ConcreteAggregate* pName = new ConcreteAggregate();
	if (NULL != pName) {
		pName->Push("Hello");
		pName->Push("World");
		pName->Push("jss");
	}

	Iterator* iter = NULL;
	iter = pName->CreateIterator();
	if (NULL != iter) {
		string strItem = iter->First();
		while (!iter->IsEnd()) {
			cout<<iter->GetCur()<<" is ok"<<endl;
			iter->Next();
		}
	}

	/**
	 * 中介者模式
	 * 用一个中介对象来封装一系列的对象交互。中介者使各对象不需要显式地相互引用，从而使其耦合松散，而且可以独立地改变它们之间的交互
	 * 适用性
	 *   一组对象以定义良好但是复杂的方式进行通信。产生的相互依赖关系结构混乱且难以理解。
	 *   一个对象引用其他很多对象并且直接与这些对象通信，导致难以复用该对象。
	 *   想定制一个分布在多个类中的行为，而又不想生成太多的子类
	 */

	ConcreteMediator *m = new ConcreteMediator();
	ConcreteColleague1 *c1 = new ConcreteColleague1(m);
	ConcreteColleague2 *c2 = new ConcreteColleague2(m);

	c1->Send("have eating?");
	c2->Send("yes");

	/**
	 * 备忘录模式
	 * 在不破坏封装性的前提下，捕获一个对象的内部状态，并在该对象之外保存此状态，这样就可以将该对象恢复到原先状态
	 * 适用性
	 *   必须保存一个对象在某一时刻的（部分）状态，这样以后需要它才能恢复到原先状态
	 *   如果一个用接口来让其它对象得到这些状态，将会暴露对象的实现细节并破坏对象的封装性
	 */
	Originator *originator = new Originator();
	originator->setState(2);
	cout<<"state is: "<<originator->getState()<<endl;
	Caretaker *caretaker = new Caretaker();
	caretaker->setMemento(originator->CreateMeneto());
	originator->setState(3);
	cout<<"new state is: "<<originator->getState()<<endl;
	originator->SetMemento(caretaker->getMemento());
	cout<<"last state is: "<<originator->getState()<<endl;

	/**
	 * 观察者模式
	 * 定义对象间一种一对多的依赖关系，当一个对象的状态发生改变时，所有依赖于它的对象都得到通知并被自动更新
	 * 适用性
	 *   当一个抽象模型有两个方面，其中一个方面依赖于另一方面。将这二者封装在独立的对象中以使它们可以各自独立地改变和复用
	 *   当对一个对象必须通知其它对象，而它又不能假定其它对象是谁。换言之，你不希望这些对象是紧密耦合的
	 */
	Observer *observer = new ConcreteObserver();
	Subjector *subjector = new ConcreteSubjector();
	subjector->Attach(observer);
	subjector->Notify();

	/**
	 * 状态模式
	 * 允许一个对象在其内部状态改变时改变它的行为。对象看起来似乎修改了它的类
	 * 适用性
	 *   一个对象的行为取决于它的状态，并且它必须在运行时刻根据状态改变它的行为
	 *   一个操作中含有庞大的多分支的条件语句，且这些分支依赖于该对象的状态。这个状态通常用一个或多个枚举常量表示。
	 *   通常，有多个操作包含这一相同的条件结构。State模式将每一个条件分支放入一个独立的类中。这使得你可以根据对象
	 *   自身的情况将对象的状态作为一个对象，这一对象可以不依赖于其他对象而独立变化。
	 */
	Request* request = new Request(new GetState());
	request->Start();
	request->Start();
	request->Start();

	/**
	 * 策略模式
	 * 定义一系列的算法，把它们一个个封装起来，并且使它们可相互替换。本模式使得算法可独立于使用它的客户而变化。
	 * 适用性
	 * 	 许多相关的类仅仅是行为有异。"策略"提供了一种用多个行为中的一个行为来配置一个类的方法。
	 * 	 需要使用一个算法的不同变体。
	 * 	 算法使用客户不应该知道的数据。可使用策略模式以避免暴露复杂的、与算法相关的数据结构
	 * 	 一个类定义了多种行为，并且这些行为在这个类的操作中以多个条件语句的形式出现。将相碰的条件分支移入它们各自的strategy类中以代替这些条件语句
	 */
	Strategy *strategyA = new ConcreteStrategyA();
	Strategy *strategyB = new ConcreteStrategyB();
	StrategyContext *strategyContextA = new StrategyContext(strategyA);
	StrategyContext *strategyContextB = new StrategyContext(strategyB);
	strategyContextA->ContextInterface();
	strategyContextB->ContextInterface();

	/**
	 * 模板方法模式
	 * 定义一个操作中的算法骨架，而将一些步骤延迟到子类中。TemplateMethod使得子类可以不改变一个算法的结构即可重定义该算法的某些特定步骤
	 * 适用性
	 *   一次性实现一个算法的不变部分，并将可变行为留给子类来实现。
	 *   各子类中公共的行为应被提取出来并集中到一个公共父类中以避免代码重复
	 *   控制子类扩展。模板方法只在特定点调用"hook"操作，这样只允许在这些点进行扩展
	 */
	TemplateMethod *templateMethod = new ConcreteTemplateMethod();
	templateMethod->TemplateAlgorithm();

	/**
	 * 访问者模式
	 * 表示一个作用于某对象结构的各元素的操作。它使你可以在不改变各元素的类的前提下定义作用于这些元素的新操作
	 * 适用性
	 *   一个对象结构包含很多类对象，它们有不同的接口，而你想对这些对象实施一些依赖于其具体类的操作
	 *   需要对一个对象结构中的对象进行很多不同的并且不相关的操作，而你想避免让这些操作"污染"这些对象的类。
	 *   visitor使得你可以将相关的操作集中起来定义在一个类中。当该对象结构被很多应用共享时，用Visitor模式让
	 *   每个应用仅包含需要用到的操作
	 *   定义对象结构的类很少改变，但经常需要在此结构上定义新的操作。改变对象结构类需要重定义对所有访问者的接口，
	 *   这可能需要很大的代价。如果对象结构类经常改变，那么可能还是在这些类中定义这些操作比较好。
	 */
	ObjectStructure *o = new ObjectStructure();
	o->Attach(new ConcreteElementA());
	o->Attach(new ConcreteElementB());
	Visitor *v1 = new ConcreteVisitor1();
	Visitor *v2 = new ConcreteVisitor2();
	o->Accept(v1);
	o->Accept(v2);
	return 0;
}




