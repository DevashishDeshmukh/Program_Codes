#include <stdio.h>
int main()
{
    int  Total=0, k, i = 0, d;
    float Avg; 
    do{
        printf("enter number:");
        scanf("%d", &k);
        Total=Total+k;
        i++;

    }
    while(k != 0);
    printf("total = %d", Total);
    d = i - 1;
    Avg=Total/d;
    printf("\n\n so avg of %d numbers provided by you =  %f", d, Avg);

    return 0;
}
