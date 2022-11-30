#include<bits/stdc++.h>
using namespace std;

int main(){
     printf("Enter size of array=");
    int n,o=0, one =0, two=0 ;
    scanf("%d", &n);
    printf("Enter the array =");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]==0)
        o++;
        else if (arr[i]==1)
                one++;
                else two++;
    }
    printf("Sorted array = ");

    for (int i = 0; i < n; i++)
    {
        if(i<o)
        arr[i]=0;

        else if (i<o+one)
        arr[i]=1;
        else arr[i]=2;
        printf("%d, ", arr[i]);

    }
    
    return 0;


}