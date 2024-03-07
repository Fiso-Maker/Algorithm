#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>
#include <string>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (1)
    {
        string str;
        bool flag = true;
        getline(cin, str);

        if (str == ".")
            break;

        stack<int> stack;

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '[')
                stack.push(1);
            else if (str[i] == '{')
                stack.push(2);
            else if (str[i] == '(')
                stack.push(3);
            else if (str[i] == ']')
            {
                if (!stack.empty() && stack.top() == 1)
                {
                    stack.pop();
                    continue;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            else if (str[i] == '}')
            {
                if (!stack.empty() && stack.top() == 2)
                {
                    stack.pop();
                    continue;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            else if (str[i] == ')')
            {
                if (!stack.empty() && stack.top() == 3)
                {
                    stack.pop();
                    continue;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }

        if (stack.empty() && flag)
            cout << "yes"
                 << "\n";
        else
            cout << "no"
                 << "\n";
    }

    return 0;
}