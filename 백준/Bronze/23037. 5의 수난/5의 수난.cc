#include <iostream>
#include <math.h>
using namespace std;
int main(void)
{
    int num;
    int sum = 0;

    cin >> num;

    while (num >= 10)
    {
        sum += pow(num % 10, 5);
        num /= 10;
    }
    sum += pow(num, 5);
    cout << sum << endl;
}