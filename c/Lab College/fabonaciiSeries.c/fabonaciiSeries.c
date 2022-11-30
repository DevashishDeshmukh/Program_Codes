# include <stdio.h>
int main()
{
    
    unsigned long long  int n, A=1, B=0, C;
    printf("enter number of terms you want in FABONACCI SERIES:");
    scanf("%llu", &n);
    printf("0, 1");
    while(n>2)
    {
        
        A = A + B;
        printf(", %llu", A);
        B = A-B;
        n--;

    }
     system("pause");
 return 0;
}