#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int N, M;
    int temp;
    int MAX = 0;
    vector<int> arr;

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }

    for (int i = 0; i < N - 2; i++)
    {
        for (int j = i + 1; j < N - 1; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                int sum = arr[i] + arr[j] + arr[k];
                if (sum == M)
                {
                    cout << sum << endl;
                    return 0;
                }
                else if (MAX < sum && sum < M)
                {
                    MAX = sum;
                }
            }
        }
    }
    cout << MAX;
}