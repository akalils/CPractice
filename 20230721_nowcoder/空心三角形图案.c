//
// Created by 黎圣  on 2023/7/21.
//
#include <stdio.h>

int main() {
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                if (i == n - 1 || j == 0 || i == j)
                    printf("* ");
                else
                    printf("  ");
            }
            printf("\n");
        }
    }
    return 0;
}