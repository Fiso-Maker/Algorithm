#include <stdio.h>

void re(int n, int s,int m, int e) // n, 시작위치, 경유위치, 끝위치
{
	if (n == 1)
	{
		printf("%d %d\n", s, e);
		return;
	}
	re(n - 1, s, e, m);
	printf("%d %d\n", s, e);
	re(n - 1, m, s, e);

}
int main()
{
	int i;

	int count;
	int result;
	scanf("%d", &count);
	
	result = (1<<count)-1;
	printf("%d\n", result);
	re(count, 1, 2, 3);
	
}