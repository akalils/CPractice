//
// Created by 黎圣  on 2023/9/2.
//
/*
 * 题目：输入两个正整数m和n，求其最大公约数和最小公倍数。
 */

#include "stdio.h"
int main()
{
    int a = 885;
    int b = 615;
    int r = a % b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    printf("%d", b);
    return 0;
}
