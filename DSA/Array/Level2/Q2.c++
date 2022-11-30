#include<bits/stdc++.h>
using namespace std;

int main(){
     printf("Enter size of array=");
    int n;
    scanf("%d", &n);
    printf("Enter the array =");
    int arr[n];

    for (int i = 0; i < n-1; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < n; i++)
    {   
        int a=-1;
        for (int j = 0; j < n-1; j++)
        {
            if(arr[j]==i){
                a=0;
                break;
            }
        }
        if(a==-1){
           printf("\nMissing element is %d", i);
           break;
        }
    }
    
    return 0;
}