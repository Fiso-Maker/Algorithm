#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int price = 0, cnt = 0, sum = 0;

    cin >> price >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        int goods_cnt = 0, goods_price = 0;

        cin >> goods_price >> goods_cnt;

        sum += goods_cnt * goods_price;
    }

    if (sum == price)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}