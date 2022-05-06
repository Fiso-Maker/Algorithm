#include <stdio.h>

int num[100000] = { 0 };
int top = -1;
void push(int n)
{
	num[++top] = n;
}
void pop()
{
	top--;
}
int main()
{
	int count;
	int i;
	int re = 0;
	scanf("%d", &count);

	for (i = 0; i < count; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] == 0)
		{
			pop();
		}
		else
		{
			push(num[i]);
		}
	}
	for (i = 0; i <= top; i++)
	{
		re += num[i];
	}
	printf("%d", re);
}