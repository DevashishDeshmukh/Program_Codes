#include <stdio.h>
int main()
{   double x, y= 1, z =1, w= 1;
    int i = 1;
    printf("enter value of 'x' :");
    scanf("%lf", &x);
    printf("value of term 1 is %lf\n", w);
    while(i <= 5)
    {
        z = z *(x/w);
        w++;
        i++;
        printf("value of term %d is %lf\n", i, z );
        y += z;
    }

   printf("value of y is %lf", y);
   return 0;
    }
