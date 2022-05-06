#include <stdio.h>
#include <string.h>

int so[1000000];
int main()
{
	int start,end;
	int i, t, r;
	scanf("%d %d", &start,&end);

	for (i = 1; i <= end; i++)
	{
		so[i] = 1;
	}
	for (r = 2; r <= 1000000; r++)
	{
		for (t = r * 2; t <= end; t += r)
		{
			so[t] = 0;
		}
	}
	for (i = start; i <= end; i++)
	{
		if (so[i] == 1&& i!=1)
		{
			printf("%d\n", i);
		}
	}
}