#include <stdio.h>
#include "game.h"

void menu()
{
    printf("***********************\n");
    printf("*****1.play 0.exit*****\n");
    printf("***********************\n");
}

void game()
{
    //雷的信息存储
    char board[ROW][COL];
}

void test()
{
    int input = 0;
    do
    {
        menu();
        printf("请选择：");
        scanf("%d", &input);
        switch (input)
        {
            case 1:
                game();
                break;
            case 0:
                printf("退出游戏！！");
                break;
            default:
                printf("选择错误，请重新输入：\n");
                break;
        }
    } while (input != 0);
}
int main()
{
    test();
    return 0;
}
