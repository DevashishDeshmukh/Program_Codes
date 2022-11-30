#include <stdio.h>
#include <math.h>

int main()
{
    int b, r=1, m=1, d = 0;
    printf("enter binary number ");
    scanf("%d", &b);
    while(b)
    {
        r = b%10;
        d = d+(r*m);
        m = m*2;
        b/=10;
    }
   printf("so decimal integer is %d", d);
    return 0;
}
