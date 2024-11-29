#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A,B,C;

    cin >> A >> B >> C;

    cout << A + B - C << endl;

    string sumAandB = to_string(A) + to_string(B);

    cout << stoi(sumAandB) - C;


    return 0;
}