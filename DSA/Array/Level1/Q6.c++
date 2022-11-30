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

    printf("Enter element to search for = ");
    int x;
    scanf("%d", &x);
    int a=-1;
    for ( int i = 0; i < n; i++)
    {
        if(arr[i]==x){
            a=1;
            printf("%d is found in array", x);
        break;
        }
    }
    if(a!=1)
    printf("%d is not found in the array", x);

    
    

    return 0;

}