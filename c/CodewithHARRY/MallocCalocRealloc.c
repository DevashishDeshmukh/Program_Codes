#include <stdio.h>
#include <stdlib.h> // in this header file all dynamic memory allocation fuction are there

int main()
{
    /*
    // use of malloc
    int *ptr;
    ptr = (int *)malloc(3 * sizeof(int));   // this alots each element intially to garbage value


    for (int i = 0; i < 3; i++)
    {
       
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d", ptr[i]);
    }

    */




    // use of calloc
    // same as malloc just syntax is different 
    //    and 
    //initially all  elements are allocted to zero
    int *ptr;
    ptr = (int *)calloc(3,  sizeof(int));   // this alots each element intially to garbage value


    for (int i = 0; i < 3; i++)
    {
       
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d", ptr[i]);
    }
    printf("\n");
    
    



   // use of realloc
   // used to once again allot memory to previously declared thing
   // this mainly used to increase or decrease the size of previously alloted thing

    printf("After Reallotation \n");
   
    ptr = (int *)realloc(ptr, 4 * sizeof(int));   // this alots each element intially to garbage value


    for (int i = 0; i < 4; i++)
    {
       
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%d", ptr[i]);
    }



    //use of free
    // used to free all memory alloted to array 

    free(ptr);

    return 0;
}