//
// Created by edy on 2022/7/7.
//

#include "Lesson_1_类和对象.h"

/*
 * C++类和对象
 * C++在C语言基础上增加了面向对象编程，C++支持面相对象程序设计。
 * 类是C++的核心特性，通常被称为用户定义的类型。类用于指定对象的形式，它包含了数据表示法和用于处理数据的方法。
 * 类中的数据和方法称为类的成员。函数在一个类中被称为类的成员。
 */

/*
 * C++类定义
 * 定义一个类，本质上是定义一个数据类型的蓝图。这实际上并没有定义任何数据，但它定义了类的名称意味着什么，也就是说，
 * 它定义了类的对象包括了什么，以及可以在这个对象上执行哪些操作。
 *
 * 关键字  类名
 * class classname{
 *      Access specifiers:                  //访问修饰符:private/public/protected
 *          Date memebers/variables;        //变量s
 *          Member functions(){}            //方法s
 * };                                       //分号结束一个类
 *
 * 如上，类定义是以关键字class开头，后跟类的名称。类的主体是包含在一对花括号中。类定义后必须跟着一个分号或声明列表。
 * 例如，使用关键字class定义Box数据类型，如下所示：
 */
class BoxClass {
public:
    double length;      //盒子的长度
    double width;       //盒子的宽度
    double height;      //盒子的高度
};
/*
 * 关键字public确定了类成员的访问属性。在类对象作用域内，公共成员在类的外部是可访问的。也可以指定类的成员为
 * private或protected。
 */


/*
 * 定义C++对象
 * 类提供了对象的蓝图，所以基本上，对象是根据类来创建的。声明类的对象，就像声明基本类型变量一样。如下所示:
 */
BoxClass box_1;   //声明box_1，类型为BoxClass
BoxClass box_2;   //声明box_2，类型为BoxClass

/*
 * 访问数据成员
 * 类的对象的公共数据成员可以使用直接成员访问运算符.来访问。
 * 示例如下：
 */
#include <iostream>

using namespace std;

//类的定义
class Box {
public:
    double length;//长度
    double width;//宽度
    double height;//高度

    //成员函数声明
    double get() const;

    void set(double len, double wid, double hei);
};

//成员函数定义
double Box::get() const {
    return length * width * height;
}

//成员函数定义
void Box::set(double len, double wid, double hei) {
    length = len;
    width = wid;
    height = hei;
}

int main211() {
    Box box1{};   //声明Box1，类型为Box
    Box box2{};   //声明Box2，类型为Box
    Box box3{};   //声明Box3，类型为Box
    double volume = 0.0; //用于存储体积

    //box1详述
    box1.length = 5.0;
    box1.width = 6.0;
    box1.height = 7.0;

    //box2详述
    box2.length = 10.0;
    box2.width = 12.0;
    box2.height = 13.0;

    //box1的体积
    volume = box1.length * box1.width * box1.height;
    cout << "box1的体积: " << volume << endl;

    //box2的体积
    volume = box2.length * box2.width * box2.height;
    cout << "box2的体积: " << volume << endl;

    //box3详述
    box3.length = 16.0;
    box3.width = 8.0;
    box3.height = 12.0;

    box3.set(16.0, 8.0, 12.0);
    volume = box3.get();
    cout << "box3的体积: " << volume << endl;

    return 0;
}

/*
 * 类和对象详解
 * 到目前为止，已经对C++的类和对象有了基本的了解。下面列出了其他一些C++类和对象的概念。
 */

/*
 * 类和对象详解-类成员函数
 * 类的成员函数是指那些把定义和原型写在类定义内部的函数，就像类定义中其他变量一样。
 * 它可以操作类的人员对象，可以访问对象中的所有成员。
 * 成员函数可以定义在类定义内部，或者单独使用范围解析运算符::来定义。在类定义中定义的成员函数把函数声明为内联的，
 * 即便没有使用inline标识符。
 * 现在改写一下Box类，要使用成员函数来访问类的成员，而不是直接访问这些类的成员：
 *
 * 在这里需要强调一点，在::运算符之前必须使用类名。调用成员函数是在对象上使用点运算符(.)，这样它就能操作
 * 与该对象相关的数据，如下所示：
 */
