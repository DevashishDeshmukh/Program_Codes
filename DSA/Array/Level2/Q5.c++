/*  In this quicksort we used right-most
    element of array as pivot while partitioning 
*/

#include<bits/stdc++.h>
using namespace std;

void swap(int*a, int *b ){
    int temp = *a;
    *a=*b;
    *b=temp;
}


int partation(int arr[], int low , int high ){
    int pivot = arr[high];
    int i=low-1;

    for(int j= low; j< high; j++){

        if(arr[j]<pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    // placing th epivot at its correct position 
    swap(&arr[i+1], &arr[high]);

    return i+1;
} 



void quick_sort(int arr[], int low , int high){

     if(low< high){
         int pi = partation(arr,low , high);

         quick_sort(arr, low, pi-1);
         quick_sort(arr, pi+1, high);
     }
}

int main (){
    int n;
    cout << "Enter size of array = ";
    cin >> n;
    int arr[n];
    cout << "Enter the array = ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "Entered the array = ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<", ";
    }
     
    quick_sort(arr, 0, n-1);

    cout << "\nsorted array = ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<", ";
    }

    return 0;

}