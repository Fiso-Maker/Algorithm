#include <stdio.h>

int main()
{
	int count,num[101],result=0;
	scanf("%d", &count);

	for (int i = 0; i < count; i++)
	{
		scanf("%1d", &num[i]);
	}
	for (int i = 0; i < count; i++)
	{
		result += num[i];
	}
	printf("%d", result);
}