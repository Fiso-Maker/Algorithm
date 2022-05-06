#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	for (int i = 0; i < 2*a-1; i++)
	{
		if (i < a)
		{
			for (int j = 0; j <= i; j++)
			{
				printf("*");
			}
		}
		else
			for (int j = 2 * a - 1; j > i; j--)
			{
				printf("*");
			}
		printf("\n");
	}
}