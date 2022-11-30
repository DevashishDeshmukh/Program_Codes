#include <bits/stdc++.h>


using namespace std;

int main()
{
    int n, max, min, k;
    cin >> n ;
    cout << "Enter value of 'K' = ";
    cin >> k;
    cout << "\n";
    int arr[n];

    for (int i=0; i< n ;i++ ){
        cin >> arr[i];
    }

    sort(arr, arr+n);


    printf("%dth Max= %d   %dth Min = %d", k, arr[n-k], k, arr[k-1]);
    return 0;

}   
