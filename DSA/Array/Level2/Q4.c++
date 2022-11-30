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


    printf("Repeated elements in array = ");
    for (int i = 0; i < n; i++)
    {
        int a= arr[i];
        for (int j= i+1; j < n; j++)
        {
            if(a==arr[j]){
            printf("%d, ", a);
            break;
            }
        }  
    }
    
    
    return 0;
}