#include <stdio.h>

int main()
{
  int n;
  int m;
  int a;
  int Exit;
  int Exi;

  printf("Welcome to Modern Periodic Table\n\n");

  printf(">Enter 1 to know about an element\n\n ");
  printf(">Enter 2 to close the periodic table\n\n");

  printf("ENTER\n");
  scanf("%d", &n);

  if (n == 1)
  {
    printf(">Press 3 to search the element by atmic number\n\n");

    printf("ENTER\n");
    scanf("%d", &m);

    if (m == 3)
    {
      printf("Enter the atmoic number of the element to be searched: ");
      scanf("%d", &a);

      if (a == 1)
      {
        printf("Name: Hydrogen\n");
        printf("Symbol: H\n");
        printf("Atomic Number:1\n");
        printf("Electronic Configuration:1s^1\n");
        printf("Discovered by: Henry Cavendish\n");
        printf("Charge : +1\n");
      }
    }
  }
  else if (n == 2)
  {
    printf("Do you want to exit?(Yes/No)\n");
    printf(">Press 6 for Yes\n");
    printf(">Press 7 for No\n");

    printf("ENTER\n");
    scanf("%d", &Exit);

    if (Exit == 6)
    {
      printf("Are you sure,you want to the periodic table? (Yes/No)\n");
      printf(">Press 4 for Yes\n");
      printf(">Press 5 for No\n");

      printf("ENTER\n");
      scanf("%d", &Exit);

      if (Exi == 4)
      {
        printf("The periodic table has closed");
      }
      else if (Exi == 5)
      {
        printf("Periodic table has not closed and you can continue to learn more about elements\n\n");
        printf("Enter the atmoic number of the element to be searched : \n\n");
        scanf("%d", &a);

        if (a == 1)
        {
          printf("Name: Hydrogen\n");
          printf("Symbol: H\n");
          printf("Atomic Number:1\n");
          printf("Electronic Configuration:1s^1\n");
          printf("Discovered by: Henry Cavendish\n");
          printf("Charge : +1\n");
        }
      }
    }
    else if (Exit == 7)
    {
      printf("Periodic table has not closed and you can continue to learn more elements\n\n");
      printf("Enter the atomic number of the element to be searched : ");
      scanf("%d", &a);

      if (a == 1)
      {
        printf("Name: Hydrogen\n");
        printf("Symbol: H\n");
        printf("Atomic Number:1\n");
        printf("Electronic Configuration:1s^1\n");
        printf("Discovered by: Henry Cavendish\n");
        printf("Charge : +1\n");
      }
    }
  }
}
  PHONE BOOK :

// Online C compiler to run phone book

#include <stdio.h>

    int
    main()
{
  char n[50];
  int a;
  int p;
  int d;
  char add[50];

  char na[50];
  int ag;
  int ph;
  int da;
  char addr[50];

  printf("WELCOME TO PHONR BOOK\n\n");

  printf("MENU\n");

  printf("Press 1 to add the contact\n\n");

  int x;
  printf("Enter\n");
  scanf("%d", &x);

  if (x == 1)
  {
    int y;
    printf("Enter the number of contact to be added : \n");
    scanf("%d", &y);

    if (y == 1)
    {
      printf("-------------------\n");
      printf("Name : ");
      scanf("%s", &n);
      printf("Age : ");
      scanf("%d", &a);
      printf("Phone number: ");
      scanf("%d", &p);
      printf("Date of Birth : ");
      scanf("%d", &d);
      printf("Address: ");
      scanf("%s", &add);
      printf("---------------------\n");

      printf("-------------------\n");
      printf("Name : ");
      scanf("%s", &na);
      printf("Age : ");
      scanf("%d", &ag);
      printf("Phone number: ");
      scanf("%d", &ph);
      printf("Date of Birth : ");
      scanf("%d", &da);
      printf("Address: ");
      scanf("%s", &addr);
      printf("---------------------\n");
    }
    printf("Press 2 to see the entered contact\n");
    printf("Press 3 to exit the phonebook\n");

    int z;
    printf("Enter\n");
    scanf("%d", &z);

    if (z == 2)
    {
      int num;
      printf("Enter the number of contact to be viewed: ");
      scanf("%d", &num);

      if (num == 1)
      {
        printf("-------------------\n");
        printf("Name : ");
        printf("%s", n);
        printf("Age : ");
        printf("%d", a);
        printf("Phone number: ");
        printf("%d", p);
        printf("Date of Birth : ");
        printf("%d", d);
        printf("Address: ");
        printf("%s", add);
        printf("---------------------\n");
      }
      else if (num == 2)
      {
        printf("-------------------\n");
        printf("Name : ");
        printf("%s", n);
        printf("Age : ");
        printf("%d", a);
        printf("Phone number: ");
        printf("%d", p);
        printf("Date of Birth : ");
        printf("%d", d);
        printf("Address: ");
        printf("%s", add);
        printf("---------------------\n");

        printf("-------------------\n");
        printf("Name : ");
        printf("%s", na);
        printf("Age : ");
        printf("%d", ag);
        printf("Phone number: ");
        printf("%d", ph);
        printf("Date of Birth : ");
        printf("%d", da);
        printf("Address: ");
        printf("%s", addr);
        printf("---------------------\n");
      }
    }
    else if (z == 3)
    {
      printf("Are you sure you want to close the phone book\n");
      printf("Press 1 for yess\n");
      printf("Press 2 for noo\n");

      int ans;
      printf("Enter\n");
      scanf("%d", &ans);

      if (ans == 1)
      {
        printf("The phone book has closed\n");
        printf("Have a good day\n");
      }
      else if (ans == 2)
      {
        printf("The phone book has not closed\n");
        printf("You can continue\n");
      }
    }
  }
}
else
{
  printf("IN-VALID");
}
 
