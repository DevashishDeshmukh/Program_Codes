#include<bits/stdc++.h>
int main()
{
    printf("Enter size of array=");
    int n;
    scanf("%d", &n);
    printf("Enter the array =");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max=arr[0], min=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max)
        max=arr[i];

        if(arr[i]< min)
        min=arr[i];
    }

    printf("max = %d   min = %d", max , min);
    
    
}