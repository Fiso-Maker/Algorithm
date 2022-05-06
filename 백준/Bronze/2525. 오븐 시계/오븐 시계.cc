#include <iostream>
using namespace std;

int main()
{
	int hour, min;

	cin >> hour >> min;

	int time;
	 
	cin >> time;

	min += time;
	if (min >= 60)
	{
		hour += min / 60;
		min %= 60;
	}

	if (hour >= 24)
	{
		hour %= 24;
	}

	cout << hour << " " << min;
}