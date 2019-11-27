//
// Created by Administrator on 2019/11/27.
//

#ifndef CPP_LANDOWNER_H
#define CPP_LANDOWNER_H
#include <iostream>
#include <memory.h>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iterator>
#include <algorithm>

using namespace std;

class LandOwner {
private:
    string m_name; //地主的名称
    string m_sex; //地主的性别
    int m_gold; //地主的金钱
    long m_exp; //地主的经验值
    long score; //地主的积分
    vector<int> packCards; //默认牌组 1-54
    vector<int> surplusCards; //摸牌后剩余的牌
    vector<int> currCards; //玩家的手牌数组
    bool isContains(int cardNum); //剩余牌集合中是否包含这张牌
    void deleteCard(vector<int>&, int); //删除集合中的数字
    string GetColor(int); //获得牌的花色
    string GetValue(int); //获得牌的大小

public:
    LandOwner();
    LandOwner(string);
    LandOwner(string, string, int, long);
    ~LandOwner();

    /*获取名字*/
    string GetName(){ return m_name; }
    /*赋予名字*/
    void SetName(string val){ m_name = val; }
    /*获取性别*/
    string GetSex(){ return m_sex; }
    /*赋予性别*/
    void SetSex(string val){ m_sex = val; }
    /*获取金钱*/
    int GetGold(){ return m_gold; }
    /*设置金钱*/
    void SetGold(int val){ m_gold = val; }
    /*获取经验值*/
    long GetExp(){ return m_exp; }
    /*设置经验值*/
    void SetExp(long val){ m_exp = val; }

    void ShowInfo();
    void TouchCard(int); //摸牌
    void InitCards(); //初始化牌组
    void ShowCards(const vector<int> &);//显示牌面
};


#endif //CPP_LANDOWNER_H
