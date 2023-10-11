//
// Created by 黎圣  on 2023/10/11.
//
/*
 * 题目：一个5位数，判断它是不是回文数。
 * 例：12321是回文数，个位与万位相同，十位与千位相同。
 */
#include "stdio.h"
int main()
{
    int a = 12321;
    int g, s, b, q, w;
    g = a % 10;
    s = a % 100 / 10;
    b = a % 1000 / 100;
    q = a % 10000 / 1000;
    w = a / 10000;
    if (g == w && s == q)
        printf("是回文数\n");
    else
        printf("不是回文数\n");
    return 0;
}
