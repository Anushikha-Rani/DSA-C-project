#include <stdio.h>

int main()
{
  char card;

  int n;

  int p;

  int a;

  int b;

  int diff;

  int i;

  char cad;

  printf("Welcome To The ATM\n\n");

  printf("Please Insert your card\n\n");
  scanf("%d", &card);

  if (card == 'k')
  {
    printf("Hello Ken Keneki\n\n");

    printf(">Press 1 to withdrawal the money from your account\n\n");
    printf(">Press 2 to check the balance\n\n");

    b = 50000;

    scanf("%d", &n);

    if (n == 1)
    {
      printf("Please enter your 4 digit pin:  \n");
      scanf("%d", &a);

      if (p == 1234)
      {
        printf("Enter the amount to be withdrawal: \n");
        scanf("%d", &a);

        if (a > b)
        {
          printf("insufficient");
        }
        else
        {
          printf("Collect the money\n\n");

          diff = b - a;

          printf("Now,your bank balance is%d", diff);
        }
      }
      else
      {
        printf("incorrect pin\n\n");

        printf("please try again\n\n");

        scanf("%d", &p);

        if (p == 1234)
        {
          printf("enter the amount to be withdrawal: \n");
          scanf("%d", &a);

          if (a > b)
          {
            printf("insufficient");
          }
          else
          {
            printf("collect the money\n\n");
            diff = b - a;
            printf("now, your bank balance is%d", diff);
          }
        }
        else
        {
          printf("your request has been blocked\n");
          printf("so please try again");
        }
      }
    }
    else if (n == 2)
    {
      printf("please eneter your 4 digit pin: \n");
      scanf("%d", &p);

      if (p != 1234)
      {
        printf("please try again\n\n");
        scanf("%d", &p);

        if (p != 1234)
        {
          printf("your request has been blocked\n");
          printf("so, please try again");
        }
        else
        {
          printf("your bank balance is %d", b);
        }
      }
      else
      {
        printf("your bank balance is %d", b);
      }
    }
  }
  else if (card == 's')
  {
    printf("Hello Sasuke Uchiha\n\n");

    printf(">Press 1 to withdrawal the money from your account \n\n");
    printf(">Press 2 to check the balance\n\n");

    b = 100000;

    scanf("%d", &n);

    if (n == 1)
    {
      printf("Please enter your 4 digit pin: \n");
      scanf("%d", &p);

      if (p == 5678)
      {
        printf("enter the amount to be withdrawal: \n");
        scanf("%d", &a);

        if (a > b)
        {
          printf("insufficient");
        }
        else
        {
          printf("collect the money\n\n");

          diff = b - a;

          printf("now, your bank balance is %d", diff);
        }
      }
      else
      {
        printf("incorrect pin\n\n");
        printf("please try again\n\n");

        scanf("%d", &p);

        if (p == 5678)
        {
          printf("enter the amount to be withdrawal: \n");
          scanf("%d", &a);

          if (a > b)
          {
            printf("insufficient");
          }
          else
          {
            printf("collect the money\n\n");
            diff = b - a;
            printf("now,your bank balance is %d", diff);
          }
        }
        else
        {
          printf("your request has been blocked\n");
          printf("so please try again");
        }
      }
    }
    else if (n == 2)
    {
      printf("Please enter your 4 digit pin: \n");
      scanf("%d", &p);

      if (p != 5678)
      {
        printf("Please try again\n\n");
        scanf("%d", &p);

        if (p != 5678)
        {
          printf("your request has been blocked\n");
          printf("so please try again");
        }
        else
        {
          printf("your bank balance is %d", b);
        }
      }
      else
      {
        printf("your bank balance is %d", b);
      }
    }
    else if (card == 'i')
    {
      printf("Hello Itachi Uchiha\n\n");

      printf(">Press 1 to withdrawal the money fro, your account \n\n");
      printf(">Press 2 to check the balance\n\n");

      b = 60000;

      scanf("%d", &n);
      if (n == 1)
      {
        printf("Please enter your 4 digit pin: \n");
        scanf("%d", &p);

        if (p == 9123)
        {
          printf("enter the amount to be withdrawal:\n");
          scanf("%d", &a);

          if (a > b)
          {
            printf("insufficient");
          }
          else
          {
            printf("collect the money\n\n");

            diff = b - a;

            printf("now,your bank balance is %d", diff);
          }
        }
        else
        {
          printf("incorrect pin\n\n");

          printf("Please try again\n\n");

          scanf("%d", &p);

          if (p == 9123)
          {
            printf("enter the amount to be withdrawal: \n");
            scanf("%d", &a);

            if (a > b)
            {
              printf("insufficient");
            }
            else
            {
              printf("collect the money\n\n");

              diff = b - a;

              printf("now,your bank balance is %d", diff);
            }
          }
          else
          {
            printf("your request has been blocked\n");
            printf("so Please try again");
          }
        }
      }
      else if (n == 2)
      {
        printf("Please enter your 4 digit pin: \n");
        scanf("%d", &p);

        if (p != 9123)
        {
          printf("Please try again\n\n");

          scanf("%d", &p);

          if (p != 9123)
          {
            printf("your request has been blocked\n");
            printf("so please try again");
          }
          else
          {
            printf("your bank balance is %d", b);
          }
        }
        else
        {
          printf("your bank balance is %d", b);
        }
      }
    }
    else if (card == 'l')
    {
      printf("Hello Light Yagami\n\n");

      printf(">Press 1 to withdrawal the money from your account\n\n");
      printf(">Press 2 to check the balance \n\n");

      b = 40000;

      scanf("%d", &n);

      if (n == 1)
      {
        printf("Please enter your 4 digit pin: \n");
        scanf("%d", &p);

        if (p == 8123)
        {
          printf("enter the amount to be withdrawal: \n");
          scanf("%d", &a);

          if (a > b)
          {
            printf("insufficient");
          }
          else
          {
            printf("collect the money\n\n");

            diff = b - a;

            printf("now, your bank balance is %d", diff);
          }
        }
        else
        {
          printf("incorrect pin\n\n");

          printf("Please try again\n\n");

          scanf("%d", &p);

          if (p == 8123)
          {
            printf("enter the amount to be withdrawal: \n");
            scanf("%d", &a);

            if (a > b)
            {
              printf("insufficient");
            }
            else
            {
              printf("collect the money\n\n");

              diff = b - a;

              printf("now, your bank balance is %d", diff);
            }
          }
          else
          {
            printf("your request has been blocked\n");
            printf("so, Please try again");
          }
        }
      }
      else if (n == 2)
      {
        printf("Please enter your 4 digit pin: \n");
        scanf("%d", &p);

        if (p != 8123)
        {
          printf("please try again\n\n");
          scanf("%d", &p);

          if (p != 8123)
          {
            printf("your request has been blocked\n");
            printf("so,please try again");
          }
          else
          {
            printf("your bank balance is %d", b);
          }
        }
        else
        {
          printf("your bank balance is %d", b);
        }
      }
    }
  }
}