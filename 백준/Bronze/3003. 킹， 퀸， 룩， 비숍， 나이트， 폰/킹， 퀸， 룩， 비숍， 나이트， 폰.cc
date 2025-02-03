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

    int correct_check[6] = {1, 1, 2, 2, 2, 8};

    for (int i = 0; i < 6; i++)
    {
        int N;
        cin >> N;

        correct_check[i] = correct_check[i] - N;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << correct_check[i] << endl;
    }

    return 0;
}