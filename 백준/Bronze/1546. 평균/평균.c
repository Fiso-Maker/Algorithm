#include <stdio.h>

int main()
{
	int count, i, grade[1001];
	int big=0;
	float n_grade=0;
	scanf("%d", &count);
	for (i = 0; i < count; i++)
	{
		scanf("%d", &grade[i]);
		if (big < grade[i]) big = grade[i];
	}
	for (i = 0; i < count; i++)
	{
		n_grade += (((float)grade[i] / big) * 100);
	}
	n_grade /= count;
	printf("%f", n_grade);
}