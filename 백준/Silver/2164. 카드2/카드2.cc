#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <queue> 

using namespace std;

int main(){
    int N;
    queue<int> q;
    cin >> N;

    for(int i=1;i<=N;i++)
    {
        q.push(i);
    }

    for(int i=1;i<=N;i++)
    {
        if(q.size() == 1)
        {
            cout << q.front();
        }
        q.pop();
        q.push(q.front());
        q.pop();

    }
}