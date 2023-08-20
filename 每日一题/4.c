//
// Created by 黎圣  on 2023/8/20.
//
/*
 * 题目：输入某年某月某日，判断这一天是这一年的第几天？
 * 1、普通闰年：公历年份是4的倍数，且不是100的倍数，为普通闰年（如2004年、2020年就是闰年）。
 * 2、世纪闰年：公历年份是整百数，必须是400的倍数，才是世纪闰年（如1900年不是世纪闰年，
 * 而2000年就是世纪闰年）。
 */
#include "stdio.h"
int main()
{

    int year, day, month;
    int sum = 0;
    printf("Please input:\n");
    scanf("%d %d %d", &year, &month, &day);
    switch(month)
    {
        case 1:
            sum = day;
            break;
        case 2:
            sum = 31 + day;
            break;
        case 3:
            sum = 31 + 28 + day;
            break;
        case 4:
            sum = 31 + 28 + 31 + day;
            break;
        case 5:
            sum = 31 + 28 + 31 + 30 + day;
            break;
        case 6:
            sum = 31 + 28 + 31 + 30 + 31 + day;
            break;
        case 7:
            sum = 31 + 28 + 31 + 30 + 31 + 30 + day;
            break;
        case 8:
            sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + day;
            break;
        case 9:
            sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day;
            break;
        case 10:
            sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
            break;
        case 11:
            sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
            break;
        case 12:
            sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
            break;
        default:
            printf("操你妈傻逼东西\n");
            break;
    }
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        sum = sum + 1;
    printf("这一天是第%d年的第%d天", year, sum);
    return 0;
}
