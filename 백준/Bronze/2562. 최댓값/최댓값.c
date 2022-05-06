#include<stdio.h>

int main(void)
{
	int num[10];
	int big,big_index;
	for (int i = 1; i <= 9; i++)
	{
		scanf("%d", &num[i]);
	}
	big = num[1];
	big_index = 1;
	for (int i = 2; i <= 9; i++)
	{
		if (num[i] > big)
		{
			big = num[i];
			big_index = i;
		}
	}
	printf("%d\n%d", big, big_index);
}