#include<bits/stdc++.h>
using namespace std;

int main(){
    printf("Enter size of array=");
    int n;
    scanf("%d", &n);
    printf("Enter the array =");
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

     for (int i = 0; i < n; i++)
    {
        int j=i+1;
         for ( j = 0; j < n; j++){
             if(arr[i]==arr[j]&& i!=j)
             break;
         }

         if(j==n){
             printf("%d", arr[i]);
             break;
         }
    }


    return 0;

}