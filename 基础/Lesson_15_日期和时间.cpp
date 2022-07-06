//
// Created by edy on 2022/7/6.
//

#include "Lesson_15_日期和时间.h"

/*
 * 日期&时间
 * C++标准库没有提供所谓的日期类型。C++继承了C语言用于日期和时间操作的结构和函数。为了使用日期和时间相关的函数和结构，
 * 需要在C++程序中引入<ctime>头文件。
 *
 * 有四个与时间相关的类型：clock_t、time_t、size_t、和tm。
 * clock_t、size_t和time_t能够把系统时间和日期表示为某种整数。
 * 结构类型tm把日期和时间以C结构的形式保存，tm结构的定义如下：
 * struct tm{
 *      int tm_sec;     秒，正常范围从0到59，但允许至61
 *      int tm_min;     分，范围从0到59
 *      int tm_hour;    小时，范围从0到23
 *      int tm_mon;     月，范围从0到11
 *      int tm_year;    自1990年起的年数
 *      int tm_wday;    一周中的第几天，范围从0到6，从星期日算起
 *      int tm_mday;    一月中的第几天，范围从1到31
 *      int tm_yday;    一年中的第几天，范围从0到365，从1月1日算起
 *      int tm_isdst;   夏令时
 * }
 */

/*
 * 获取系统当前日期和时间
 * 如下所示：
 */
#include <iostream>
#include <ctime>

using namespace std;

int main151() {
    // 基于当前系统的当前日期/时间
    time_t now = time(nullptr);

    // 把 now 转换为字符串形式
    char *dt = ctime(&now);

    cout << "本地日期和时间：" << dt << endl;

    // 把 now 转换为 tm 结构
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC 日期和时间：" << dt << endl;
}

/*
 * 使用结构tm格式时间
 * tm 结构在 C/C++ 中处理日期和时间相关的操作时，显得尤为重要。tm 结构以 C 结构的形式保存日期和时间。
 * 大多数与时间相关的函数都使用了 tm 结构。下面的实例使用了 tm 结构和各种与日期和时间相关的函数。
 * 在练习使用结构之前，需要对 C 结构有基本的了解，并懂得如何使用箭头 -> 运算符来访问结构成员。
 */
#include <iostream>
#include <ctime>

using namespace std;

int main152() {
    // 基于当前系统的当前日期/时间
    time_t now = time(nullptr);

    cout << "1970 到目前经过秒数:" << now << endl;

    tm *ltm = localtime(&now);

    // 输出 tm 结构的各个组成部分
    cout << "年: " << 1900 + ltm->tm_year << endl;
    cout << "月: " << 1 + ltm->tm_mon << endl;
    cout << "日: " << ltm->tm_mday << endl;
    cout << "时间: " << ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;
}