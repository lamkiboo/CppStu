//
// Created by Administrator on 2019/11/28.
//

#ifndef CPP_INTEGER_H
#define CPP_INTEGER_H

//我们自己定义的整形类 将整形封装成类 以便实现面向对象的封装

class Integer {
public:
    Integer();
    Integer(int value) : m_value(value){}

    //重载 + 运算符
    const Integer operator+(const Integer& Other) const;

    int IntValue(){ return m_value;}

    ~Integer();

protected:

private:
    int m_value;
};


#endif //CPP_INTEGER_H
