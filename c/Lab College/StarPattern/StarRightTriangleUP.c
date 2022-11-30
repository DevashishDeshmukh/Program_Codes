# include <stdio.h>
int main ()
{
    int n, i, r=1;
        printf ("Number of lines you want in pattern:");
    scanf("%d", &n);
    i = n;
    while(i >0)
    {
        r = 1;
        while(r<=i)
        {
            printf("*");
            r++;
        }
        printf("\n");
        i--;
    } 
     system("pause");
    return 0;
}