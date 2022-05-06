#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int count;
	int i,j;
	int num[100];
	int so;
	int re = 0;

	scanf("%d", &count);
	for (i = 0; i < count; i++)
	{
		scanf("%d", &num[i]);
	}

	for (i = 0; i < count; i++)
	{
		so = 0;
		for (j = 2; j <= num[i]; j++)
		{
			if(num[i] % j == 0) so++;
		}
		if (so == 1)
		{
			re++;
		}
	}
	printf("%d", re);
}