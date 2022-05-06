#include <stdio.h>

int cnt;
int n, r, c;
void find(int m,int x,int y) // n, 정사각형 크기, x좌표, y좌표
{
	if (x == r && y == c)
	{
		printf("%d", cnt);
		return;
	}
	if ((x <= r && r < x + m ) && (y <= c && c < y + m ))
	{
		find(m / 2, x, y);
		find(m / 2, x, y + (m / 2));
		find(m / 2, x + (m / 2), y);
		find(m / 2, x + (m / 2), y + (m / 2));
	}
	else
	{
		cnt += m * m;
	}
	
}
int main()
{
	scanf("%d %d %d", &n, &r, &c);

	find(1 << n, 0, 0);
}