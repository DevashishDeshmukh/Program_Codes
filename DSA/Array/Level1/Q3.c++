#include <bits/stdc++.h>
using namespace std;

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
    int middle= n/2;
    for (int i = 0; i < middle; i++)
    {
        swap(arr[i], arr[n-1-i]);
    }
     
     printf("Reversed array = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
