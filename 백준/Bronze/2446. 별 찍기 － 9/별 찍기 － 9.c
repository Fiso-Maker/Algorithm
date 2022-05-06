#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num * 2 - 1; i++)
	{
		if (i < num)
		{
			for (int j = 0; j < i; j++)
			{
				printf(" ");
			}
			for (int j = 2 * (num - i) - 1; j > 0; j--)
			{
				printf("*");
			}

		}
		else
		{
			for (int j = num * 2 - 2; j > i; j--)
			{
				printf(" ");
			}
			for (int j = 0; j < (i+2-num)*2-1; j++)
			{
				printf("*");
			}

		}
		printf("\n");
	}
}