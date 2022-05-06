#include <iostream>
using namespace std;

int main()
{
	int t;
	int h,w,n;
	int a,b;
	int arr[100][100];
	cin >> t;
	
	for(int i=0;i<t;i++)
	{
		cin >> h >> w >> n ;
		a = n / h + 1;
		b = n % h;
		if(b==0)
		{
			b=h;
			a--;
		}
		if(h==1)
		{
			a=n;
		}
		cout << b;
		cout.width(2);
		cout.fill('0');
		cout << a << endl;
	}
}