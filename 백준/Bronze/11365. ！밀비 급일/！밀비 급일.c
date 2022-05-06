#include <stdio.h>

int main()
{
	char ge[501];
	char ne[501];
	int length;
	while (1)
	{
		gets(ge);
		length = strlen(ge);
		for (int i = length - 1; i >= 0; i--)
		{
			ne[i] = ge[(length - 1) - i];
		}
		if (ge[0] == 'E'&&ge[1] == 'N'&&ge[2] == 'D')
		{
			break;
		}
		for (int i = 0; i < length; i++)
		{
			printf("%c", ne[i]);
		}
		printf("\n");
	}
}