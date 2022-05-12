#include <iostream>
#include <cstdlib>
using namespace std;

int compare(const void *a,const void *b)
{
    const int* x = (int*)a;
    const int* y = (int*)b;
    if(*x > *y)
        return 1;
    else if(*x < *y)
        return -1;

    return 0;
}

int search(int* arr,int N, int t)
{
    int i,j,left = 0,right = N-1;
    int middle = 0;
    if(N == 0) return 0;
    while(left <= right)
    {
        middle = (right + left) / 2;
        if(arr[middle] < t){
            left = middle + 1;
        }
        else if(arr[middle] > t)
        {
            right = middle - 1;
        }
        else return 1;
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    

    cin >> N;

    int *arr = new int[N];

    for(int i=0;i<N;i++)
    {
        cin >> arr[i];
    }
    qsort(arr,N,sizeof(int),compare);
    
    int M;

    cin >> M;

    int target;

    for(int i=0;i<M;i++)
    {
        cin >> target;
        cout << search(arr,N,target) << "\n";
    }

}
