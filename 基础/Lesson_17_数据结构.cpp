//
// Created by edy on 2022/7/6.
//

#include "Lesson_17_数据结构.h"

/*
 * C/C++ 数组允许定义可存储相同类型数据项的变量，但是结构是 C++ 中另一种用户自定义的可用的数据类型，
 * 它允许您存储不同类型的数据项。结构用于表示一条记录，假设您想要跟踪图书馆中书本的动态，
 * 您可能需要跟踪每本书的下列属性：
 *      Title ：标题
 *      Author ：作者
 *      Subject ：类目
 *      Book ID ：书的 ID
 */

/*
 * 定义结构
 * 为了定义结构，必须使用struct语句。
 * struct语句定义了一个包含多个成员的新的数据类型，格式如下：
 *
 * struct type_name{
 *      member_type1 member_name1;
 *      member_type2 member_name2;
 *      member_type3 member_name3;
 * } object_names;
 *
 * type_name是结构体类型的名称，member_typ1 member_name1是标准的变量定义，比如int i；或者float f；
 * 在结构定义的末尾，最后一个分号之前，可以指定一个或多个结构变量，这是可选的。
 * 下面是声明一个结构体类型Books，变量为book：
 */
struct Books {
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
} book;

/*
 * 访问结构成员
 * 为了访问结构的成员，使用成员访问运算符(.)。成员访问运算符是结构变量名称和要访问的结果成员直接的一个句号。
 * 如下所示：
 */

#include <iostream>
#include <string>

using namespace std;

int main171() {
    Books Book1;        // 定义结构体类型 Books 的变量 Book1
    Books Book2;        // 定义结构体类型 Books 的变量 Book2

    // Book1 详述
    strcpy(Book1.title, "C++ 教程");
    strcpy(Book1.author, "Runoob");
    strcpy(Book1.subject, "编程语言");
    Book1.book_id = 12345;

    // Book2 详述
    strcpy(Book2.title, "CSS 教程");
    strcpy(Book2.author, "Runoob");
    strcpy(Book2.subject, "前端技术");
    Book2.book_id = 12346;

    // 输出 Book1 信息
    cout << "第一本书标题 : " << Book1.title << endl;
    cout << "第一本书作者 : " << Book1.author << endl;
    cout << "第一本书类目 : " << Book1.subject << endl;
    cout << "第一本书 ID : " << Book1.book_id << endl;

    cout<<endl;

    // 输出 Book2 信息
    cout << "第二本书标题 : " << Book2.title << endl;
    cout << "第二本书作者 : " << Book2.author << endl;
    cout << "第二本书类目 : " << Book2.subject << endl;
    cout << "第二本书 ID : " << Book2.book_id << endl;

    return 0;

    /*
     * >>>
    第一本书标题 : C++ 教程
    第一本书作者 : Runoob
    第一本书类目 : 编程语言
    第一本书 ID : 12345
    第二本书标题 : CSS 教程
    第二本书作者 : Runoob
    第二本书类目 : 前端技术
    第二本书 ID : 12346
     */
}