#include<bits/stdc++.h>
using namespace std;

int main(){
    printf("Enter size of array=");
    int n, max=0 , min=0;
    scanf("%d", &n);
    printf("Enter the array =");
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[max]<arr[i])
        max=i;
        if(arr[min]>arr[i])
        min=i;
    }

    int range = arr[max]- arr[min];
    float cor=((float)(arr[max]-arr[min]))/((float)(arr[max]+arr[min]));
    printf("Range = %d \n Coefficient of range = %.3f", range, cor);


    return 0;
}