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
    }
    int a=0;
    for (int i = 0; i < n-1; i++)
    {
        int neg=-1;
        for (int j = i; j < n; j++)
        {
            if(arr[j]<0){
            neg=j;
            break;}
        }
        if(neg!=-1){
            a++;
            while(neg>= a){
                swap(arr[neg], arr[neg-1]);
                neg--;
            }
        }
    }

    printf("Sorted array = ");

    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    

    return 0;

}    

