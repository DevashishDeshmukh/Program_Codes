/*this is program is for  call by reference  
*/
#include <stdio.h>
void swap(int *x, int *y)
{
    int c;
    c=*x;   //means store value at address of x to c
    *x=*y;   // means store the value at address of y to adderss of x
    *y=c;    //   means store the value at c to  address of y 
    return ;
}
int main() {

    int a=23, b=18;
    swap(&a, &b);     // means here we are givimg the address of a amd b to function 
    printf("a= %d\tb=%d", a, b);
    
    return 0;
}