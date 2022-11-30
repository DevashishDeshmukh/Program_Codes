# include <stdio.h>
int main ()
{
    int n, l=1, r=1, s, d;
    printf ("value of N:");
    scanf("%d", &n);
    while(l <= n)
    {
        r = 1;
        while(r<=l)
        {
            printf("%d ", r);
            
            r++;
        }

        
        s = 1;
        d = 4*(n - l);
        while(s <= d)
        {
            printf(" ");
            s++;
        }

        r = l;
        while(r> 0)
        {
            printf("%d ", r);
            r--;
            
        }
        printf("\n");
        l++;
    } 
    return 0;
}