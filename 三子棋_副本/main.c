#include <stdio.h>
#include "game.h"

void menu()
{
    printf("*****************\n");
    printf("**1.play 0.exit**\n");
    printf("*****************\n");
}

void game()
{
    char ret = 0;
    //游戏的实现
    char board[ROW][COL] = {0};//数组-存放走出的棋盘信息
    //初始化棋盘
    InitBoard(board, ROW, COL);
    //打印棋盘
    DisplayBoard(board, ROW, COL);
    //下棋
    while(1)
    {
        //玩家下棋
        PlayerMove(board,ROW,COL);
        DisplayBoard(board,ROW,COL);
        //判断玩家输赢
        ret = IsWin(board,ROW,COL);
        if(ret != 'C')
        {
            break;
        }
        //电脑下棋
        ComputerMove(board,ROW,COL);
        DisplayBoard(board,ROW,COL);
        //判断电脑输赢
        ret = IsWin(board,ROW,COL);
        if(ret != 'C')
        {
            break;
        }
    }
    if(ret == '*')
        printf("玩家获胜！\n");
    else if (ret == '#')
        printf("电脑获胜！\n");
    else
        printf("平局");
}
void test()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请选择：");
        scanf("%d", &input);
        switch(input)
        {
            case 1:
                game();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("选择错误，请重新输入：\n");
                break;
        }
    }while(input != 0);
}
int main()
{
    test();
    return 0;
}
