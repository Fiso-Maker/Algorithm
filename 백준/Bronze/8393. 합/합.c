#include <stdio.h>

int main()
{
	int n;
	int i;
	int re = 0;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		re += i;
	}
	printf("%d", re);
}