#include <stdio.h>

int main()
{
	int a[3], b[2],c=0;
	int amin = 2000, bmin = 2000;

	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] < amin) amin = a[i];
	}
	for (int i = 0; i < 2; i++)
	{
		scanf("%d", &b[i]);
		if (b[i] < bmin) bmin = b[i];
	}
	c = amin + bmin - 50;
	printf("%d",c);
}