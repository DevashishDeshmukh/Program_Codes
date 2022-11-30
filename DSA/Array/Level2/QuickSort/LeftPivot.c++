/*  In this quicksort we used left-most
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
    int pivot = arr[low];
    int i= low;

    for (int j = low; j <=high; j++)
    {
        if(arr[j]<pivot){
            i++;
            swap(&arr[j], &arr[i]);
        }
    }

    // palcing pivot at its correct position
    swap(&arr[i], &arr[low]);
    return i;  
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



    

}