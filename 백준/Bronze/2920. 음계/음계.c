#include <stdio.h>
#include <string.h>
//#include <Windows.h>

int main()
{
	int i;
	int num[9];
	int col = 0;
	for (i = 0; i < 8; i++)
	{
		scanf("%d", &num[i]);
	}
	for (i = 0; i < 7; i++)
	{
		if (num[i] + 1 == num[i + 1])
		{
			col++;
		}
		if (num[i] - 1 == num[i + 1])
		{
			col--;
		}
	}
	if (col == 7)
		printf("ascending");
	else if (col == -7)
		printf("descending");
	else
		printf("mixed");

	//system("cls");

	//printf("참가번호(11)  성명(연준서)  학교명(덕영고등학교)\n");
	//printf("================================================\n");

	
}