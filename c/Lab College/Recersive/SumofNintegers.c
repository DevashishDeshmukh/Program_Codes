# include <stdio.h>
int sum(int);
int main()
{
    int n;   
    printf("enter an integer:  ");
    scanf("%d", &n);
    printf("sum of first %d integers is %d ", n, sum(n));
    return 0;
}

int sum(int n)
{
   if(n<=1)
   {
       return 1;
   }
   else
   {
       return (n + sum(n-1)) ;
   }
}
