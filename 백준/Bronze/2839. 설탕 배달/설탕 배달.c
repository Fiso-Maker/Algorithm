#include <stdio.h>

int main()
{
	int count=0;
	int num;
	
	scanf("%d", &num);
	while (1)
	{
		if (num % 5 == 0)
		{
			count += num / 5 ;
			break;
		}
		if (num == 0)
		{
			break;
		}
		if (num < 0)
		{
			count = -1;
			break;
		}
		num -= 3;
		count++;
	}
	printf("%d", count);
}