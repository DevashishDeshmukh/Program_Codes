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
        if(arr[i]<0)
        neg++;

        else if(arr[i]>0)
        pos++;
    }

    int a=0, b=0, c=0;
    while(pos>0 && neg>0){
        for (int i = c; i < n; i++)
        {
           if(arr[i]<0){
               a=i;
               neg--;
               break;
           }
        }

        for(int i = a; i>c; i--){
            swap(arr[i], arr[i-1]);
        }
        c++;

        for (int j = c; j < n; j++)
        {
           if(arr[j]>0){
               b=j;
               pos--;
               break;
           }
        }

        for(int i=b; i>c;i--){
            swap(arr[i], arr[i-1]);
        }
        c++;
       
    }

    printf("Rearranged array = ");
    for (int i = 0; i < n; i++)
    {
       printf("%d, ", arr[i]);
    }


    return 0;

}