#include <stdio.h>
#include <string.h>

int main()
{
	int count,time,howlong;
	char s[21];
	scanf("%d", &count);

	for (int i = 0; i < count; i++)
	{
		scanf("%d", &time);
		scanf("%s", &s);
		howlong=strlen(s);

		for (int j = 0; j < howlong; j++)
		{
			for (int z = 0; z < time; z++)
			{
				printf("%c", s[j]);
			}
		}
		printf("\n");
	}
}