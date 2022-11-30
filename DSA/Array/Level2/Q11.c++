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
        sum=0;
        for(int j=i; j<n; j++){
            sum+=arr[j];
            if(sum==0){
                printf("True");
                goto a;
                }
            }
    }

    if(sum!=0)
    printf("False");
    a:

    return 0;


}
    