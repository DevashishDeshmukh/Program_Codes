#include <iostream>


using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i=0; i< t ;i++ ){
        int n=0;
        cin >>n;
		int arr[n];
		int max=0, min=0;
        for(int j=0; j<n ; j++){
			cin >> arr[j];
			if(arr[j]>arr[max])
			max=j;

			if(arr[j]< arr[min])
			min = j;
		}
        min++;
        max++;
		int mid = n/2;
        printf("max = %d   min = %d    mid =%d\t", max, min, mid);
        int steps=0;
        if(max >= mid && min>=mid){
            if(max > min )
            steps = n-min+1;

            else {
                steps= n- max+1;
            }
        }


        else if(max <= mid && min <= mid){
            if(max > min )
            steps =max;

            else {
                steps=min;
            }

        }


        else {
            if(min > max )
              steps= max + n- min+1;

            else
             steps = min + n- max+1;  

        } 
        printf("%d\n", steps);
    }

    return 0;
}