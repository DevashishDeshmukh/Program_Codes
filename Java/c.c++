#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    long long int arr[n];
    for (int i = 0; i < n ; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (int i = 0; i < n-1; i++)
    {
        int min=i;
        for (int j=i; j < n; j++)
        {
            if(arr[min]>arr[j])
            min =j;
        }
        long long int temp= arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    

    for (int i=0; i< q ;i++ ){
         int  z=0, neg=0, r=0;
         long long int a;
        cin >> a;
        for (int j = 0; j < n ; j+=sqrt(n))
        {
             if(a<arr[j]){
                r=j-sqrt(n);
                break;
            }
        }

        for(int j=r; j<n ; j++ ){

            if(a==arr[j]){
            z=-1;
            break;
            }

            else if(a<arr[j]){
                neg=n-j;
                break;
            }
        }
        
        if(z==-1)
        printf("0\n");

        else if( neg%2==0)
        printf("POSITIVE\n");

        else printf("NEGATIVE\n");
    }

    return 0;
}