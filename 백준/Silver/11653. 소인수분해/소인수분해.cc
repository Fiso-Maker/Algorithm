#include <iostream>
using namespace std;

int main()
{
	int a;

	cin >> a;

	while (1)
	{
		if (a == 1)
			break;
		for (int i = 2;; i++)
		{
			if (a % i == 0)
			{
				cout << i << endl;
				a /= i;
				break;
			}
		}
	}
}