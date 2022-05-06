#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);

	int o,tw,th;
	o=b%10;
	tw=b%100/10;
	th=b/100;

	o*=a;
	tw*=a;
	th*=a;

	printf("%d\n",o);
	printf("%d\n",tw);
	printf("%d\n",th);

	printf("%d",o+(tw*10)+(th*100));
}