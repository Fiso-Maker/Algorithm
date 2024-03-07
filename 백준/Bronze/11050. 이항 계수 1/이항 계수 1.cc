#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>

using namespace std;

int factorial(int num)
{
    if (num == 1 || num == 0)
        return 1;
    return factorial(num - 1) * num;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;

    cin >> N >> K;

    cout << factorial(N) / (factorial(N - K) * factorial(K)) << "\n";

    return 0;
}