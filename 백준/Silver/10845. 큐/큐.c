#include <stdio.h>
#include <string.h>

int queue[10000];
int front=-1;
int back=-1;

void push(int a)
{
	queue[++back]=a;
}

void pop()
{
	if(front==back)
	{
		printf("-1\n");
	}
	else
	{
		printf("%d\n",queue[++front]);
	}
}

void size()
{
	printf("%d\n",(back+1)-(front+1));
}

void empty()
{
	if(back==front)
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}
}

void fr()
{
	if(back==front)
	{
		printf("-1\n");
	}
	else
	{
		printf("%d\n",queue[front+1]);
	}
}

void bk()
{
	if(back==front)
	{
		printf("-1\n");
	}
	else
	{
		printf("%d\n",queue[back]);
	}
}

int main()
{
	char com[6];
	int count;
	int i;
	int num;

	scanf("%d",&count);

	for(i=0;i<count;i++)
	{
		scanf("%s",&com);

		if(strcmp(com,"push")==0)
		{
			scanf("%d",&num);

			push(num);
		}
		else if(strcmp(com,"pop")==0)
			pop();
		else if(strcmp(com,"size")==0)
			size();
		else if(strcmp(com,"empty")==0)
			empty();
		else if(strcmp(com,"front")==0)
			fr();
		else if(strcmp(com,"back")==0)
			bk();
	}
}