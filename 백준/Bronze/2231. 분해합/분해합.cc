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

    int n, i = 1;

    cin >> n;

    while (i < n)
    {
        int temp = i;
        int sum = i;

        while (temp / 10 != 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        sum += temp;

        if (sum == n)
            break;

        i++;
    }

    if (i < n)
        cout << i << "\n";
    else
        cout << 0 << "\n";

    return 0;
}