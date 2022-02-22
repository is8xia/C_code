#pragma once
#define ROW 3
#define COL 3

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//函数声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisPlayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputeMove(char board[ROW][COL], int row, int col);

//玩家赢了返回*
//机器赢了返回#
//平局返回Q
//继续返回C
char isWin(char board[ROW][COL], int row, int col);
