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

    void ShowInfo();
    void InitScores(); //初始化学生成绩数组 默认分配一个元素空间
    void AddScore(float); //向scores数组添加分数

private:
    string m_name;
    string m_desc;
    int m_age;
    int scoreCount; //学生成绩个数
    float* scores; //学生成绩数组（各科成绩）
};


#endif //CPP_STUDENT_H
