#include <stdio.h>
#include <string.h>

int main()
{
	char a[101];
	int hlong;

	scanf("%s", &a);

	hlong = strlen(a);

	for (int i = 0; i < hlong; i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z') printf("%c", a[i]);
	}
}