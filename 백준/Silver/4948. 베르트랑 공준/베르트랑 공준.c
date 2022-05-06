#include <stdio.h>
#include <string.h>

int so[300000];
int re[100000];
int main()
{
	int count=0;
	int start,end;
	int i, t, r,j;
	
	for (i = 1; i <= 300000; i++)
	{
		so[i] = 1;
	}
	for (r = 2; r <= 300000; r++)
	{
		for (t = r * 2; t <= 300000; t += r)
		{
			so[t] = 0;
		}
	}

	while(1)
	{
		scanf("%d", &end);
		if (end == 0)
		{
			break;
		}
		for (i = end+1; i <= end*2; i++)
		{
			if (so[i] == 1 && i != 1)
			{
				re[count]++;
			}
		}
		count++;
	}
	for (i = 0; i < count; i++)
	{
		printf("%d\n", re[i]);
	}
}