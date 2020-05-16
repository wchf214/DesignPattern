# DesignPattern
设计模式-C++示例工程

软件设计的三原则：
一、单一职责原则(SRP)
类的功能单一化，用于提高类的复用性。
准确解释为：就一个类而言，应该仅有一个引起它变化的原因。

二、开放-封闭原则（Open-Close Principle,OCP）
为软件运维考虑，可提升软件的生命周期，降低软件运维成本。

准确解释为：软件实体(类、模块、函数等等)，应该可以扩展，但是不可修改。
1、对于扩展是开放的（Open for extension）;
2、对于更改是封闭的(Close for modification)。

其精神所在就是：面对需求，对程序的改动是通过增加新代码进行的，而不是更改现有的代码。

三、里氏代换原则（LSP）
原话翻译为：一个软件实体如果使用的是一个父类的话，那么一定适用于其子类，而它察觉不出父类对象和子类对象的区别。即在软件里面，把父类都替换成它的子类，程序行为没有变化。
简而言之，子类型必须能够替换掉它们的父类型。

四、依赖倒转原则
准确解释为：抽象不应该依赖细节，细节应该依赖于抽象。即要针对接口编程，而不要对实现编程。
1、高层模块不应该依赖低层模块。两个都应该依赖抽象；
2、抽象不应该依赖细节。细节应该依赖抽象。

依赖倒转可以说是面向对象设计的标志，用哪种语言来编写程序不重要，如果编写时考虑的都是如何针对抽象编程而不是针对细节编程，即程序中所有的依赖关系都终止于抽象类或者接口，那就是面向对象的设计，反之就是面向过程的设计。

软件设计的法则：
一、迪米特法则

依据设计原则、法则及语言特性，形成设计模式：
文件夹目录说明：
SimpleFactory       ------    简单工厂
StrategyPattern     ------	  策略模式（仍有疑问）
DecoratorPattern  ------    装饰模式


//注：装饰模式与建造者模式的区别在于，建造者模式要求建造过程固定且稳定，而装饰模式的建造过程不固定
装饰模式（Decorator）

动态地给一个对象添加一些额外的职责，就增加功能来说，装饰模式比生成子类更为灵活。


建造者模式

代理模式
工厂方法模式
原型模式
模板方法模式
外观模式
观察者模式
抽象工厂模式
状态模式
适配器模式
备忘录模式
组合模式
迭代器模式
单例模式
桥接模式
命令模式
职责链模式
中介者模式
享元模式
解释器模式
访问者模式
MVC模式（以BS为发端的一种设计模式）
模式总结（最终成果项目）
面向对象基础（暂时忽略）