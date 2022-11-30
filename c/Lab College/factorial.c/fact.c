#include <stdio.h>
int main()
{
    int   a, i = 2;
    long long int fact=1;
    
    printf("enter number whose factorial you want :");
    scanf("%d", &a);
    printf("factorial of %d = 1 ",  a);

    while(i<=a){
       //  printf("* %d ", i);
        fact=fact*i;
       
        i++;
    }
   printf(" = %lld", fact);
   //system("pause");
    return 0;
}



