//
// Created by Administrator on 2019/11/27.
//

#include "LandOwner.h"

LandOwner::LandOwner() {
    SetName("Default");
    SetSex("未知");
    SetExp(0);
    SetGold(1000);
    cout << "LandOwner()" << endl;
}

LandOwner::LandOwner(string nickName): m_name(nickName)  {
    SetSex("Secret");
    SetExp(0);
    SetGold(1000);
    cout << "LandOwner(string nickName)" << endl;
    InitCards();
}

LandOwner::LandOwner(string nickName, string sex, int gold, long exp): m_name(nickName), m_sex(sex), m_gold(gold), m_exp(exp) {
    cout << "LandOwner(string nickName, string sex, int gold, long exp)" << endl;
    InitCards();
}

void LandOwner::InitCards() {//初始化牌组
    for(int i = 0;i < 54;i++){
        packCards.push_back(i + 1);//默认牌组
        surplusCards.push_back(packCards.at(i));//剩余牌组
    }
    currCards.clear();//玩家手牌
    ShowCards(packCards);//展示手牌
}

void LandOwner::ShowCards(const vector<int>& cards) {
    //c语言习惯
    /*for(int i = 0; i <cards.size(); i++){
        cout << cards[i] << ",";
    }
    cout << endl;*/
    //使用迭代器（c++）
    for(vector<int>::const_iterator iter = cards.begin(); iter != cards.end(); iter++){
        cout << GetColor(*iter) << "-" << GetValue(*iter) << " ";
    }
    cout << endl;
    //for 区间遍历
    /*for(auto card : cards){
        cout << card << ",";
    }
    cout << endl;*/
    //使用算法的方式  将容器的内容复制到cout绑定的迭代器中
    //#include <iterator>
    //#include <algorithm>
    /*copy(cards.cbegin(), cards.cend(), ostream_iterator<int>(cout, ",));
     *cout << endl; */
}

void LandOwner::TouchCard(int cardCount) {
    srand(time(NULL)); //时间种子
    //随机生成一张剩余牌中的牌 添加到currCards集合中 从surplusCards中删除这张牌
    for(int i = 0; i < cardCount; i++){
        int randIndex = rand() % 54; //生成0-53的随机数字
        //判断随机生成这张牌是否自剩余牌集合中 若有则放入手牌
        if(isContains(packCards[randIndex])){
            currCards.push_back(packCards[randIndex]); //将随机生成的牌放入手牌数组
            //在剩余牌中删除这张牌
            deleteCard(surplusCards, packCards[randIndex]);
        } else {
            i--;//重新摸牌
        }
    }
    cout << "摸牌后手牌如下：" << endl;
    ShowCards(currCards);
    cout << "摸牌后剩余牌如下：" << endl;
    ShowCards(surplusCards);
}

bool LandOwner::isContains(int cardNum) {
    //使用find算法寻找
    vector<int>::iterator iter = find(surplusCards.begin(), surplusCards.end(), cardNum);
    //遍历到了最后 则为未找到
    return iter != surplusCards.end();
}

void LandOwner::deleteCard(vector<int>& cardVec, int card){
    //使用算法删除
    auto iter = find(cardVec.begin(), cardVec.end(), card);
    if(iter != cardVec.end()){
        cardVec.erase(iter);
    }
}

string LandOwner::GetColor(int card) {
    if(card == 53) return "小王";
    else if(card == 54) return "大王";

    string colors[] = {
            "黑桃", "红心", "方块", "梅花"
    };
    return colors[(card - 1) / 13];
}

string LandOwner::GetValue(int card) {
    if(card == 53) return "Black Joker";
    else if(card == 54) return "Red Joker";

    string values[] = {
            "A", "2",  "3", "4", "5", "6", "7", "8", "9",
            "10", "J", "Q", "K",
    };
    return values[(card - 1) % 13];
}

void LandOwner::ShowInfo() {
    cout << "昵称：" << GetName() << endl;
    cout << "性别：" << GetSex() << endl;
    cout << "金币：" << GetGold() << endl;
    cout << "经验：" << GetExp() << endl;

}

LandOwner::~LandOwner() {
    cout << m_name << "被释放" << endl;//dtor 释放资源
}