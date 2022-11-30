#include <iostream>
#include <stack> 

using namespace std;

int main()
{
    int n, z=0, o=0, t=0, a;
    cin >> n ;
    int arr[n];
    int arrRet[n];
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i]<0){
            arrRet[z]=arr[i];
            z++;
            arr[i]=-1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=-1){
            arrRet[z]=arr[i];
            z++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arrRet[i] << ",  ";
    }

    return 0;
}

    
    