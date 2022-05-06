#include <stdio.h>

int main()
{
	int num, cnt = 0, val;
	char str[101];
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		val = 1;
		scanf("%s", &str);
		for (int j = 0; str[j] != '\0'; j++)
		{
			if (str[j] == str[j + 1])
				continue;
			else if (str[j + 1] == '\0')
				break;
			else if(str[j]!=str[j+1])
				for (int z = j+2; str[z] != '\0'; z++)
				{
					if (str[j] == str[z])
					{
						val = 0;
						break;
					}
				}
			if (val == 0)
			{
				break;
			}
		}
		if (val == 1)
		{
			cnt++;
		}
	}
	printf("%d", cnt);
}