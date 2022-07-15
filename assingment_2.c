#include<stdio.h>
#include <string.h>
int main()
{
    // problem_1 
    int num,last,num2;
    int x,y,z,sum=0,remainder;
    char ch;
    float inr , usd = 76.23,amount;
    int check;
    printf("enter the number:");
    scanf("%d",&num);
    last = num % 10 ;
    printf("the unit digit is %d\n",last);

    //problem_2
    printf("enter a number:");
    scanf("%d",&num);
    num2 = num/10;
    printf("%d\n",num2);

    //problem_3
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of y:");
    scanf("%d",&y);
    z = x;
    x = y;
    y = z;
    printf("x = %d\n y = %d\n",x,y);
    
    //problem_4
     
    printf("enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of y:");
    scanf("%d",&y);
    x = x+y;
    y = x-y;
    x = x-y;
    printf("x = %d\ny = %d\n",x,y);

    //problem 5
    printf("enter 3 digit number:");
    scanf("%d",&z);
    last = z%10;
    z = z / 10;
    sum = sum+last;
    
    last = z%10;
    z = z / 10;
    sum = sum+last;

    last = z%10;
    z = z / 10;
    sum = sum+last;

    printf("the sum of three digits is = %d\n",sum);
   
    //problem 6
    printf("enter a character :");
    scanf("%c",&ch);
    printf("the ASCII value is = %d\n",ch);

    // problem 8
    printf("enter a number to check it is even or odd:");
    scanf("%d",&check);
    if (check & 1 == 1)
    {
        printf("odd/n");    
    }
    else
    {
        printf("even\n");
    }
    
    //problem 9
    printf("size of a int is %lu\nsize of a float is %lu",sizeof(int),sizeof(float));
    printf("\nsize of double is %lu\nsize of char is %lu\n",sizeof(double),sizeof(char));

    //problem 10
    printf("enter a int :");
    scanf("%d",&num);
    num = num / 10 ;
    num = num * 10;
    printf("%d",num);
 

    //problem 11
    printf("enter a number large number :");
    scanf("%d",&num );
    printf("enter unit digit number:");
    scanf("%d",&num2);
    num = num * 10;
    num = num + num2;
    printf("%d\n",num);

    //problem 12

    printf("INR :");
    scanf("%f",&inr);
    amount = inr / 76.23;
    printf("the amount of USD is : %f",amount );

    //problem 13 
     


    return 0;
}