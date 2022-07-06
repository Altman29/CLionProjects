//
// Created by edy on 2022/7/6.
//

#include "Lesson_16_基本输入输出.h"

/*
 * C++基本的输入输出
 * C++标准库提供了一组丰富的输入/输出功能，将在以后介绍。本章看一下最基本和常见的I/O操作。
 * C++的I/O发生在流中，流是字节序列。如果字节流是从设备(如键盘、磁盘驱动器、网络链接)流向内存，这叫输入操作。
 * 如果字节流是从内存流向设备(如显示屏、打印器、磁盘驱动器、网络连接等)，这叫输出操作。
 */


/*
 * I/O头文件
 * 下列的头文件在C++编程中很重要：
 *      头文件             函数和描述
 *    <iostream>          该文件定义了cin、cout、cerr和clog对象，分别对应标准输入流、标准输出流、非缓冲标准错误流和
 *                        缓冲标准错误流。
 *    <iomainip>          该文件通过所谓的参数化的流操作器(比如setw和setprecision)，来声明对执行标准化I/O有用的服务。
 *    <fstream>           该文件为用户控制的文件处理声明服务。
 */

/*
 * 标准输出流 cout
 * 预定义的对象cout是iosteam类的一个实例。cout对象"连接"到标准输出设备，通常是显示屏。
 * cout是与流插入运算符<<结合使用的，之前已经用过很多次了，示例如下：
 */
#include <iostream>

using namespace std;

int main161() {

    char str[] = "Hello C++";
    cout << "Value of str is: " << str << endl;
    return 0;

    /*
     * C++编译器根据要输出变量的数据类型，选择喝死的流插入运算符来显示值。
     * <<运算符被重载来输出内置类型(整型、浮点型、double型、字符型、字符串和指针)等数据项。
     * 流插入运算符<<在一个语句中可以多次使用，endl用于在行末添加一个换行符。
     */
}

/*
 * 标准输入流 cin
 * 预定义对象cin是iostream类的一个实例。cin对象附属到标准输入设备，通常是键盘。
 * cin是与流提取运算符>>结合使用的。
 * 如下所示：
 */
#include <iostream>

using namespace std;

int main162() {
    char name[50];

    cout << "请输入您的名称: ";
    cin >> name;
    cout << "您的名称是: " << name << endl;
}

/*
 * 标准错误流 cerr
 * 预定义对象cerr是iostream类的一个实例。cerr对象附属到标准输出设备，通常也是显示屏，但是cerr对象是非缓冲的，
 * 且每个流插入到cerr都会立即输出。
 * cerr也是与流插入运算符<<结合使用的。
 * 如下所示：
 */
#include <iostream>

using namespace std;

int main163() {
    char str[] = "Unable to read...";
    cerr << "Error message: " << str << endl;
}

/*
 * 标准日志流 clog
 * 预定义对象clog是iostream类的一个实例。clog对象附属到标准输出设备，通常也是显示屏，但是clog对象是缓冲的。
 * 这意味着每个流插入到clog都会先存储在缓冲区，知道缓冲区填满或者缓冲区刷新时才会输出。
 * clog也是与流插入运算符<<结合使用的，如下所示：
 */
#include <iostream>

using namespace std;

int main164() {
    char str[] = "Unable to read...";
    string str1="str1 Unable to read...";
    clog << "Error message: " << str1 << endl;
}

/*
 * 通过这些示例可能无法明显区分cout、cerr和clog的差异，但是编写和执行大型程序时，它们的差异就变得非常明显。
 * 良好的编程实践告诉我们，cerr流来显示错误信息，日志则使用clog流来输出。
 */