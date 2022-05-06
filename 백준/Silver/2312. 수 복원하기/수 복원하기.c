#include <stdio.h>

int main()
{
	int count;
	int i,j=2,k;
	int num;
	int nun[100000];

	scanf("%d", &count);
	
	for (i = 1; i <= count; i++)
	{
		scanf("%d", &num);
		for (k = 2; k <= 100000; k++)
		{
			nun[k] = 0;
		}
		j = 2;
		while(j<=num)
		{
			if (num % j == 0)
			{
				nun[j]++;
				num /= j;
			}
			else
				j++;
		}
		for (j = 2; j <= 100000; j++)
		{
			if (nun[j] != 0)
			{
				printf("%d %d\n", j, nun[j]);
			}
		}
	}
}