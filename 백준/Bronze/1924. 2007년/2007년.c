#include <stdio.h>

int main()
{
	int i, x, y;
	int DOM[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	char NOD[][4] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
	scanf("%d %d", &x, &y);
	
	for (i = 1; i <= x; i++)
	{
		y += DOM[i-1];
	}
	y %= 7;
	printf("%s", NOD[y]);
}