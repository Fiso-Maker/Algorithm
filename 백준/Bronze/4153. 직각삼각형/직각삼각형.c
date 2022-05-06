#include <stdio.h>
#include <math.h>

int main()
{
	int a[3], dir;
	
	while (1)
	{
		scanf("%d %d %d", &a[0], &a[1], &a[2]);

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0 ; j < 2-i; j++)
			{
				if (a[j] < a[j + 1])
				{
					dir = a[j];
					a[j] = a[j + 1];
					a[j + 1] = dir;
				}
			}
		}

		if (a[0] == 0 && a[1] == 0 && a[2] == 0)
		{
			break;
		}
		else if (a[0] == sqrt((a[1]*a[1]) + (a[2]*a[2])))
		{
			printf("right\n");
		}
		else
			printf("wrong\n");
	}
}