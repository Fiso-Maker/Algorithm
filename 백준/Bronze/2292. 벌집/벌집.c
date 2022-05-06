#include <stdio.h>

int main()
{
	int a,i=1;
	int t = 0, j = 0;
	int cnt = 2;
	scanf("%d", &a);

	do{
		if (a == 1)
		{
			cnt = 1;
			break;
		}
		else if (t == j + 6)
		{
			cnt++;
			j += 6;
			t = 0;
		}
		i++;
		t++;
	} while (a != i);

	printf("%d", cnt);
}