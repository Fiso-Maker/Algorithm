#include <iostream>
using namespace std;

int main()
{
    long long K, N, cnt, ans = 0;
    long long line[10000];
    long long st = 1, en = 0, mid;
    cin >> K >> N;

    for (long long i = 0; i < K; i++)
    {
        cin >> line[i];
        if (en < line[i])
            en = line[i];
    }

    while (st <= en)
    {
        cnt = 0;
        mid = (st + en) / 2;
        for (long long i = 0; i < K; i++)
        {
            cnt += line[i] / mid;
        }

        if (cnt >= N)
        {
            st = mid + 1;
            if (ans < mid)
                ans = mid;
        }
        else
        {
            en = mid - 1;
        }
    }
    cout << ans;
}
