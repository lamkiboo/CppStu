//
// Created by Administrator on 2019/11/27.
//

#include "Student.h"

Student::Student() {
    cout << "无参构造函数" << endl;
}

Student::Student(int age) {
    cout << "int型带参构造函数" << endl;
}

Student::Student(string name, string desc) : m_name(name), m_desc(desc) {
    cout << "string型带参构造函数" << endl;
}

void Student::ShwoInfo() {
    cout << m_name << m_desc << endl;
}

Student::~Student() {
    cout << m_name << "释放" << endl;// 释放资源
}