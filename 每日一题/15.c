//
// Created by 黎圣  on 2023/9/5.
//
/*
 * 题目  ：s = a + aa + aaa + aaaa + aa……a的值，其中a是一个数字。
 * 例如2+22+222+2222+22222（此时共有5个数相加），几个数相加有键盘控制。
 */
#include "stdio.h"
int main()
{
    int a = 2;
    int temp = a;
    int sum = 0;
    int i;
    scanf("%d", &i);
    for (int n = 1; n <= i; n++)
    {
        a *= 10;
        a += temp;
        sum = sum + a;
    }
    printf("%d\n", sum);
    return 0;
}
