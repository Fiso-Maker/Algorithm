#include <iostream>
#include <cstdlib>

using namespace std;

int GCD(int a, int b)
{
    if(b==0) return a;
    else return GCD(b,a%b);
}

int main(){
    int N1, N2;
    int gcd;

    cin >> N1 >> N2;

    if(N1 > N2)
    {
        gcd = GCD(N1,N2);        
    }
    else if(N2 > N1)
    {
        gcd = GCD(N2,N1);  
    }

    cout << gcd << endl << N1*N2/gcd;
}