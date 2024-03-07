#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>
#include <string>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<pair<int, int>> v;

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int kg, cm;
        cin >> kg >> cm;

        v.push_back({kg, cm});
    }

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;

            if (v[i].first < v[j].first && v[i].second < v[j].second)
                cnt++;
        }

        cout << cnt + 1 << "\n";
    }

    return 0;
}