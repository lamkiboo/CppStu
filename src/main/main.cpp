#include <iostream>
#include "LandOwner.h"
#include "Student.h"
#include "Integer.h"
using namespace std;

void TestInteger();

int main() {
    //std::cout << "Hello, World!" << std::endl;
    /*LandOwner* ptr_LandOwner1 = new LandOwner("于谦");

    ptr_LandOwner1 -> ShowInfo();

    ptr_LandOwner1 -> TouchCard(20);

    delete ptr_LandOwner1;*/

    /*Student std1; //在栈内存中直接分配空间 速度快 但是大型数据无法分配
    Student std2(40);
    Student std3("于谦", "烫头");
    std3.ShowInfo();

    Student* std4 = new Student("郭德纲", "打人"); //堆内存分配
    std4->ShowInfo();
    //当堆内存对象使用完毕时 记得delete,释放内存
    delete(std4);*/

    /*Student *ptrStd = new Student("于谦", "烫头皇帝");
    ptrStd->AddScore(88.9f);
    ptrStd->ShowInfo();
    delete ptrStd;*/

    TestInteger();

    return 0;
}

void TestInteger(){
    Integer int1(1024), int2(2048), int3;
    int3 = int1 + int2;
    cout << int3.IntValue() << endl;
}