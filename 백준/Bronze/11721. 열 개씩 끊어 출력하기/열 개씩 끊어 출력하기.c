#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];

	scanf("%s", str);
	
	for (int i = 0; i < strlen(str); i++)
	{
		printf("%c", str[i]);
		if (i % 10 == 9) printf("\n");
	}
}