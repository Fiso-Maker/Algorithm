#include <stdio.h>
#include <stdbool.h>

int main()
{
	int M, N,sum=0,min=10001;
	bool a;

	scanf("%d %d", &M, &N);

	for (int i = M; i <= N; i++)
	{
		a = true;
		for (int j = 2; j <= i/2; j++)
		{
			if (i%j == 0) {
				a = false;
			}
		}
		if (a == true && i != 1)
		{
			sum += i;
			if (min > i) 
			{
					min = i;
			}
		}
	}
	if (sum != 0)
		printf("%d\n%d", sum, min);
	else
		printf("-1");
}