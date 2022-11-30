#include <iostream>

using namespace std;

int main()
{
    int n, z=0, o=0, t=0, a;
    cin >> n ;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if(a==1)
        o++;
        else if(a==2)
            t++;
            else z++;
    }

    int arr[n];

    for (int i = 0; i < n; i++)
    {
       if(i<z)
       arr[i]=0;
       else if (i<o+z)
       arr[i]=1;
       else arr[i]=2;

       cout << arr[i]<< ", ";
       
    }

    return 0;
    
    
}