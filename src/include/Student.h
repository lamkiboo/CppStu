//
// Created by Administrator on 2019/11/27.
//

#ifndef CPP_STUDENT_H
#define CPP_STUDENT_H
#include <iostream>
#include <memory.h>

using namespace std;

class Student {
public:
    Student();
    Student(int);
    Student(string, string);
    ~Student();

    void ShwoInfo();

private:
    string m_name;
    string m_desc;
    int m_age;
};


#endif //CPP_STUDENT_H
