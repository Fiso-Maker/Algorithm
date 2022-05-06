#include <iostream>
#include <string>
using namespace std;

int main()
{
	string num;
	bool val;

	while (1)
	{
		cin >> num;
		val = true;

		if (num == "0")
			break;

		for (int i = 0;i < num.length()/2;i++)
		{
			if (num[i] != num[num.length() - 1 - i])
			{
				cout << "no" << endl;
				val = false;
				break;
			}
		}
		if (val)
		{
			cout << "yes" << endl;
		}
	}
}