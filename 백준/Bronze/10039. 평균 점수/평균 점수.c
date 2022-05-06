#include <stdio.h>
#include <string.h>
//#include <Windows.h>

int main()
{
	int score;
	int i;
	int avg = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &score);
		if (score < 40)
		{
			score = 40;
		}
		avg += score;
	}
	printf("%d", avg / 5);
	//system("cls");

	//printf("참가번호(11)  성명(연준서)  학교명(덕영고등학교)\n");
	//printf("================================================\n");

	
}