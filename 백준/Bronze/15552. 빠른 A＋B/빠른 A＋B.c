#include <stdio.h>

int main()
{
	int count,b,c;
	scanf("%d", &count);
	
	for (int i = 0; i < count; i++)
	{
		scanf("%d %d", &b, &c);
		printf("%d\n", b + c);
	}

	
}