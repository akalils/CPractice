//
// Created by 黎圣  on 2023/8/21.
//
/*
 * 题目：输入三个整数x，y，z，请把这三个数由小到大输出。
 */

#include <stdio.h>
int main()
{
    int arr[3] = {0};
    for (int i = 0; i < 3; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 2 - i; j++)
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    for (int i = 0; i < 3; i++)
        printf("%d ", arr[i]);
}
