#include<bits/stdc++.h>
using namespace std;

int main(){
     cout <<"Enter size of array 1=";
    int a, i;
    cin >> a;
    int b;
    cout <<"Enter size of array 2=";
    cin >> b;
    int c;
    cout <<"Enter size of array 3=";
    cin >> c;

    int arr1[a], arr2[b], arr3[c];
    cout <<"Enter the array 1=";
    for ( i = 0; i < a; i++)
    {
        cin >> arr1[i];
    }
    

    
    cout <<"Enter the array 2=";
    for ( i = 0; i < b; i++)
    {
        cin >> arr2[i];
    }

    cout <<"Enter the array 3=";
    for ( i = 0; i < c; i++)
    {
        cin >> arr3[i];
    }

    cout <<"Entered the array 1=";
    for ( i = 0; i < a; i++)
    {
        cout << arr1[i]<<", ";
    }

    cout <<"\nEntered the array 2=";
    for ( i = 0; i < b; i++)
    {
        cout << arr2[i]<<", ";
    }

    cout <<"\nEntered the array 3=";
    for ( i = 0; i < c; i++)
    {
        cout << arr3[i]<<", ";
    }



    cout <<"\nCommon elements are = ";
    for ( i = 0; i < a; i++)
    {
    
        for (int j = 0; j < b; j++)
        {
            if(arr1[i]==arr2[j]){
                for (int k = 0; k < c; k++)
                {
                    if(arr2[j]==arr3[k]){
                        printf("%d, ", arr3[k]);
                    }
                } 
            }
        }
        
    }


    return 0;

}
