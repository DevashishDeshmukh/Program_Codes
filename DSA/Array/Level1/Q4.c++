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

    for (int i = 0; i < n-1; i++)
    {
        int min=i;  
        for (int j = i; j < n; j++)
        {
            if(arr[min]>arr[j])
            min = j;
        }
         swap(arr[i], arr[min]); 
    }


    printf("Sorted array = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}