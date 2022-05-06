#include<stdio.h>

int main(void)
{
	int a;
	int n[15];
	int cnt = 0;
	int val = 1;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a);

		n[i] = a % 42;
	}
	for (int i = 0; i < 10; i++)
	{
		val = 1;
		for (int j = i+1; j < 10; j++)
		{
			if (n[i] == n[j])
			{
				val = 0;
				break;
			}
		}
		if (val == 1) cnt++;
	}
	printf("%d", cnt);
}