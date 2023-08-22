//
// Created by 黎圣  on 2023/8/22.
//
/*
 * 题目：用*号输出字母C的图案。
 */
#include "stdio.h"
int main()
{
    int n = 8;
    for (int i = 0; i < n; i++)
        printf("*");
    for (int i = 0; i < n - 3; i++)
        printf("*\n");
    for (int i = 0; i < n + 1; i++)
        printf("*");
    return 0;
}
