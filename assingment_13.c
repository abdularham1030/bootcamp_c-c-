#include <stdio.h>
int Sum(int);
int OddSum(int n,int o);
int Multi(int n, int o);
int SumDigi(int , int);
int Fact(int);
int HCF(int , int);
void Fibona(int);
int Count(int,int);
int main()
{

    int num,odd = 1 , sum = 0,facto = 1,num2;
    int pre1 = 0,pre2 = 1;
    /*
    printf("Enter a number :");
    scanf("%d",&num);
    printf("sum :%d",Sum(num));
    //problem 2
    printf("enter a number to print its sum of odd number:");
    scanf("%d",&num);
    printf("%d",OddSum(num,odd));
    //problem 4
    printf("Enter a numver :");
    scanf("%d",&num);
    printf("%d",Multi(num, odd));
    //problem 5 
    printf("Enter a number atleast 3 digit long:");
    scanf("%d",&num);
    printf("%d\n",SumDigi(num, sum));
    //problem 6
    printf("Enter a number to calculate factorial:");
    scanf("%d",&num);
    printf("%d",Fact(num));
    //problem 7
    printf("Enter a two number to calculate it HCF first number must be greater than second:");
    scanf("%d%d",&num,&num2);
    printf("HCF of %d and %d is %d",num,num2,HCF(num,num2));
    //problrem 8
    printf("Enter a number to printf fibonacci:");
    scanf("%d",&num);
    printf("0 1 ");
    Fibona(num - 2);
    */
    //problem 9
    printf("Enter a number to count it's digits:");
    scanf("%d",&num);
    printf("%d\n",Count(num,sum));
    return 0 ;
}
int Sum(int n)
{
    if(n == 0)
    return 0;

    return (n + Sum(n - 1));
    
}
int OddSum(int n,int o)
{
    if (n == 0)
    return 0; 

    return o + OddSum(n - 1,o + 2);
}
int Multi(int n,int o)
{
    if (n == 0)
    return 1;

    return o + Multi(n - 1 , n * n);      
   
}
int SumDigi(int n , int s )
{
    if(n == 0)
        return 1;

        return s+SumDigi(n/10,n%10);

}
int Fact(int n)
{
    if(n == 0)
    return 1;

    return n*Fact(n - 1);
}
int HCF(int x , int y)
{
    if(y == 0)
        return x ;

        return HCF(y,x%y);
}
void Fibona(int n)
{
    static int n1 = 0  , n2 = 1 , n3;
    if(n > 0 )
    {
    n3 = n1+n2;
    n1 = n2;
    n2 = n3;
    printf("%d ",n3);
    Fibona(n - 1);
    }
}
int Count(int n,int c)
{
    if(n == 0 )
    return 0;
    return 1+Count(n / 10,c);
    

    
}
