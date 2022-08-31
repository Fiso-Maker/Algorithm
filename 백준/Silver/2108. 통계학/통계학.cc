#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main(void)
{
    int N;
    double sum = 0;
    int Max = 0, MaxValue = 0;
    bool isSecond = false;
    vector<int> vec;
    vector<int> vec2(8000, 0);

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        sum += (float)temp;
        vec.push_back(temp);
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i < N; i++)
    {
        int j = vec[i] <= 0 ? abs(vec[i]) : vec[i] + 4000;
        vec2[j]++;
        if (Max < vec2[j])
        {
            isSecond = false;
            Max = vec2[j];
            MaxValue = vec[i];
        }
        else if (Max == vec2[j] && !isSecond)
        {
            isSecond = true;
            MaxValue = vec[i];
        }
    }

    int num = round(sum / (float)N);
    num = num == -0 ? 0 : num;

    cout << num << endl;
    cout << vec[N / 2] << endl;
    cout << MaxValue << endl;
    cout << (vec.back() - vec.front()) << endl;
}