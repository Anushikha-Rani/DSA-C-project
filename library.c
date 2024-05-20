// Online C compiler to run C program online
#include <stdio.h>

int main()
{
  printf("--------Main Menu----------\n\n");

  printf("1. Add Books\n");
  printf("2. Display Books Information\n");
  printf("3. Search Books(Book Status)");
  printf("4. Exit\n\n");

  int a1;
  printf("Enter: ");
  scanf("%d", &a1);
  printf("\n\n");

  if (a1 == 1)
  {
    printf("You can add book informaton\n\n");
    printf("Choose the category: \n\n");
    printf("1.Computer\n");
    printf("2.Electronics\n");
    printf("3. Mechanical\n\n");

    int a2;
    printf("Choose a category: ");
    scanf("%d", &a2);

    printf("\n\n");

    if (a2 == 1)
    {
      printf("You have choosed computer category\n\n");
      printf("1. Introduction to C\n");
      printf("2. Introduction to Python\n");
      printf("3. Introduction to R Programming\n\n");

      int a3;
      printf("Choose a book: ");
      scanf("%d", &a3);

      printf("\n\n");

      if (a3 == 1)
      {
        printf("You have choosed Introduction to C book\n\n");

        char book_namea[50];
        char author_namea[50];
        int pagea;
        int pricea;

        printf("Book Name: ");
        scanf("%s", &book_namea);
        printf("\n\n");

        printf("Author Name: ");
        scanf("%s", &author_namea);
        printf("\n\n");

        printf("Pages: ");
        scanf("%d", &pagea);
        printf("\n\n");

        printf("Price: ");
        scanf("%d", &pricea);
        printf("\n\n");
      }
      else if (a3 == 2)
      {
        printf("You have choosed Introduction to Python book\n\n");

        char book_nameb[50];
        char author_nameb[50];
        int pageb;
        int priceb;

        printf("Book Name: ");
        scanf("%s", &book_nameb);
        printf("\n\n");

        printf("Author Name: ");
        scanf("%s", &author_nameb);
        printf("\n\n");

        printf("Pages: ");
        scanf("%d", &pageb);
        printf("\n\n");

        printf("Price: ");
        scanf("%d", &priceb);
        printf("\n\n");
      }
      else if (a3 == 3)
      {
        printf("You have choosed Introduction to R Programming \n\n");

        char book_namec[50];
        char author_namec[50];
        int pagec;
        int pricec;

        printf("Book Name: ");
        scanf("%s", &book_namec);
        printf("\n\n");

        printf("Author Name: ");
        scanf("%s", &author_namec);
        printf("\n\n");

        printf("Pages: ");
        scanf("%d", &pagec);
        printf("\n\n");

        printf("Price: ");
        scanf("%d", &pricec);
        printf("\n\n");
      }
    }
    else if (a2 == 2)
    {
      printf("You have choosed Electronics category\n\n");
      printf("1. Practical Electronics for Inventors\n");
      printf("2. The art of electronics\n");
      printf("3. Fundamental of digital circuits\n\n");

      int a4;
      printf("Choose a book: ");
      scanf("%d", &a4);

      printf("\n\n");

      if (a4 == 1)
      {
        printf("You have choosed Practical Electronics for Inventors book\n\n");

        char book_named[50];
        char author_named[50];
        int paged;
        int priced;

        printf("Book Name: ");
        scanf("%s", &book_named);
        printf("\n\n");

        printf("Author Name: ");
        scanf("%s", &author_named);
        printf("\n\n");

        printf("Pages: ");
        scanf("%d", &paged);
        printf("\n\n");

        printf("Price: ");
        scanf("%d", &priced);
        printf("\n\n");
      }
      else if (a4 == 2)
      {
        printf("You have choosed The art of electronics book\n\n");
        char book_namee[50];
        char author_namee[50];
        int pagee;
        int pricee;

        printf("Book Name: ");
        scanf("%s", &book_namee);
        printf("\n\n");

        printf("Author Name: ");
        scanf("%s", &author_namee);
        printf("\n\n");

        printf("Pages: ");
        scanf("%d", &pagee);
        printf("\n\n");

        printf("Price: ");
        scanf("%d", &pricee);
        printf("\n\n");
      }
      else if (a4 == 3)
      {
        printf("You have choosed Fundamentals of digital circuits book\n\n");

        char book_namef[50];
        char author_namef[50];
        int pagef;
        int pricef;

        printf("Book Name: ");
        scanf("%s", &book_namef);
        printf("\n\n");

        printf("Author Name: ");
        scanf("%s", &author_namef);
        printf("\n\n");

        printf("Pages: ");
        scanf("%d", &pagef);
        printf("\n\n");

        printf("Price: ");
        scanf("%d", &pricef);
        printf("\n\n");
      }
    }
    else if (a2 == 3)
    {
      printf("You have choosed Mechanical category\n\n");

      printf("1.Introduction to autocad\n");
      printf("2. Fundamentals of Thermodynamics\n");
      printf("3. Mechanical Engineering:  Conventional  and objective type\n\n");

      int a5;
      printf("Choose a book: ");
      scanf("%d", &a5);

      printf("\n\n");

      if (a5 == 1)
      {
        printf("You have choosed Introduction to autocad book\n");

        char book_nameg[50];
        char author_nameg[50];
        int pageg;
        int priceg;

        printf("Book Name: ");
        scanf("%s", &book_nameg);
        printf("\n\n");

        printf("Author Name: ");
        scanf("%s", &author_nameg);
        printf("\n\n");

        printf("Pages: ");
        scanf("%d", &pageg);
        printf("\n\n");

        printf("Price: ");
        scanf("%d", &priceg);
        printf("\n\n");
      }
      else
        (a5 == 2);
      {
        printf("You have choosed Fundamentals of Thermodynamics book\n");

        char book_nameh[50];
        char author_nameh[50];
        int pageh;
        int priceh;

        printf("Book Name: ");
        scanf("%s", &book_nameh);
        printf("\n\n");

        printf("Author Name: ");
        scanf("%s", &author_nameh);
        printf("\n\n");

        printf("Pages: ");
        scanf("%d", &pageh);
        printf("\n\n");

        printf("Price: ");
        scanf("%d", &priceh);
        printf("\n\n");
      }
      else if (a5 == 3)
      {
        printf("You have choosed Mechanical Engineering:  Conventional  and objective type \n");

        char book_namei[50];
        char author_namei[50];
        int pagei;
        int pricei;

        printf("Book Name: ");
        scanf("%s", &book_namei);
        printf("\n\n");

        printf("Author Name: ");
        scanf("%s", &author_namei);
        printf("\n\n");

        printf("Pages: ");
        scanf("%d", &pagei);
        printf("\n\n");

        printf("Price: ");
        scanf("%d", &pricei);
        printf("\n\n");
      }
    }
  }
  else if (a1 == 3)
  {
    printf("You can searvh the book (Book Status)\n\n");
    printf("Press the code: 123 for Introduction to C\n");
    printf("Press the code: 456 for Introduction to python\n");
    printf("Press the code: 789 for Introduction to R programming\n");
    printf("Press the code: 157 for practical electronics\n");
    printf("Press the code: 359 for art electronic\n");
    printf("Press the code: 153 for Introduction to autocad\n");
    printf("Press the code: 104 for fundamentals of digital circuits\n");
  }
