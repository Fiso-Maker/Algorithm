#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<pair<int, string>> v;

    for (int i = 0; i < N; i++)
    {
        int age;
        string name;

        cin >> age >> name;
        v.push_back({age, name});
    }

    stable_sort(v.begin(), v.end(), compare);

    for (auto a : v)
        cout << a.first << " " << a.second << "\n";

    return 0;
}

bool compare(pair<int, string> a, pair<int, string> b)
{
    return a.first < b.first;
}