/*  Size of structure ==> size of all variables defined inside the structure
*/
# include<stdio.h>

struct book_info
{
   char name[100];
   char author[100];
   float price;
   int pages;
};

int main()
{
    struct book_info book1= {"Programming book", "Devashish",150.28, 400};

    printf("%s\n", book1.name ) ;         // for acessing any specific variable out of structre ====> NameOfStructure.NameOf Variable

    printf("Number of pages before change = %d\n", book1.pages ) ; 


    book1.pages=500;
    printf("Number of pages after change = %d\n", book1.pages ) ; 


    return 0;
}