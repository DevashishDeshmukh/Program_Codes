/*  
     program to print starting and ending
     indexes of all subarrays with 0 sum.
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
     printf("Enter size of array=");
    int n;
    scanf("%d", &n);
    printf("Enter the array =");
    int arr[n], pos=0, neg=0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum=0;

    for (int i = 0; i < n; i++)
    {
        for(int j=1; j<=n-i; j++){
            sum=0;
            for(int k=i; k<i+j; k++){
                sum+=arr[k];
            }
            if(sum==0){
                printf("starting=%d    ending=%d\n", i, i+j-1);
            }
        }
    }

    return 0;


}
    