#include <stdio.h>

int main()
{
	int a,b;
	int a1[3];
	int b1[3];

	scanf("%d %d",&a,&b);

	a1[0]=a/100;
	a1[1]=a%100/10;
	a1[2]=a%100%10;

	b1[0]=b/100;
	b1[1]=b%100/10;
	b1[2]=b%100%10;

	a=a1[0]+a1[1]*10+a1[2]*100;
	b=b1[0]+b1[1]*10+b1[2]*100;
	if(a>b)
		printf("%d",a);
	else
		printf("%d",b);
}