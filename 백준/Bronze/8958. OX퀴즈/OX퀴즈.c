#include <stdio.h>
#include <string.h>
//#include <Windows.h>

int main()
{
	int count;
	int i,j;
	int len;
	int re=0, result=0;
	char ox[80];

	scanf("%d", &count);

	for (i = 0; i < count; i++)
	{
		scanf("%s", &ox);
		
		len = strlen(ox);

		re = 0;
		result = 0;
		for (j = 0; j < len; j++)
		{
			
			if (j == 0 && ox[j]=='O')
			{
				re++;
			}
			else if (ox[j] == 'O')
			{
				re++;
			}
			else if (ox[j] == 'X')
			{
				re = 0;
			}
			result += re;
		}
		printf("%d\n", result);
	}
	//system("cls");

	//printf("참가번호(11)  성명(연준서)  학교명(덕영고등학교)\n");
	//printf("================================================\n");

	
}