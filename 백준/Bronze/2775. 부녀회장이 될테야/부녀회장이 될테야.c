#include <stdio.h>

int main()
{
	int count;
	int k, n;
	int i, j, z;
	int map[15][15] = { 0, };
	scanf("%d", &count);

	for (i = 1; i < 15; i++)
	{
		map[0][i] = i;
	}
	for (i = 1; i < 15; i++)
	{
		for (j = 1; j < 15; j++)
		{
			for (z = 1; z <= j; z++)
			{
				map[i][j] += map[i - 1][z];
			}
		}
	}
	for (i = 0; i < count; i++)
	{
		scanf("%d %d", &k, &n);
		printf("%d\n", map[k][n]);
	}
}