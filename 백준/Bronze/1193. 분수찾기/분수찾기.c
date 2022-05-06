#include <stdio.h>

int main()
{
	int count;
	int i, j, k=1;
	int a = 1, b = 1;
	scanf("%d", &count);
	while (k<count)
	{
		if (count == 1)
		{
			break;
		}
		else
		{
			while (k < count)
			{
				a--;
				b++;
				k++;
				if (a == 0)
				{
					a = 1;
					break;
				}
			}
			while (k<count)
			{
				a++;
				b--;
				k++;
				if (b == 0)
				{
					b = 1;
					break;
				}
			}
			
		}
	}
	printf("%d/%d", a,b);
}