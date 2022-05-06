#include <stdio.h>

int main()
{
	int count,b[100],c[100];
	scanf("%d", &count);
	
	for (int i = 0; i < count; i++)
	{
		scanf("%d %d", &b[i], &c[i]);
	}

	for (int i = 0; i < count; i++)
	{
		printf("%d\n", c[i] + b[i]);
	}
}