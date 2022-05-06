#include <stdio.h>

int main()
{
	int numc[9] = { 0, };
	int num;
	int i;
	int big;

	scanf("%d", &num);
	while (num)
	{
		if (num % 10 == 9)
		{
			numc[6]++;
		}
		else
		{
			numc[num % 10]++;
		}
		num /= 10;
	}
	numc[6] = numc[6] / 2 + numc[6] % 2;

	big = numc[0];
	for (i = 1; i < 10; i++)
	{
		if (big < numc[i])
		{
			big = numc[i];
		}
	}
	printf("%d", big);
}