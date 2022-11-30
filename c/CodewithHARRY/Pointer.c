//***************************************************************************************************
        
//                     POINTERS
//  &  --->  FOR STORRING OR PRINTING ADDRESSS STORED IN POINTER
//  *  --->  FOR PRINTING VALUE STORED IN POINTER     
//  %p --->  to print the address stored in pointer 
//****************************************************************************************************
#include <stdio.h>
int main()
{

    int a =8;
    int* ptr = &a; // here & helps to store address of a 
 
    printf("address of pointer 'ptr' is %x\n", &ptr );
    printf("address stored in pointer 'ptr' is %p\n", ptr );// As 'ptr' stores the address of 'a'
 
    printf("address of 'a' is %x\n", &a );
 
    printf("value in 'a' is %d\n", *ptr );
    printf("value in 'a' is %d\n", a);
 
    return 0;

}

