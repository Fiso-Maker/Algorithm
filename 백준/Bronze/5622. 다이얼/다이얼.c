#include <stdio.h>

int main(void)
{

	char st[20];
	int a[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	int cnt = 0;

	scanf("%s", st);

	for (int i = 0; st[i] != '\0'; i++)
	{
		cnt += a[st[i]-'A'];
	}
	printf("%d", cnt);
}
