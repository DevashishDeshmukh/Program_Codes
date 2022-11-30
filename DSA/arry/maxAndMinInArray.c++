#include <iostream>


using namespace std;

int main()
{
    int n, max, min;
    cin >> n >> max;
    min= max;
    int arr[n];

    for (int i=1; i< n ;i++ ){
        cin >> arr[i];
        if(min> arr[i])
        min=arr[i];

        if(max< arr[i])
        max= arr[i];
    }

    printf("Max= %d   Min = %d", max, min);
    return 0;

}   
