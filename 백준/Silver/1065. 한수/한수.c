#include <stdio.h>

int main()
{
	int count=0;
	int num;
	int i, j, k=1;
	int a,b,c;
	int dif1,dif2;
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		if (i >= 100)
		{
			a = i / 100;
			b = i %100 / 10;
			c = i % 100 % 10;
			dif1 = a - b;
			dif2 = b - c;
			if (dif1 == dif2)
				count++;
		}
		else
		{
			count++;
		}
	}
	printf("%d", count);
}