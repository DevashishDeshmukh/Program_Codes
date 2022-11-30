#include<bits/stdc++.h>
using namespace std;

int main(){
     printf("Enter size of array=");
    int n;
    scanf("%d", &n);
    printf("Enter the array =");
    int arr[n];
    
    int max=0, min=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[max]<arr[i])
        max=i;

        if(arr[min]>arr[i])
        min=i;
    }
// printing first max element
    int least= arr[min];
    printf("Max elements= %d, ", arr[max]);
    arr[max]=least;

// Finding and printing second max element
      for (int i = 0; i < n; i++)
    {
        if(arr[max]<arr[i])
        max=i;
    }

    printf("%d, ", arr[max]);
    arr[max]=least;

// Finding and printing third max element

     for (int i = 0; i < n; i++)
    {
        if(arr[max]<arr[i])
        max=i;
    }

    printf("%d, ", arr[max]);
    arr[max]=least;

}