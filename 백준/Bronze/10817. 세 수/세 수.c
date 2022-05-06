#include <stdio.h>

int main()
{
	int num[3],i,j,dir;
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &num[i]);
	}
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 2; i++)
		{
			if (num[i] < num[i + 1])
			{
				dir = num[i];
				num[i] = num[i + 1];
				num[i + 1] = dir;
			}
		}
	}
	printf("%d",num[1]);
	return 0;
}