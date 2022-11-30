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
    int sum, c=0;
    printf("Enter sum= ");
    scanf("%d", &sum);

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]+arr[j]==sum)
            c++;
        } 
    }

    printf("Count =%d", c);
    
    

    return 0;
}