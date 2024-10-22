//c structures
#include <stdio.h> //scanf(),printf
#include <string.h> //strcpy()

// Define the structure named book
struct book {
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[13];
    float price;
}myBook;

int main()
 {
    
    //struct book myBook 
    strcpy (myBook.title,"Introduction to C Programming");
    strcpy (myBook.author,"John Smith");
    myBook.publication_year= 2022;
    strcpy (myBook.ISBN, "9780131103627");
    myBook.price=49.99;
    

    // Print the values of the fields
    printf("Title:%s \n", myBook.title);
    printf("Author:%s \n", myBook.author);
    printf("Publication Year:%d\n", myBook.publication_year);
    printf("ISBN:%s \n", myBook.ISBN);
    printf("Price:%f \n", myBook.price);

    return 0;
 }
   
    