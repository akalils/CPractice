//
// Created by 黎圣  on 2023/9/16.
//
/* 题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13•••求出这个数列的前20项之和。
 */
#include "stdio.h"
int main()
{
    float a = 2;
    float b = 1;
    float temp;
    float sum;
    for (int i = 0; i < 20; i++)
    {
        sum = sum + a / b;
        temp = a;
        a = a + b;
        b = temp;
    }
    printf("%.2f", sum);
    return 0;
}
