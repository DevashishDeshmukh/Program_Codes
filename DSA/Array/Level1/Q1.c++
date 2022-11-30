/*Check if a key is present in every segment of size k in an array*/

#include <bits/stdc++.h>
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
    printf("Enter key x =");
    int x, k, b=-1;
    scanf("%d", &x);
    printf("Enter length k =");
    scanf("%d", &k);
    for (int i = 0; i < n;i+=k)
    {
        b=-1;
        for (int j=0; j < k && i<n ; j++)
        {
            if(arr[i+j]==x){
                 b=1;
            break;
            }
        }
        if(b==-1){
            printf("No");
        break;
        }
    }

    if(b==1)
    printf("Yes");

    return 0;
}