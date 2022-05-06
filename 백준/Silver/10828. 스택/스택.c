#include <stdio.h>
#include <string.h>


int count;
int i,j;
int num;
int stack[10000];
int topp = -1;

void push(int n)
{
	stack[++topp] = n;
}
void top()
{
	if (topp == -1)
		printf("-1\n");
	else
		printf("%d\n", stack[topp]);
}
void pop()
{
	if (topp == -1)
	{
		printf("-1\n");
	}
	else
	{
		printf("%d\n",stack[topp]);
		topp--;
	}
}
void size()
{
	printf("%d\n", topp+1);
}
void empty()
{
	
	if (topp == -1)
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}
}
int main()
{
	char com[10];
	scanf("%d", &count);

	for (i = 0; i < count; i++)
	{
		scanf("%s", &com);
		if (strcmp(com, "push") == 0)
		{
			scanf("%d", &num);
			push(num);
		}
		else if (strcmp(com, "top") == 0)
		{
			top();
		}
		else if (strcmp(com, "size") == 0)
		{
			size();
		}
		else if (strcmp(com, "pop") == 0)
		{
			pop();
		}
		else if (strcmp(com, "empty") == 0)
		{
			empty();
		}
	}
}