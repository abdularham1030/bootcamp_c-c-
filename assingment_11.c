#include<stdio.h>
#include<stdbool.h>
int LCM(int , int);
int HCF(int , int);
bool Prime(int);
int NextPrime(int );
void FirstNprime(int);
void RangePrime(int , int);
void PALANDROM(int );
int Factorial(int );
int Comb(int , int );
int SumSeries(int);
int main()
{
    int num , num2;
    /*
    printf("enter two numbbber:");
    scanf("%d %d",&num,&num2);
    printf("LCM:%d",LCM(num , num2));
    //problem 2
    printf("Enter two number:");
    scanf("%d %d",&num,&num2);
    printf("%d",HCF(num , num2));
   //problem 3
   printf("Enter a number:");
   scanf("%d",&num);
    if (Prime(num))
    {
        printf(" the number is prime\n");
    }
    else
    printf("  non prime number\n");
   
    //problelm 5
    printf("Enter a number to print first N prime numbres:");
    scanf("%d",&num);
    FirstNprime(num);
   //problem 6
    printf("Enter 2 number to print prime number between them:");
    scanf("%d%d",&num,&num2);
    RangePrime(num,num2);
   //provlem 7
   printf("Enter the numbers of rows");
   scanf("%d",&num);
   PALANDROM(num);
   //problem 10
   printf("%d ",SumSeries(5));
    */


    return 0;
}
int LCM(int x , int y )
{
    int max , i ,flag;

   max = (x > y) ? x : y;  
      
    while (flag)  
    {  
        if (max % x == 0 && max % y == 0)  
        {    
            break;  
        }  
        max++;  
    }  

    return max;
}
int HCF(int x , int y )
{
    int i , max = 1;
    for ( i = 0; i < x|| i < y; i++)
    {
        if (x > y )
        {
            x = x % y ;
            max = x;
        }
        else
        y = y % x;
        max = y ;
    }
        return  max;
    
}
bool Prime(int x)
{
    int i , pri;
    for ( i = 2; i < x; i++)
    {
        if( x % i == 0)
        {
            return false;
        }
        else 
        return true;
    }
    
    return pri;
}
int NextPrime(int x)
{
    int i , j , flag ,pir1 ;
    for ( i = x+1; i <= x+10; i++)
   {
    flag = 0;
    for ( j = 2; j < i; j++)
    {
        if(i%j==0)
        {
            flag = 1;
            break; 
        } 
    }
        if (flag == 1)
        {
            break;
        }

    }
    return i;
    
    
}
void FirstNprime(int number)
{
    int i , j ,flag = 0,count = 1 ; 
   
    
        printf("1 ");
    
    for ( i = 1; count <= number; i++)
    {
        flag = 0;
        for ( j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0 ;
                break;
            }
            else
            {
                flag = 1;
            }
            
        }
        if (flag == 1 )
        {
            printf("%d ",i);
            count++;
        }
        
    }
    
}
void RangePrime(int x , int y )
{
    int i , j ,flag = 0 , count = 1 ;
    printf("1 ");
    for ( i = x; count < y; i++)
    {

        for ( j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0 ;
                break;
            }
            else
            {
                flag = 1;
            }
        }
        if (flag == 1 )
        {
            printf("%d ",i);
            count++;
        }
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
int Comb(int x , int y)
{
    return  Factorial(x) / ( Factorial(y) * Factorial(x-y));

}
void PALANDROM(int x )
{   
    int i , j ;
    for ( i = 0; i <= x; i++)
    {
        for ( j = 0; j <= x; j++)
        {
            if (j <= (x-i))
            {
                printf(" ");
            }
        }
        for ( j = 0; j <= i; j++)
        {
            printf("%d ",Comb(i,j));
        }
        
    printf("\n");
    }
}
int SumSeries(int x)
{
    int i ,sum=0 ;
    for ( i = 1; i < x; i++)
    {
       sum  += (Factorial(i)/i);
    }
    return sum;
}

