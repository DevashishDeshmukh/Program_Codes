# include <stdio.h>
int main ()
{
    int n, i=1, r=1, s, b;
    printf ("Number of lines you want in pattern:");
    scanf("%d", &n);
    
    while(i <= n)
    {
        s = n -i;
        while(s>0)
        {
            printf(" ");
            s--;
            
        }
        r = 1;
        while(r<=i)
        {
            printf("* ");
            r++;
        }
        printf("\n");
        i++;
    } 
    return 0;
}


