#include <stdio.h>

int main()
{
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);

	if (w - x > h - y && x > h - y && y > h - y) printf("%d", h - y);
	else if(h-y > w-x && x> w-x && y > w-x) printf("%d", w - x);
	else if (w - x > x&&h - y > x&&y > x) printf("%d", x);
	else printf("%d", y);
}