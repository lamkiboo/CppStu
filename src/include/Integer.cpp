//
// Created by Administrator on 2019/11/28.
//

#include "Integer.h"

//调用默认构造时 会
Integer::Integer() : m_value(0) {

}

//重载 + 运算符
const Integer Integer::operator+(const Integer& Other) const {
    Integer result(this->m_value + Other.m_value);
    return result;
}

Integer::~Integer() {

}