class Box_1 {
public:
    double length;//长度
    double width;//宽度
    double height;//高度

    double getVolume() const;//返回体积
    void setLength(double len);

    void setWidth(double wid);

    void setHeight(double hei);
};

double Box_1::getVolume() const {
    return length * width * height;
}

void Box_1::setLength(double len) {
    length = len;
}

void Box_1::setWidth(double wid) {
    width = wid;
}

void Box_1::setHeight(double hei) {
    height = hei;
}

int main212() {
    Box_1 myBox1{};
    Box_1 myBox2{};
    double volume = 0.0;

    //myBox1详述
    myBox1.setLength(6.0);
    myBox1.setWidth(7.0);
    myBox1.setHeight(8.0);

    //myBox2详述
    myBox2.setLength(12.0);
    myBox2.setWidth(13.0);
    myBox2.setHeight(10.0);

    // box 1 的体积
    volume = myBox1.getVolume();
    cout << "Box1 的体积：" << volume << endl;

    // box 2 的体积
    volume = myBox2.getVolume();
    cout << "Box2 的体积：" << volume << endl;
    return 0;
}

/*
 * 类和对象详解-类访问修饰符
 * 数据封装是面相对象编程的一个重要特点，它放置函数直接访问类类型的内部成员。类成员的访问限制是通过
 * 在类主体内部对各区域标记public（公有）、private（私有）、protected（受保护）来指定的。称为访问修饰符。
 * 一个类可以有多个标记区域。每个标记区域在下一个标记区域开始之前或者遇到类主体右括号之前都是有效的。
 * 成员和类的默认访问修饰符是private。
 *
 * class Base{
 *      public:
 *          //公有成员
 *      protected:
 *          //受保护成员
 *      private:
 *          //私有成员
 * }
 */

/*
 * 继承(:)，继承中的特点：
 * 有public, protected, private三种继承方式，它们相应地改变了基类成员的访问属性。
 * 1.public 继承：基类 public 成员，protected 成员，private 成员的访问属性在派生类中
 *              分别变成：public, protected, private
 * 2.protected 继承：基类 public 成员，protected 成员，private 成员的访问属性在派生类中
 *              分别变成：protected, protected, private
 * 3.private 继承：基类 public 成员，protected 成员，private 成员的访问属性在派生类中
 *              分别变成：private, private, private
 *
 * 但无论哪种继承方式，上面两点都没有改变：
 * 1.private 成员只能被本类成员（类内）和友元访问，不能被派生类访问；
 * 2.protected 成员可以被派生类访问。
 */


/*
 * 类和对象详解-类构造函数和析构函数
 * 类的构造函数是类的一种特殊的成员函数，它会在每次创建类的新对象时执行。
 * 构造函数的名称与类的名称是完全相同的，并且不会返回任何类型，也不会返回void。构造函数可用于给某些成员变量设置初始值。
 * 下面示例有助于理解构造函数的概念：
 */
#include <iostream>

using namespace std;

class Line1 {
public:
    void setLength(double len);

    double getLength() const;

    Line1();//这是构造函数，与类同名
private:
    double length;
};

//成员函数定义，包括构造函数
Line1::Line1() {
    cout << "Object is being created." << endl;
}

void Line1::setLength(double len) {
    length = len;
}

double Line1::getLength() const {
    return length;
}

int main213() {
    Line1 line;
    //设置长度
    line.setLength(6.0);
    cout << "Length of line :" << line.getLength() << endl;
    return 0;
}

/*
 * 带参数的构造函数，与Java类似。不再赘述。
 * 另外，可以初始化列表来初始化字段：
 * 如下所示：
 * Line::Line(double len): length(len){
 *      cout << "Object is being created, length = " << len << endl;
 * }
 * 等同于：
 *  Line::Line(double len){
 *      length=len;
 *      cout << "Object is being created, length = " << len << endl;
 *  }
 */


/*
 * 类的析构函数
 * 类的析构函数是类的一种特殊的成员函数，它会在每次删除所创建的对象执行。
 * 析构函数的名称与类名相同，只是在前面加了一个波浪号~作为前缀，它不会返回任何值，也不能带任何参数。
 * 析构函数有助于在跳出程序(比如关闭文件，释放内存)前释放资源。
 * 示例如下：
 */
