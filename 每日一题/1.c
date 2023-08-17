//
// Created by 黎圣  on 2023/8/17.
//
/*
 * 题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
已知：
1、三位数
2、1-4
3、各不相同
输出：
1、有多少个这样的三位数
2、依次输出
*/
#include "stdio.h"
int main()
{
    int g, s, b;
    int sum = 0;
    int num = 0;
    for (b = 1; b < 5; b++)
    {
        for (s = 1; s < 5; s++)
        {
            for (g = 1; g < 5; g++)
            {
                if (g == b || g == s || b == s)
                    continue;
                sum = b * 100 + s * 10 + g;
                printf("%d ", sum);
                num++;
            }
        }
        printf("\n");
    }
    printf("一共有%d个", num);
    return 0;
}
