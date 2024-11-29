#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;

    cin >> N;

    int long_cnt = N / 4;

    for (int i = 0; i < long_cnt; i++)
    {
        cout << "long ";
    }

    cout << "int";

    return 0;
}