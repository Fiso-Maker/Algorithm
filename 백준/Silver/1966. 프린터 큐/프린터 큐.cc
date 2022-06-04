#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int case_count;
    int cnt = 0;
    int importance;

    cin >> case_count;

    int N, M;
    for (int i = 0; i < case_count; i++)
    {
        cnt = 0;
        queue<pair<int, int>> q;
        priority_queue<int> pq;

        cin >> N >> M;
        for (int j = 0; j < N; j++)
        {
            cin >> importance;
            q.push({j, importance});
            pq.push(importance);
        }
        while (!q.empty())
        {
            int index = q.front().first;
            int value = q.front().second;

            q.pop();

            if (pq.top() == value)
            {
                pq.pop();
                cnt++;
                if (M == index)
                {
                    cout << cnt << endl;
                    break;
                }
            }
            else
            {
                q.push({index, value});
            }
        }
    }
}
