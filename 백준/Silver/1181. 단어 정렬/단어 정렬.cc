#include <iostream>
#include <string> //문자열
#include <vector> //vector(배열과 비슷하지만 크기 변경 가능)
#include <algorithm> //sort 함수 이용을 위해서 선언

using namespace std;

bool compare(const string &a, const string &b)
{
	if (a.size() == b.size())
		return a < b;
	return a.size() < b.size();
}
int main()
{
	int n;
	string str;
	vector<string> arr;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> str;
		arr.push_back(str); //vector 끝에 원소 삽입
	}

	sort(arr.begin(), arr.end(), compare); //시작 메모리주소, 끝 메모리주소, 정렬기준(이때 true는 스왑안하고, false는 스왑해줌)

	for (int i = 0; i < n; i++)
	{
		if (i == 0)
			cout << arr[0] << endl;
		else if (arr[i] != arr[i - 1])
			cout << arr[i] << endl;
	}
	return 0;
}