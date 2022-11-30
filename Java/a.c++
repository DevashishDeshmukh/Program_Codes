#include <iostream>
using namespace std;

int main()
{
 
    int t;
    cin >> t;

    for (int i=0; i< t ;i++ ){
        int x, a, y, b, z, c;
        cin >> x >> a >> y >> b >> z >> c;
        if((a>=x && b >= y ) && (c <= z))
        printf("YES\n");

        else
        printf("NO\n");
    }

    return 0;
}