#include <stdio.h>


/*int factorial(int n )
{
    int   i =1, fact= 1;
    while(i<=n){
         
        fact=fact*i;
       
        i++;
    }

    return fact ;


}*/
int main()
/*{   double x, y= 1, z =1, w= 1;
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
    }*/






{
    int n, x;
    printf("enter value of 'n' :");
    scanf("%d", &n);
    x= factorial(n);
    printf(" factorial of '%d' ---> %d", n, x);
    return 0;
}

int factorial(int n )
{
    int   i =1, fact= 1;
    while(i<=n){
         
        fact=fact*i;
       
        i++;
    }

    return fact ;
}