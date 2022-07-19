#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int main(void)
{
    int T;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        vector<char> vec;
        string str;
        bool yesOrNo = true;
        cin >> str;

        for (int j = 0; j < str.size(); j++)
        {
            if (str[j] == '(')
            {
                vec.push_back(str[j]);
            }
            else if (str[j] == ')' && !vec.empty())
            {
                vec.pop_back();
            }
            else if (str[j] == ')' && vec.empty())
            {
                yesOrNo = false;
                break;
            }
        }

        if (yesOrNo && vec.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}