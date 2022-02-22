#include"game.h"

void menu()
{
	printf("**************************\n");
	printf("****  1.play  0.exit  ****\n");
	printf("**************************\n");
}
void game()
{
	//数组-存放棋盘信息
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisPlayBoard(board,ROW,COL);
	//下棋
	char ret = 0;
	while (1)
	{
		
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisPlayBoard(board, ROW, COL);
		ret = isWin(board,ROW,COL);
		if (ret != 'C')
			break;
		//电脑下棋
		ComputeMove(board, ROW, COL);
		DisPlayBoard(board, ROW, COL);
		ret = isWin(board,ROW,COL);
		if (ret != 'C')
			break;
	}
	//宣布获胜者或者平局
	if (ret == '*')
		printf("玩家获胜！\n");
	if (ret == '#')
		printf("机器获胜！\n");
	if (ret == 'Q')
		printf("平局\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入你的选择:");
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
				printf("输入错误，请重新输入:");
				break;
		}
	} while (input);   //别忘了while()后面的;
}