#include<stdio.h>
int main ()
{
    int A, i, n, r, b=1, c= 0, z=0, one=0;
    printf("enter number :");
    scanf("%d", &n);
    printf("so binary equivalent of %d is", n);
    
    /*while(A>0)
    {
        r= A % 2;
        c = c+r*b;
        A =A/2;
        b = b*10;
        
    }*/
    for (; n > 0; n=n/2)
    {
         r= n % 2;
         if(r==0)
         z++;
         else
         one++;

    }
    

    
   // printf(" %d", c);
    printf("%d/n", sizeof(c));
    printf(" %d,  %d", z, one);

    return 0;
}