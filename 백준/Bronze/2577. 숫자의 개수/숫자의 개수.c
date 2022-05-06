#include <stdio.h>
//#include <string.h>
//#include <Windows.h>

int numr[10];

int main()
{
	int a, b, c;
	int num;
	int i;
	scanf("%d %d %d", &a, &b, &c);

	//system("cls");

	//printf("참가번호(11)  성명(연준서)  학교명(덕영고등학교)\n");
	//printf("================================================\n");

	num = a * b * c;
	while (num)
	{
		numr[num % 10]++;
		num /= 10;
	}
	for (i = 0; i <= 9; i++)
	{
		printf("%d\n", numr[i]);
	}
}