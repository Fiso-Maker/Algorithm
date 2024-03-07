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

    string S;

    int i;

    cin >> S >> i;

    cout << S[i - 1] << "\n";

    return 0;
}