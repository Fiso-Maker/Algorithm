#include <stdio.h>

int num[13] = { 6,6,6, };
void re(int a)
{
	if (num[a] == 10)
	{
		num[a] = 0;
		num[a + 1]++;
		re(a + 1);
	}
	return;
}
int main()
{

	int count, n = 0;
	int i,j,k,l;
	scanf("%d", &count);
	
	while (1)
	{

		for (i = 0; i <= 10; i++)
		{
			if (num[i] == 6 && num[i + 1] == 6 && num[i + 2] == 6)
			{
				n++;
				break;
			}
		}
		if (n == count) break;

		num[0]++;

		re(0);

	}
	for (k = 12; k >= 0; k--)
	{
		if (num[k] != 0) break;
	}
	for (l = k; l >= 0; l--)
	{
		printf("%d", num[l]);
	}
	
}