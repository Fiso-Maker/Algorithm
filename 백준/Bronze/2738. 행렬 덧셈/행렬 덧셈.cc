#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int main(void)
{

    int N, M;

    cin >> N >> M;

    vector<vector<int>> v1(N, vector<int>(M, 0));

    for (int a = 0; a < 2; a++)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                int num;
                cin >> num;
                v1[i][j] += num;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << v1[i][j] << ' ';
        }
        cout << endl;
    }
}