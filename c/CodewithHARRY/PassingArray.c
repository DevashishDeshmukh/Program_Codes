#include <stdio.h>
void sum(int ARRAY[])            // passing array to function as parameter 
{
    int total=0;
    for (int i = 0; i < 4; i++)
    {
        total = total + ARRAY[i];
    }
    printf("%d\n", total);
    return ;
}

void SUM(int *ptr){
    int TOTAL=0;
    for (int  j = 0; j < 4; j++)
    {
        TOTAL = TOTAL + *(ptr + j);
    }
    printf("%d", TOTAL);
    return ;
}
int main() {
    

    int array[]={2, 3, 4,15};

    sum(array);    // passing array to fuction as parameter
    

    SUM(&array[0]);   // passing the array to function as reference



    return 0;

    
}