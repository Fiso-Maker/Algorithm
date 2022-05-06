#include <stdio.h>

int main()
{
	int e, s, m, num = 1;
	scanf("%d %d %d", &e, &s, &m);

	while (1)
	{
		if ((num % 15 == e|| (num % 15 == 0&&e==15)) && (num % 28 == s || (num % 28 == 0&&s==28)) && (num % 19 == m|| (num % 19 == 0&&m==19))) break;
		else num++;
	}
	printf("%d", num);
}