//
// Created by 黎圣  on 2023/8/25.
//
/*
 * 题目：古典问题（免子生仔）：有一对兔子，从出生后第3个月起每个月都生一对免子，小免子长到第三个月后
 * 每个月又生一对免子，假如免子都不死，问每个月的兔子总数为多少？
 * (输出前40个月即可)
 */
#include "stdio.h"
int main()
{
    int sum_children[] = {};
    for (int i = 0; i <= 40; i++)
    {
        if (i == 0 || i == 1)
            sum_children[i] = 1;
        else
            sum_children[i] = sum_children[i - 1] + sum_children[i - 2];
    }
    for (int i = 0; i < 40; i++)
        printf("%d\n", sum_children[i]);
    return 0;
}