class Square {
public:
    Square(double sid);   //这是构造函数 , 带参数的构造函数
    ~Square();  //这是析构函数
    double getSquare() const;

private:
    double side;
};

Square::Square(double sid) : side(sid) {
    cout << "Object is being created." << endl;
}

Square::~Square() {
    cout << "Object is being deleted." << endl;
}

double Square::getSquare() const {
    return side * side;
}

int main214() {
    Square square(9.0);
    cout << "Square of this is: " << square.getSquare() << endl;
    return 0;

    /*
     * >>>
     * Object is being created.
     * Square of this is: 81
     * Object is being deleted.
     */
}

/*
 * 类和对象详解-拷贝构造函数
 * 拷贝构造函数是一种特殊的构造函数，它在创建对对象时，是使用同一类中之前创建的对象来初始化新创建的对象。
 * 拷贝构造函数通常用于：
 * 1.通过使用另一个同类型的对象来初始化新创建的对象。
 * 2.复制对象把它作为参数传递给函数。
 * 3.复制对象，并从函数返回
 *
 * 如果类中没有定义拷贝构造函数，编译器会行定义一个。如果类带有指针变量，并有动态内存分配，
 * 则它必须有一个拷贝构造函数。拷贝构造函数最常见的形式如下：
 * classname(const classname &obj){
 *      //构造函数的主体
 * }
 * 在这里，obj是一个对象的引用，该对象是用于初始化另一个对象的。
 *
 * 具体示例如下：
 */
#include <iostream>

using namespace std;

class Line2 {
public:
    int getLength();

    //Clang-Tidy：单参数构造函数必须标记为显式，以避免无意的隐式转换 explicit(明确的)
    explicit Line2(int len);             //简单的构造函数
    Line2(const Line2 &obj);    //拷贝构造函数
    ~Line2();                   //析构函数
private:
    int *ptr;
};

//成员函数定义，包括构造函数
Line2::Line2(int len) {
    cout << "调用构造函数" << endl;
    //为指针分配内存
    ptr = new int;
    *ptr = len;
}

Line2::Line2(const Line2 &obj) {
    cout << "调用拷贝构造函数并为指针 ptr 分配内存" << endl;
    ptr = new int;
    *ptr = *obj.ptr;    //拷贝值
}

Line2::~Line2() {
    cout << "释放内存" << endl;
    delete ptr;
}

int Line2::getLength() {
    return *ptr;
}

void display(Line2 obj) {
    cout << "line 大小: " << obj.getLength() << endl;
}

int main215() {
    Line2 line(10);
    Line2 line2 = line;   //这里也调用了拷贝构造函数

    display(line);
    display(line2);
    return 0;

    /*
     * >>>
     * 调用构造函数
     * 调用拷贝构造函数并为指针 ptr 分配内存
     * 调用拷贝构造函数并为指针 ptr 分配内存
     * line 大小: 10
     * 释放内存
     * 调用拷贝构造函数并为指针 ptr 分配内存
     * line 大小: 10
     * 释放内存
     * 释放内存
     * 释放内存
     */
}

/*
 * 注：
 * 拷贝构造函数是一种特殊的构造函数，具有单个形参，该形参(常用const修饰)是对该类类型的引用。
 * 当定义一个新对象并用同一个类型的对象对它进行初始化时，将显示使用拷贝构造函数。
 * 当该类型的对象传递给函数或从函数返回该类型的对象时，将隐式调用拷贝构造函数。
 *
 * C++支持和俩种初始化形式：
 * 拷贝初始化 int a =5； 和直接初始化 int a(5)； 对于其他类型没有什么区别，对于类类型直接初始化直接调用
 * 实参匹配的构造函数，拷贝初始化总是调用拷贝构造函数，也就是说：
 * A x(2);      直接初始化，调用构造函数
 * A y = x;     拷贝初始化，调用拷贝构造函数
 *
 * 必须定义拷贝构造函数的情况：
 * 只包含类类型成员或内置类型(但不是指针类型)成员的类，无需显式地定义拷贝构造函数也可以拷贝；
 * 有的类有一个数据成员是指针，或是有成员表示在构造函数中分配的其他资源，这俩种情况下都必须定义拷贝构造函数。
 * 什么情况下使用拷贝构造函数：
 * 类的对象需要拷贝时，拷贝构造函数将被调用，以下情况都会调用拷贝构造函数：
 * 1.一个对象以值传递的方式传入函数体；
 * 2.一个对象以值传递的方式从函数返回；
 * 3.一个对象需要通过另一个对象进行初始化；
 */



