#include <stdio.h>
#include <string.h>

struct Books {
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
};

// // 예제 1
// void chapter5_01(void) {
//   // structure 구조체
  
//   struct Books book1;

//   strcpy(book1.title, "title123");
//   strcpy(book1.author, "author123");
//   strcpy(book1.subject, "subject123");
//   book1.book_id = 12345;

//   printf("book1 title = %s\n", book1.title);
//   printf("book1 author = %s\n", book1.author);
//   printf("book1 subject = %s\n", book1.subject);
//   printf("book1 book_id = %d\n", book1.book_id);
  
// }

// //예제2
// void printBook(struct Books book);

// void chapter5_01(void) {
//   // structure 구조체
  
//   struct Books book1;

//   strcpy(book1.title, "title123");
//   strcpy(book1.author, "author123");
//   strcpy(book1.subject, "subject123");
//   book1.book_id = 12345;

//   printBook(book1);
  
// }

// void printBook(struct Books book){
//   printf("book1 title = %s\n", book.title);
//   printf("book1 author = %s\n", book.author);
//   printf("book1 subject = %s\n", book.subject);
//   printf("book1 book_id = %d\n", book.book_id);
// }

//예제3 - structure와 pointer
void printBook(struct Books *book);

void chapter5_01(void) {
  // structure 구조체
  
  struct Books book1;

  strcpy(book1.title, "title123");
  strcpy(book1.author, "author123");
  strcpy(book1.subject, "subject123");
  book1.book_id = 12345;

  printBook(&book1);
  
}

void printBook(struct Books *book){
  printf("book1 title = %s\n", book -> title);
  printf("book1 author = %s\n", book -> author);
  printf("book1 subject = %s\n", (*book).subject);
  printf("book1 book_id = %d\n", (*book).book_id);
}

