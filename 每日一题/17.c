//
// Created by 黎圣  on 2023/9/8.
//
/* 题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下
 * 求它在第10次落地时，共经过多少米？第10次反弹多高？
 */
#include "stdio.h"
int main()
{
    float s = 100;
    float h = 50;
    for (int i = 2; i <= 2; i++)
    {
        s = s + h * 2;
        h = h / 2;
    }
    printf("s = %f, h = %f", s, h);
    return 0;
}
