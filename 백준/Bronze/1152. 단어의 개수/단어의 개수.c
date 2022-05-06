#include <stdio.h>
#include <string.h>
char str[1000001];
int i;
int cnt = 1;

int main()
{
	gets(str);

	int len = strlen(str);

	if (str[0] == ' ')
	{
		cnt--;
	}
	if (str[len - 1] == ' ')
	{
		cnt--;
	}
	for(i=0;i<len;i++)
	{
		if (str[i] == ' ')
		{
			cnt++;
		}
	}
	printf("%d", cnt);
}