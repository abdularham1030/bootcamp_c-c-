#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    //problem 1
    int num , num2;
    int a,b,c,i;
    int year;
    float d;
    char ch;
    printf("enter a number");
    scanf("%d",&num);
    if (num > 0)
    {
        printf("positive\n");
    }
    else
    {
        printf("negative\n");

    }
    //problem 2
    printf("enter a number:");
    scanf("%d",&num);
    if (num % 5 == 0)
    {
        printf("the number is divisible by 5\n");

    }
    else
    {
      printf("not divisibel\n");
    }
    
    // problem 3
    
    printf("enter a number:");
    scanf("%d",&num);
    if (num % 2)
    {
        printf("odd\n");

    }
    else
    {
        printf("even\n");
    }

    //porblem 4

    printf("Enter a number :");
    scanf("%d",&num);
    if (num & 1 == 1)
    {
        printf("odd\n");
    }
    else
    {
        printf("even\n");
    }
    //problem 5

    printf("Enter a number:");
    scanf("%d",&num);
    if (num % 10 == 0 )
    {
        printf("Not 3  digit number \n");
    }

    else if(num % 100 == 0)
    {
         printf("Not 3  digit number \n");
    }

    else if (num % 1000 == 0)
    {
        printf("The number is 3 digit \n");

    }
    else
    {
        printf("Not 3  digit number \n");
    }
    //problem 6

    printf("enter 2 number:");
    scanf("%d%d",&num , &num2);
    if (num > num2)
    {
        printf("the greater number is %d\n",num);
    }
    
    else
    {
        printf("the greater number is %d\n",num2);
    }
    
    //problem 7
    printf("enter the valuse of a , b and c for the quadric equation \n");
    printf("A:");
    scanf("%d",&a);
    printf("B:");
    scanf("%d",&b);
    printf("C:");
    scanf("%d",&c);
    d = (b*b)-(4*a*c);
    num = (-b-sqrt(d))/(2*a);
    num2 = (-b+sqrt(d))/(2*a);

    printf("the value of x is %d and %d",num, num2);
    if (d < 0)
    {
        printf("the solution is distinct\n");
    }
    else if (d>0)
    {
        printf("the solution is real\n");
    }
    else if (d==0)
    {
        printf("unique\n");
    }
    
   printf("Enter a year: ");
   scanf("%d", &year);

   
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   
   else {
      printf("%d is not a leap year.", year);
   }
    //problem 9
    printf("to find the greatest");
    printf("A:");
    scanf("%d",&a);
    printf("B:");
    scanf("%d",&b);
    printf("C:");
    scanf("%d",&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("greatest number is %d",a);
        }
        if(a<c)
        {
            printf("the greatest number is %d",c);
        }
    }
    if (b>a)
    {
        if (b>c)
        {
            printf("the greatest number is %d",b);

        }
        if(b<c)
        {
            printf("the greatest number is %d",c);
        }
    }
    //problem 11
    for ( i = 0; i < 5; i++)
    {
        printf("enter the marks of student%d",i+1);
        scanf("%d",&num);
        if (num < 33)
        {
            printf("FAIL/n");
        }
        else
        {
            printf("PASS");
        }
        
    }
    //problem 12
    
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("%c is an upper case letter ",ch);
    }
        else if(ch>='A' && ch<='z')
    {
        printf("%c is a lower case letter ",ch);
    }
    else
    {
        printf("%c is not a Alphabets ",ch);
    }
    return 0;
    //problem 13
    printf("enter a number ");
    scanf("%d",&num2);
    if (num2 % 3 && num2 % 2)
    {
        printf("divisible by 3 and 2\n");
    }
    else
    {
        printf("not divisible!\n");
    }
    //problem 17
    printf("enter the sides of the triangle ");

     printf("A:");
    scanf("%d",&a);
    printf("B:");
    scanf("%d",&b);
    printf("C:");
    scanf("%d",&c);

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("valid\n");
    }
    else
    {
        printf("invalid\n");
        
    }
    
}