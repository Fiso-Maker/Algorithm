#include <stdio.h>
#include <stdlib.h>

int com(const void *a, const void *b)
{
	int na = *(const int*) a;
	int nb = *(const int*) b;

	if (na < nb)
		return -1;
	if (na > nb)
		return 1;
	return 0;
}
int main()
{
	int count;
	int i;
	int ch[1000] = { 0, };

	scanf("%d", &count);

	for (i = 0; i < count; i++)
	{
		scanf("%d", &ch[i]);
	}
	
	qsort(ch, count, sizeof(ch[0]), com);

	for (i = 0; i < count; i++)
	{
		printf("%d\n", ch[i]);
	}
}