#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    float score;
    string str;
    cin >> str;

    if (str[0] == 'A')
        score = 4.0f;
    else if (str[0] == 'B')
        score = 3.0f;
    else if (str[0] == 'C')
        score = 2.0f;
    else if (str[0] == 'D')
        score = 1.0f;
    else if (str[0] == 'F')
        score = 0.0f;

    if (str[1] == '+')
        score += 0.3f;
    else if (str[1] == '-')
        score -= 0.3f;

    cout << fixed;
    cout.precision(1);
    cout << score << endl;
}