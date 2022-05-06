#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue<int> q;
	int K, N;
	int num[10001];

	cin >> N >> K;

	for (int i = 1;i <= N;i++)
	{
		q.push(i);
	} 
	cout << "<";
	while (!q.empty())
	{
		for (int i = 0;i < K -1 ;i++)
		{
			int f = q.front();
			q.pop();
			q.push(f);
		}
		cout << q.front();
		q.pop();
		if (!q.empty())
			cout << ", ";
	}
	cout << ">";
}