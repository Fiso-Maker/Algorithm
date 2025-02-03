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

    int N, M;

    cin >> N >> M;

    int *array = new int[N];

    for (int i = 0; i < N; i++)
    {
        array[i] = i + 1;
    }

    for (int space = 0; space < M; space++)
    {
        int i, j, temp;

        cin >> i >> j;

        if (i == j)
            continue;

        for (int n = 0; n < (j - i) / 2 + 1; n++)
        {
            temp = array[n + i - 1];
            array[n + i - 1] = array[j - n - 1];
            array[j - n - 1] = temp;
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}