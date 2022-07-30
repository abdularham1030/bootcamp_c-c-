#include<stdio.h>
#include<stdbool.h>
float AreaOfcircle(float);
float SimpleIntrest(float,float,float);
int EvenOrOdd(int);
int Factorial(int);
void PrintNumber(int);
void PrintOddNumber(int);
float Comb(float,float);
int Arr(int , int);
int CheckNum(int , int);
void PrimeFactor(int);

int main()
{
    float radius,result,p,r,t;
    float num,R;
    int num1 , num2 , ck;

    /*
    //problem 1
    printf("Enter the radius of a circle:\n");
    scanf("%f",&radius);
    printf("Area of circle:%f\n",result = AreaOfcircle(radius));
    //problem 2
    printf("Enter Principle:");
    scanf("%f",&p);
    printf("Enter Rate:");
    scanf("%f",&r);
    printf("Enter Time:");
    scanf("%f",&t);
    printf("Simple intrest is:%f", result = SimpleIntrest(p,r,t));
    //problem 3
    printf("Enter a number: ");
    scanf("%d",&num);
    if (EvenOrOdd(num) == 0)
    {
        printf("It is a odd number\n");
    }
    else if (EvenOrOdd(num) == 1)
    {
        printf("it is even number\n");
    }
   //porlem 4
    printf("Enter a number \n");
    scanf("%d",&num);
    PrintNumber(num);
    //problem 5
    printf("Enter a number:\n");
    scanf("%d",&num);
    PrintOddNumber(num);
   //probklem 6
    printf("Enter a number to pritn it's factorial:");
    scanf("%d",&num);
    printf("%d\n",Factorial(num));
    //problem 7
    printf("Enter the value of N:");
    scanf("%f",&num);
    printf("Enter the value of R:");
    scanf("%f",&R);
    printf("Combination:%f",Comb(num,R));
    //problem 8
    printf("Enter the value of N:");
    scanf("%f",&num);
    printf("Enter the value of R:");
    scanf("%f",&R);
    printf("the arrangmnt is :%d",Arr(num , R));
    //problem 9
    printf("enter the a number:");
    scanf("%d",&num1);
    printf("Enter a digit to check it :");
    scanf("%d",&num2);
    ck = CheckNum(num1,num2);
    if (ck == 1)
    {
        printf("The number %d is present in %d",num2,num1);
    }
    else
    printf("not present :(");
    */
   //problem 10 
   printf(" Enter a number :");
   scanf("%d",&num1);
   PrimeFactor(num1);
        
    return 0;
}
float AreaOfcircle(float R)
{
    R = 3.14*(R*R);
    return R;
}
float SimpleIntrest(float x,float y,float z)
{
    x = (x*y*z)/100;
    return x;
}
int EvenOrOdd(int x)
{
    if (x%2)
    {
        return 0;
    }
    else
    return 1;
    
}
void PrintNumber(int x)
{
    int i;
    for ( i = 1; i <= x; i++) 
    {
        printf("%d\n",i);
    }
    
}
void PrintOddNumber(int x)
{
    int i,k=1;
    for ( i = 0; i < x; i++)
    {
        printf("%d\n",k);
        k+=2;
    }
    
}
int Factorial(int x)
{
    int i,fact=1;
    for ( i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
float Comb(float x , float y)
{
    float Factnum,diffact;
    float differenc;
    Factnum = Factorial(x);
    differenc = x-y;
    diffact = Factorial(differenc);
    Factnum = Factnum / differenc;
    return Factnum;

}
int Arr(int x , int y)
{
    int Fact_x =1,Fact_y=1,Fact_diff=1;
    int result;
    //printf("%d %d %d ",Fact_diff,Fact_x,Fact_y);
    Fact_x = Factorial(x);
    Fact_y = Factorial(y);
    Fact_diff = x - y;
    Fact_diff = Factorial(Fact_diff);
    //printf("  X:%d",Fact_diff);
    result = Fact_x /(Fact_y*Fact_diff);
    return result;
}
int CheckNum(int x, int y)
{
int i ,reminder;
for ( i = 0; i < x+10; i++)
{
    reminder = x % 10 ;
    if (reminder == y)
    {
        return 1;
    }
    x = x/10;
    
}

    return 0 ;
}
void PrimeFactor(int x)
{
    int temp,i;
    for ( i = 0; i <= x ; i++)
    {

        if (x == 1)
        {
            return ;
        }
        
       else if(x % 2 == 0)
    {
        x = x / 2;
        printf("2 ");
    }
    else if (x % 3 == 0)
    {
        x = x / 3;
        printf("3 ");
    }
    else if (x % 5 == 0)
    {
        x = x / 5;
        printf(" 5");
    }
    else if (x % 7 == 0)
    {
        x = x / 7;
        printf(" 7");
    }
    else if (x % 9 == 0)
    {
        x = x / 9;
        printf(" 9");
    }    
    else
    printf("Enter a valid number\n");
    
    }
    
   
}