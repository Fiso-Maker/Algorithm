#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, min_time = 1001;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int A, B;
        int min;

        cin >> A >> B;

        if (A > B)
            continue;
        else if (A == B)
            min = A;
        else
            min = B;

        if (min_time > min)
            min_time = min;
    }

    if (min_time == 1001)
        min_time = -1;

    cout << min_time;

    return 0;
}