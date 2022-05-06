#include <iostream>

using namespace std;
int Fac(int a)
{
	if (a == 0) return 1;
	else if (a == 1) return 1;
	else {
		return Fac(a - 1) * a;
	}
}

int main()
{
	int a;

	cin >> a;

	cout << Fac(a);
}