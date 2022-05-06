#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	
	for (int i = 0; i < a; i++)
	{
		for (int z = a - i; z > 1; z--)
		{
			printf(" ");
		}
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

}