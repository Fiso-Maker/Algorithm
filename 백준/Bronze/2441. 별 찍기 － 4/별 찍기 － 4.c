#include <stdio.h>

int main()
{
	int n;
	int i, j;
	scanf("%d", &n);

	for (i = n; i >= 1; i--)
	{
		for (j = 0; j < n - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		if (i == 1)break;
		printf("\n");
	}
}