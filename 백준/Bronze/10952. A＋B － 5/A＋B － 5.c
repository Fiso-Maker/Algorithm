#include <stdio.h>

int main()
{
	int b,c,num=0;
	
	while(1)
	{
		scanf("%d %d", &b, &c);
		if (b == 0 && c == 0) break;
		printf("%d\n", b + c);
	}
}