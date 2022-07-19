#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int main(void)
{
    int N, findN;
    int cnt = 0;
    vector<int> vec;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        vec.push_back(num);
    }

    cin >> findN;

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == findN)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}