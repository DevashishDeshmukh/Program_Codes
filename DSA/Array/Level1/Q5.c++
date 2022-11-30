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

    printf("Enter value of k = ");
    int k;
    scanf("%d", &k);

    sort(arr, arr+n);

    printf("%dth samllest = %d     %dth largest = %d", k, arr[k], k, arr[n-k]);
    return 0;

}