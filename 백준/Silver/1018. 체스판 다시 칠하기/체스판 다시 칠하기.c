#include <stdio.h>

int main()
{
	int count;
	int M, N;
	int i, j, k;
	int dir = 0;
	char map[50][50] = { 0, };
	int wcount = 0,bcount=0;
	int least = 64;
	scanf("%d %d", &N, &M);
	for (i = 0; i < N; i++)
	{
		scanf("%s", &map[i]);
	}
	for (i = 0; i <= N - 8; i++)
	{
		for (j = 0; j <= M - 8; j++)
		{
			wcount = 0;
			bcount = 0;
			for (k = i; k < i + 8; k++)
			{
				if (dir == 0)
				{
					if (map[k][j] != 'W')
					{
						wcount++;
					}
					if (map[k][j + 1] != 'B')
					{
						wcount++;
					}
					if (map[k][j + 2] != 'W')
					{
						wcount++;
					}
					if (map[k][j + 3] != 'B')
					{
						wcount++;
					}
					if (map[k][j + 4] != 'W')
					{
						wcount++;
					}
					if (map[k][j + 5] != 'B')
					{
						wcount++;
					}
					if (map[k][j + 6] != 'W')
					{
						wcount++;
					}
					if (map[k][j + 7] != 'B')
					{
						wcount++;
					}


					if (map[k][j] != 'B')
					{
						bcount++;
					}
					if (map[k][j + 1] != 'W')
					{
						bcount++;
					}
					if (map[k][j + 2] != 'B')
					{
						bcount++;
					}
					if (map[k][j + 3] != 'W')
					{
						bcount++;
					}
					if (map[k][j + 4] != 'B')
					{
						bcount++;
					}
					if (map[k][j + 5] != 'W')
					{
						bcount++;
					}
					if (map[k][j + 6] != 'B')
					{
						bcount++;
					}
					if (map[k][j + 7] != 'W')
					{
						bcount++;
					}
				}
				else
				{
					if (map[k][j] != 'W')
					{
						bcount++;
					}
					if (map[k][j + 1] != 'B')
					{
						bcount++;
					}
					if (map[k][j + 2] != 'W')
					{
						bcount++;
					}
					if (map[k][j + 3] != 'B')
					{
						bcount++;
					}
					if (map[k][j + 4] != 'W')
					{
						bcount++;
					}
					if (map[k][j + 5] != 'B')
					{
						bcount++;
					}
					if (map[k][j + 6] != 'W')
					{
						bcount++;
					}
					if (map[k][j + 7] != 'B')
					{
						bcount++;
					}


					if (map[k][j] != 'B')
					{
						wcount++;
					}
					if (map[k][j + 1] != 'W')
					{
						wcount++;
					}
					if (map[k][j + 2] != 'B')
					{
						wcount++;
					}
					if (map[k][j + 3] != 'W')
					{
						wcount++;
					}
					if (map[k][j + 4] != 'B')
					{
						wcount++;
					}
					if (map[k][j + 5] != 'W')
					{
						wcount++;
					}
					if (map[k][j + 6] != 'B')
					{
						wcount++;
					}
					if (map[k][j + 7] != 'W')
					{
						wcount++;
					}
				}
				
				if (dir == 0)
				{
					dir = 1;
				}
				else
				{
					dir = 0;
				}
			}
			if (wcount > bcount)
			{
				wcount = bcount;
			}
			if (least > wcount)
			{
				least = wcount;
			}
		}
	}
	printf("%d", least);
}