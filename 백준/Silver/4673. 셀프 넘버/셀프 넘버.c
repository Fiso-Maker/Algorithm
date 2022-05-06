#include <stdio.h>

int numc[10001] = { 0 };
int a, b,c,d, num=1;
int i;

int main()
{
	for (i = 1; i < 10000; i++)
	{
		a = i /1000;
		b = i %1000/ 100;
		c = i % 1000 % 100 / 10;
		d = i % 1000 % 100 % 10;
		if(a+b+c+d+i<10000)
			numc[a + b +c+d+ i] = 1;
	}
	for (i = 1; i < 10000; i++)
	{
		if (numc[i] != 1)
			printf("%d\n", i);
	}
}