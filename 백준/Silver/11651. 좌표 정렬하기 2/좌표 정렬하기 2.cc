#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>
#include <string>
#include <stack>

using namespace std;

bool compare(pair<int, int> x, pair<int, int> y)
{
    if (x.second != y.second)
        return x.second > y.second;
    else
        return x.first > y.first;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<pair<int, int>> v;

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        v.push_back({x, y});
    }

    sort(v.begin(), v.end(), compare);

    while (n--)
    {
        cout << v[n].first << " " << v[n].second << "\n";
    }

    return 0;
}