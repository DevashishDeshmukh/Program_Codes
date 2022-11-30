# include <stdio.h>

   
int term(int i);
int main()
{
    int n;   
    printf("enter an integer:  ");
    scanf("%d", &n);

    for (int i = 1; i <=n; i++)
    {
       printf("%d, ", term(i));
    }
    
    return 0;
}

int term(int i)
{
    if (i==1)
    return 0;
    if (i==2)
    return 1;
   else
   {
       return (term(i-1) + term( i-2)) ;
   }
   
}