//
// Created by edy on 2022/7/6.
//

#include "Lesson_13_字符串.h"

/*
 * C++提供了一下俩种类型的字符串表示形式:
 *      C风格字符串
 *      C++引入的string类类型
 */


/*
 * C风格的字符串
 * 起源于C语言，并在C++中继续得到支持。字符串实际上是使用null字符\0终止的一维字符数组。
 * 因此，一个以null结尾的字符串，包含了组成字符串的字符。
 * 下面声明和初始化了一个RUNOOB字符串。由于在数组的末尾存储了空字符，所以字符数组的大小比单词RUNOOB的字符数多一个。
 */
char site1[7] = {'R', 'U', 'N', 'O', 'O', 'B', '\0'};
//依据数组初始化规则，可以把上面的语句改成如下fangsh:
char site2[] = "RUNOOB";
/*
 * 以下是C/C++中定义字符串的内存表示：
 * 索引       0           1           2           3           4           5           6
 * 变量       R           U           N           O           O           B           \0
 * 地址   0x23451     0x23452     0x23453     0x23454     0x23455     0x23456     0x23457
 *
 * 其实，不需要把null字符放在字符串常量的末尾。C++编译器会在初始化数组时，自动把\0放在字符串的末尾。
 * 来尝试输出一下上面的字符串
 */
#include <iostream>

using namespace std;

int main131() {
    char site3[] = {'R', 'U', 'N', 'O', 'O', 'B', '\0'};
    cout << "打印字符输出: ";
    cout << site3 << endl;
    return 0;
}

/*
 * C++中有大量的函数用来操作以null结尾的字符串：
 * strcpy(s1, s2);      复制字符串s2到字符串s1。
 * strcat(s1, s2);      连接字符串s2到字符串s1的末尾。也可以直接使用+号。
 * strlen(s1);          返回字符串s1的长度。
 * strcmp(s1, s2);      s1和s2是相同的，则返回0；s1<s2则返回值小于0；s1>s2则返回值大于0。
 * strchr(s1, ch);      返回一个指针，指向字符串s1中字符ch的第一个出现的位置。
 * strstr(s1, s2);      返回一个指针，指向字符串s1中字符串s2的第一个出现的位置。
 *
 * 如下示例：
 */

#include <cstring>

using namespace std;

int main132() {
    char str1[13] = "runoob";
    char str2[13] = "google";
    char str3[13];
    int len;

    //复制str1到str3
    strcpy(str3, str1);
    cout << "strcpy(str3, str1): " << str3 << endl;

    //连接str2到str1
    strcat(str1, str2);
    cout << "strcat(str1, str2): " << str1 << endl;

    //连接后，str1的总长度
    len = strlen(str1);
    cout << "strlen(str1): " << len << endl;

    return 0;
}

/*
 * C++中的String类
 * C++标准库中提供了string类类型，支持上述所有操作，另外还增加了更多功能。
 * 包含了面相对象的概念的string实例如下：
 */

#include <string>

int main133() {
    string str1 = "runoob";
    string str2 = "google";
    string str3;
    int len;

    // 复制 str1 到 str3
    str3 = str1;
    cout << "str3 : " << str3 << endl;

    // 连接 str1 和 str2
    str3 = str1 + str2;
    cout << "str1 + str2 : " << str3 << endl;

    // 连接后，str3 的总长度
    len = str3.size();
    cout << "str3.size() :  " << len << endl;
    return 0;
}