/*
 * 类和对象详解-友元函数
 * 类的友元函数是定义在类外部，但有权访问类的所有私有(private)成员和保护(protected)成员。
 * 尽管友元函数的原型有在类的定义中出现过，但是友元函数并不是成员函数。
 * 友元可以是一个函数，该函数被称为友元函数；友元也可以是一个类，该类被称为友元类，在这种情况下，整个类及所有成员都是友元。
 * 如果要声明一个函数为一个类的友元，需要在类定义中该函数原型前使用关键字friend，如下所示：
 * class Box{
 *      double width;
 * public:
 *      double length;
 *      friend void printWidth(Box box);
 *      void setWidth(double wids);
 * };
 * 声明类Class Two的所有成员函数作为Class One的友元，需要在类Class One的定义中放置如下声明：
 * friend class ClassTwo;
 *
 * 示例如下：
 */

#include <iostream>

using namespace std;

class Box2 {
    double width;
public:
    friend void printWidth(Box2 box2);

    void setWidth(double wid);
};

//成员函数定义
void Box2::setWidth(double wid) {
    width = wid;
}

//请注意。printWidth()不是任何类的成员函数
void printWidth(Box2 box2) {
    //因为printWidth()是Box2的友元，它可以直接访问该类的任何成员
    cout << "Width of Box2: " << box2.width << endl;
}

int main216() {
    Box2 box2;

    //使用成员函数设置宽度
    box2.setWidth(10.0);

    //使用友元函数输出宽度
    printWidth(box2);

    return 0;
}

/*
 * 类和对象详解-内联函数
 * C++内联函数是通常与类一起使用。若果一个函数是内联的，那么在编译时，编译器会把该函数的代码副本放置在每个调用该函数的地方。
 * 对内联函数进行任何修改，都需呀重新编译函数的所有客户端，因为编译器需要重新更换一次所有的代码，否则将继续使用旧的函数。
 * 如果想把一个函数定义为内联函数，则需要在函数名前面放置关键字inline，在调用函数前需要对函数进行定义。
 * 如果定义的函数多于一行，编译器会忽略inline限定符。
 * 在类定义中的定义的函数都是内联函数，即使没有inline说明符。
 * 下面是一个实例，使用内联函数来返回俩个数中的最大值：
 */
#include <iostream>

using namespace std;

inline int Max(int x, int y) {
    return x > y ? x : y;
}

int main217() {
    cout << "Max (20,10): " << Max(20, 10) << endl;
    cout << "Max (0,200): " << Max(0, 200) << endl;
    cout << "Max (100,1010): " << Max(100, 1010) << endl;
    return 0;
}

/*
 * 注：
 * 内联函数inline：引入内联函数的目的是为了解决程序中函数调用的效率问题，换句话说，程序在编译器编译的时候，
 * 编译器将程序中出现的内联函数的调用表达式用内联函数的函数体进行替换，而对于其他的函数，都是在运行时才被替代。
 * 这其实就是空间代价还时间的节省。所以内联函数一般都是1-5行的小函数，在使用内联函数时要留神：
 * 1.在内联函数内不允许使用循环和开关语句；
 * 2.内联函数的定义必须出现在内联函数第一次调用之前；
 * 3.类结构中所在的类说明内部定义的函数是内联函数；
 */


/*
 * 类和对象详解-this指针
 * 在C++中，每一个对象都能通过this指针来访问自己的地址。this指针是所有成员函数的隐含参数。
 * 因此，在成员函数内部，它可以用来指向调用对象。
 * 友元函数没有this指针，因为友元不是类的成员。只有成员函数才有this指针。
 * 示例如下：
 */
class Cup {
private:
    double length;
    double width;
    double height;
public:
    static int objCount;

