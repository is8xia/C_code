#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			board[i][j] = ' ';
}
void DisPlayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row ; i++)
	{
		int j = 0;
		//1.打印行
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//2.打印行间的分隔符
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
		
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("玩家走—>\n");
	while (1)
	{
		printf("请输入要下的坐标:");
		scanf("%d%d", &i, &j);
		if ((i >= 1 && i <= 3) && (j >= 1 && j <= 3))
		{
			if (board[i - 1][j - 1] == ' ')
			{
				board[i - 1][j - 1] = '*';
				break;
			}
			else printf("该位置已经被占\n");
		}
		else printf("坐标错误，请重新输入\n");
	}
}
void ComputeMove(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("电脑走—>\n");
	while (1)
	{
		i = rand() % row;
		j = rand() % col;
		if (board[i][j] == ' ')
		{
			board[i][j] = '#';
			break;
		}
			
	}
	
}
char isWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	//判断行是否有三者相等
	for (i = 0; i < row; i++)
		if ((board[i][0] == board[i][1]) && (board[i][1] == board[i][2]) && board[i][0] != ' ')
		{
			if(board[i][0]=='*')
				return '*';
			if (board[i][0] == '#')
				return '#';
		}
	//判断列是否有三者相等
	for(j=0;j<row;j++)
		if ((board[0][j] == board[1][j]) && (board[1][j] == board[2][j]) && board[i][0] != ' ')
		{
			if (board[0][j] == '*')
				return '*';
			if (board[0][j] == '#')
				return '#';
		}
	//判断主对角线是否相等
	if((board[0][0]==board[1][1])&&(board[1][1]==board[2][2])&&board[1][1]!=' ')
	{
		if (board[1][1] == '*')
			return '*';
		if (board[1][1] == '#')
			return '#';
	}
	//判断副对角线是否相等
	if ((board[0][2] == board[1][1]) && (board[1][1] == board[2][0]) && board[1][1] != ' ')
	{
		if (board[1][1] == '*')
			return '*';
		if (board[1][1] == '#')
			return '#';
	}
	//表中已经满了
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			if (board[i][j] != ' ')count++;
	if (count == 9)
		return 'Q';
	return 'C';
}