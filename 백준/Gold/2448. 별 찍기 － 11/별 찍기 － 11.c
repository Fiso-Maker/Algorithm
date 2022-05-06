#include <stdio.h>

char space[4000][8000] = { 0 };
int i, j;

void rec(int hei,int x, int y)
{
	//printf("%d %d %d\n", hei, x, y);
	if (hei == 3)
	{
		space[y][x] = '*';
		space[y + 1][x + 1] = '*';
		space[y + 1][x - 1] = '*';
		space[y + 2][x - 2] = '*';
		space[y + 2][x - 1] = '*';
		space[y + 2][x] = '*';
		space[y + 2][x + 1] = '*';
		space[y + 2][x + 2] = '*';
	}
	else
	{
		rec(hei / 2, x, y);
		rec(hei / 2, x - hei/2, y + hei/2);
		rec(hei / 2, x + hei/2, y + hei/2);
	}
}
int main()
{
	int n;
	int hei;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n*2; j++)
		{
			space[i][j] = ' ';
		}
	}
	rec(n, n-1, 0);
	for (i = 0; i < n; i++)
	{
		printf("%s\n", space[i]);
	}
}