#include"game.h"

void menu()
{
	printf("**************************\n");
	printf("****  1.play  0.exit  ****\n");
	printf("**************************\n");
}
void game()
{
	//����-���������Ϣ
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisPlayBoard(board,ROW,COL);
	//����
	char ret = 0;
	while (1)
	{
		
		//�������
		PlayerMove(board, ROW, COL);
		DisPlayBoard(board, ROW, COL);
		ret = isWin(board,ROW,COL);
		if (ret != 'C')
			break;
		//��������
		ComputeMove(board, ROW, COL);
		DisPlayBoard(board, ROW, COL);
		ret = isWin(board,ROW,COL);
		if (ret != 'C')
			break;
	}
	//������ʤ�߻���ƽ��
	if (ret == '*')
		printf("��һ�ʤ��\n");
	if (ret == '#')
		printf("������ʤ��\n");
	if (ret == 'Q')
		printf("ƽ��\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("���������ѡ��:");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("�����������������:");
				break;
		}
	} while (input);   //������while()�����;
}