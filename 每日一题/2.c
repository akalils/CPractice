//
// Created by 黎圣  on 2023/8/18.
//
/*
 * 题目：企业发放的奖金根据利润提成。
    #利润(工)低于或等于10万元时，奖金可提10%；
    #利洞高于10万元，低于20万元时，低于10万元的部分找10%提成，高于10万元的部分，可提成7.5%;
    #20万到40万之间，高于20万元的部分，可提成5%;
    #49万到60万之间，高于49万元的部分，可提成3%;
    #60万到100万之间，高于60万元的部分，可提成1.5%;
    #高于100万元，超过100万元的部分按1%提成。
    从键盘输入当月利润工，求应发放奖金总数？
 */
#include "stdio.h"
int main()
{
    double money = 0;
    double prize = 0;
    scanf("%lf", &money);
    if (money <= 10)
        prize = money * 0.1;
    if (money > 10 && money < 20)
        prize = 10 * 0.1 + (money - 10) * 0.075;
    if (money >= 20 && money <= 40)
        prize = 10 * 0.1 + (money - 10) * 0.075 + (money - 20) * 0.05;
    if (money >= 49 && money <= 60)
        prize = 10 * 0.1 + (money - 10) * 0.075 + (money - 20) * 0.05 + (money - 49) * 0.03;
    if (money >= 60 && money <= 100)
        prize = 10 * 0.1 + (money - 10) * 0.075 + (money - 20) * 0.05 + (money - 49) * 0.03 + (money - 60) * 0.015;
    if (money >= 100)
        prize = 10 * 0.1 + (money - 10) * 0.075 + (money - 20) * 0.05 + (money - 49) * 0.03 + (money - 60) * 0.015 + (money - 100) * 0.001;
    printf("奖金总数为 %lf", prize);
    return 0;
}
