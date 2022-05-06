#include <stdio.h>
#include <string.h>

int main()
{
	int str_len, al[26] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
	char str[101];
	scanf("%s", &str);

	str_len = strlen(str);

	for (int i = str_len - 1; i >= 0; i--)
	{
		al[str[i] - 97]=i;
	}
	for (int i = 0; i < 26; i++)
	{
		printf("%d ", al[i]);
	}
}