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

    int *array = new int[N]();

    for (int line = 0; line < M; line++)
    {
        int i, j, k;
        cin >> i >> j >> k;

        for (int space = i; space <= j; space++)
        {
            array[space - 1] = k;
        }
    }

    for (int space = 0; space < N; space++)
    {
        cout << array[space] << endl;
    }

    return 0;
}