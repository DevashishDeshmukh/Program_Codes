#include<bits/stdc++.h>
using namespace std;

int main(){
     printf("Enter size of array=");
    int n, m;
    scanf("%d", &n);
    printf("Enter the array =");
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int last=arr[n-1];
    for(int i =n-1; i>0; i--  ){
        swap(arr[i], arr[i-1]);
    }

    printf("Array after one cyclic rotation = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    
    
    return 0;

}