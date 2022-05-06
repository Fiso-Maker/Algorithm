#include <stdio.h>

int main()
{
	int count,peo,aver,dir[1001],more;
	float re[10000];
	scanf("%d", &count);
	for (int i = 0; i < count; i++)
	{
		aver = 0;
		more = 0;
		scanf("%d", &peo);
		for (int j = 0; j < peo; j++)
		{
			scanf("%d", &dir[j]);
			aver += dir[j];
		}
		aver /= peo;
		for (int j = 0; j < peo; j++)
		{
			if (aver < dir[j]) more++;
		}
		re[i]=(float)more / peo * 100;
	}
	for (int i = 0; i < count; i++)
	{
		printf("%.3f%%\n", re[i]);
	}
}