#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, cnt = 0;

    cin >> N;

    while (N != 0)
    {
        if (N % 125 == 0)
        {
            cnt += 3;
        }
        else if (N % 25 == 0)
        {
            cnt += 2;
        }
        else if (N % 5 == 0)
        {
            cnt++;
        }
        N--;
    }

    cout << cnt << "\n";

    return 0;
}