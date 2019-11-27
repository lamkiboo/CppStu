#include <iostream>
#include "LandOwner.h"
#include "Student.h"

using namespace std;

int main() {
    //std::cout << "Hello, World!" << std::endl;
    LandOwner* ptr_LandOwner1 = new LandOwner("于谦");

    ptr_LandOwner1 -> ShowInfo();

    ptr_LandOwner1 -> TouchCard(20);

    delete ptr_LandOwner1;
    /*Student std1; //在栈内存中直接分配空间 速度快 但是大型数据无法分配
    Student std2(40);
    Student std3("于谦", "烫头");
    std3.ShwoInfo();

    Student* std4 = new Student("郭德纲", "打人"); //堆内存分配
    std4->ShwoInfo();
    //当堆内存对象使用完毕时 记得delete,释放内存
    delete(std4);*/

    return 0;
}