#include <iostream>
using namespace std;

int main()
{
 
    int t;
    cin >> t;

    for (int i=0; i< t ;i++ ){
        int n, a, c=0;
        cin >> n;
        int arr[7]={1, 2, 3, 4, 5, 6, 7};
        for (int i = 1; i <= n ; i++)
        { 
           cin >> a;
           if(a>=1 && a<=7 ){
              c++;
               
               if(c==7){
                   printf("%d\n", i);
                   break;
               }

           }
        }
    }

    return 0;
}