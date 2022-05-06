#include <stdio.h>
#include <string.h>

int main()
{
	char al[101],num=0,cral=0;

	scanf("%s", &al);
	
	while (num<strlen(al))
	{
		if (al[num] == 'c'&&al[num + 1] == '=')
		{
			cral++;
			num+=2;
		}
		else if (al[num] == 'c'&&al[num + 1] == '-')
		{
			cral++;
			num += 2;
		}
		else if (al[num] == 'd' && al[num + 1] == 'z' && al[num + 2] == '=')
		{
			cral++;
			num += 3;
		}
		else if (al[num] == 'd'&&al[num + 1] == '-')
		{
			cral++;
			num += 2;
		}
		else if (al[num] == 'l'&&al[num + 1] == 'j')
		{
			cral++;
			num += 2;
		}
		else if (al[num] == 'n' && al[num + 1] == 'j')
		{
			cral++;
			num += 2;
		}
		else if (al[num] == 's'&&al[num + 1] == '=')
		{
			cral++;
			num += 2;
		}
		else if (al[num] == 'z' && al[num + 1] == '=')
		{
			cral++;
			num += 2;
		}
		else
		{
			cral++;
			num++;
		}
	}
	printf("%d", cral);
}