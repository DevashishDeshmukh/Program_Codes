#include<bits/stdc++.h>
using namespace std;

int main(){
    printf("Enter size of array1=");
    int n, m;
    scanf("%d", &n);
    printf("Enter the array1 =");
    int arr1[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of array2=");
    scanf("%d", &m);
    printf("Enter the array2 =");
    int arr2[n];
    
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int inter=0;
    printf("Intersection = ");
    if(n>m)
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr1[j]==arr2[i]){
                inter++;
            printf("%d, ", arr2[i]);
            break;
            }
        }
    }

    else for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr2[j]==arr1[i]){
                inter++;
            printf("%d, ", arr1[i]);
            break;
            }
        }
    }

    int arru[n+m-inter], c=0;
    printf("\nUnion = ");
    int i=0, j=0;
    while(i<n && j< m){
        if(arr1[i]<arr2[j]){
            arru[c]=arr1[i];
            i++;
            c++;
        }

        else if(arr2[j]< arr1[i]){
            arru[c]=arr2[j];
            j++;
            c++;
        }

        else if(arr2[j]==arr1[i]){
            arru[c]=arr2[j];
            i++;
            j++;
            c++;
        }
    }

    if(i<n){
        for ( i; i < n; i++)
        {
            arru[c]=arr1[i];
            c++;
        }
    }

    else if(j<m){
        for ( j; j < m; j++)
        {
            arru[c]=arr2[j];
            c++;
        }
    }

    for ( i = 0; i < n+m-inter; i++)
    {
        printf("%d, ", arru[i]);
    }
    
    



    return 0;
}