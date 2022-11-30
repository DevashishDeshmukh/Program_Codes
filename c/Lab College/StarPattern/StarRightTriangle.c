# include <stdio.h>
int main ()
{
    int n, i=1, r=1;
    printf ("Number of lines you want in pattern:");
    scanf("%d", &n);
    while(i <= n)
    {
        r = 1;
        while(r<=i)
        {
            printf("*");
            r++;
        }
        printf("\n");
        i++;
    } 
    system("pause");
    return 0;
}