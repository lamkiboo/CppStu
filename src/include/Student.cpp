//
// Created by Administrator on 2019/11/27.
//

#include "Student.h"

Student::Student() {
    cout << "无参构造函数" << endl;
    InitScores();
}

Student::Student(int age) {
    cout << "int型带参构造函数" << endl;
    InitScores();
}

Student::Student(string name, string desc) : m_name(name), m_desc(desc) {
    cout << "string型带参构造函数" << endl;
    InitScores();
}

void Student::ShowInfo() {
    cout << m_desc << m_name << endl;
    for(int i = 0; i < scoreCount - 1; i++){
        cout << this->scores[i] << "\t";
    }
    cout << endl;
}

void Student::InitScores() {
    this->scores = new float[1];
    this->scoreCount = 1;
}

void Student::AddScore(float score) {
    this->scores[this->scoreCount - 1] = score;
    //1.创建一个新的数组 分配scoreCount+1个空间
    //2.复制原数组内容到新数组
    //3.scoreCount++
    //4.scores指向新数组

    float* newScores = new float[scoreCount + 1];
    float* oldScores = scores;
    memcpy(newScores, scores, sizeof(float) * scoreCount);
    scoreCount++;
    scores = newScores;
    delete oldScores;
}

Student::~Student() {
    cout << m_name << "释放" << endl;// 释放资源
    delete this->scores;
}