#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int order[100005];
int stack[100005];
int n,b;
int stinx = -1;
int num = 1;
int reinx = 0;
int result[200009];

int isEmpty()
{
	if (stinx == -1)
	{
		return 1;
	}
	return 0;
}
int main()
{
	scanf("%d", &n);
	for (int a = 0; a < n; a++)
	{
		scanf("%d", &order[a]);
	}
	for (int a = 0; a < n; a++)
	{
		if (isEmpty())
		{
			stack[++stinx] = num++;
			result[reinx++] = 1;
		}
		if (stack[stinx] > order[a])
		{
			printf("NO");
			return 0;
		}
		while (stack[stinx] < order[a])
		{
			stack[++stinx] = num++;
			result[reinx++] = 1;
		}
		if (stack[stinx] == order[a])
		{
			stinx--;
			result[reinx++] = -1;
		}
	}
	for (int a = 0; a < reinx; a++)
	{
		if (result[a] == 1)
			printf("+\n");
		else
			printf("-\n");
	}
	return 0;
}