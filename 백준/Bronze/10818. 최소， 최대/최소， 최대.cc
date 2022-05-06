#include <iostream>

using namespace std;

const int MAX = 1000000;
int main()
{
	int cnt;

	int arr[100005];
	cin >> cnt;

	int maxNum = -MAX, minNum = MAX;
	for(int i=0;i<cnt;i++)
	{
		int temp;
		cin >> temp;

		maxNum = max(maxNum,temp);
		minNum = min(minNum,temp);
		
	}
	cout<< minNum << " " << maxNum << endl;
	return 0;
}