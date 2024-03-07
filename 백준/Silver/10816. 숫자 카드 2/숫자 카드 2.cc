#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    map<int, int> m;
    vector<int> v;

    cin >> N;

    while (N--)
    {
        int num;
        cin >> num;

        m[num]++;
    }

    cin >> M;

    while (M--)
    {
        int num;
        cin >> num;

        v.push_back(m[num]);
    }

    for (auto a : v)
        cout << a << "\n";

    return 0;
}