    static int getCount() {
        return objCount;
    }

    explicit Cup(double l = 2.0, double w = 2.0, double h = 2.0) {
        cout << "Constructor called of Cup" << endl;
        length = l;
        width = w;
        height = h;
        //每次创建对象时增加1
        objCount++;
    }

    double volume() const {
        return length * width * height;
    }

    int compare(Cup cup) const {
        return this->volume() > cup.volume();
    }
};

int main218() {
    Cup cup1(3.3, 1.2, 1.5);
    Cup cup2(8.5, 6.0, 2.0);
    if (cup1.compare(cup2)) {
        cout << "cup2 is smaller than cup1" << endl;
    } else {
        cout << "cup2 is equal to or larger than cup1" << endl;
    }
    return 0;
}


/*
 * 类和对象详解-执行类的指针
 * 一个执行C++类的指针与指向结构的指针类似，访问执行类的指针的成员，需要使用成员访问运算符->，就像访问指向结构的指针一样。
 * 与所以指针一样，必须在使用指针之前，对指针进行初始化。
 * 下面示例有助于理解指向类的指针的概念：
 */

int main219() {
    Cup cup1(3.3, 1.2, 1.5);        //Declare cup1
    Cup cup2(8.5, 6.0, 2.0);        //Declare cup2
    Cup *ptrCup;                             //Declare pinter to a class.

    //保存第一个对象的地址
    ptrCup = &cup1;

    //现在尝试使用成员访问符来访问成员
    cout << "Volume of cup1: " << ptrCup->volume() << endl;

    //保存第二个对象的地址
    ptrCup = &cup2;
    cout << "Volume of cup2: " << ptrCup->volume() << endl;

    return 0;
}


/*
 * 类和对象详解-类的静态成员
 * 可以使用static关键字把类成员定义为静态的。
 * 当声明类的成员为静态时，这意味无论创建多少个类的对象，静态成员都只有一个副本。
 *
 * class Runoob{
 * public:
 *      static int runoob_age;      //静态变量
 *      int runoob_users;           //实例变量
 *      func{
 *          int runoob_local;       //局部变量
 *      }
 * };
 *
 * 静态成员在类的所有对象中是共享的。如果不存在其他的初始化语句，在创建第一个对象时，所有静态数据都会被初始化为零。
 * 我们不能把静态成员的初始化放置在类的定义中，但是可以在类的外部通过范围解析运算符::来重新声明静态变量从而
 * 对它进行初始化。
 *
 * 改变Cup类，增加静态变量：objectCount; 并且在类外部对其进行初始化。
 */

int Cup::objCount = 0;

int main220() {
    Cup cup1(3.3, 1.2, 1.5);    // 声明 box1
    Cup cup2(8.5, 6.0, 2.0);    // 声明 box2

    // 输出对象的总数
    cout << "Total objects: " << Cup::objCount << endl;

    return 0;
}

/*
 * 静态成员函数
 * 如果把函数成员声明为静态的，就可以把函数与类的任何特定对象独立开来。静态成员函数即使在类对象不存在的情况下也能被调用，
 * 静态函数只要使用类名加范围解析运算符 :: 就可以访问。
 * 静态成员函数只能访问静态成员数据、其他静态成员函数和类外部的其他函数。
 * 静态成员函数有一个类范围，他们不能访问类的 this 指针。您可以使用静态成员函数来判断类的某些对象是否已被创建。
 *
 * 静态成员函数与普通成员函数的区别：
 *      静态成员函数没有 this 指针，只能访问静态成员（包括静态成员变量和静态成员函数）。
 *      普通成员函数有 this 指针，可以访问类中的任意成员；而静态成员函数没有 this 指针。
 *
 * 改变Cup类，增加静态成员函数getCount();
 */
int main221() {

    // 在创建对象之前输出对象的总数
    cout << "Inital Stage Count: " << Cup::getCount() << endl;

    Cup cup1(3.3, 1.2, 1.5);    // 声明 box1
    Cup cup2(8.5, 6.0, 2.0);    // 声明 box2

    // 在创建对象之后输出对象的总数
    cout << "Final Stage Count: " << Cup::getCount() << endl;

    return 0;
}
