/*  Size of union ==> size of largest variables defined inside the union
*/

# include<stdio.h>


union book_info
{
   char name[100];
   char author[100];
   float price;
   int pages;
};

int main()
{
    union book_info book1;


    book1.pages=100;    // in case of union we can only access one variable at a time 
    

                        // for acessing any specific variable out of union  ====> NameOfUnion.NameOf Variable

    printf("Number of pages before change = %d\n", book1.pages ) ; 


    book1.pages=500;
    printf("Number of pages after change = %d\n", book1.pages ) ; 



    book1.pages=154;
    book1.price=145.56;     // if by chance we access two or more variable at same time then the last defied variable is considered only 
                            //  hence here on printing values of pages and price only value of price is deined 
                                
    printf("Pages= %d\n", book1.pages);
    printf("Price = %f\n", book1.price);



    return 0;
}