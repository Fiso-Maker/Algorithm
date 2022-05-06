#include <stdio.h>

int main()
{
	int n;
	int i=0;
	int cnt = 0;
	int a, b, dir;
	scanf("%d", &n);

	a = n / 10;
	b = n % 10;
	do
	{
		dir = b;
		b = (a + b)%10;
		a = dir;
		i++;
	} while (n != (a * 10 + b));
	printf("%d", i);
}