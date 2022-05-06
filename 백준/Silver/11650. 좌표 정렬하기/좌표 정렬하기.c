#include <stdio.h>
#include <stdlib.h>

int com(const void* a, const void* b)
{
	const int* na = (const int *)a;
	const int* nb = (const int *)b;

	if (na[0] < nb[0])
		return -1;
	if (na[0] > nb[0])
		return 1;

	if (na[1] < nb[1])
		return -1;
	if (na[1] > nb[1])
		return 1;
	return 0;
}
int main()
{
	int pos[100000][2] = { 0 };
	int count;
	int i;

	scanf("%d", &count);
	for (i = 0; i < count; i++)
	{
		scanf("%d %d", &pos[i][0], &pos[i][1]);
	}
	qsort(pos, count, sizeof(pos[0]), com);

	for (i = 0; i < count; i++)
	{
		printf("%d %d\n", pos[i][0], pos[i][1]);
	}
	return 0;
}