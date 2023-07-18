//
// Created by 黎圣  on 2023/3/28.
//

#ifndef 三子棋_GAME_H
#define 三子棋_GAME_H
#include "stdio.h"
#endif //三子棋_GAME_H

#include "stdlib.h"
#include "time.h"
#define ROW 3
#define COL 3

//声明函数
void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL],int row,int col);
void PlayerMove(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL],int row,int col);

//告诉我们四种游戏走向
//玩家赢(*) or 电脑赢(#) or 平局(Q) or 游戏继续(C)
char IsWin(char board[ROW][COL],int row,int col);
int IsFull(char board[ROW][COL],int row,int col);