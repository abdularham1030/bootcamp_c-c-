#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,count=1,flag=0;
    float sq,k,sum,fact=1;
    int num1,num2,fla=1,max;
    
    printf("enter the numbers of lines :");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
{
    sum += i;
}
printf("%f\n",sum);
//problem 2
    sum = 0 ;
    printf("enter the numbers of lines :");
    scanf("%d",&n);
    printf("The sum of first %d even nuber is :",n);
    for ( i = 1; i <= n; i++)
    {
        sum = sum + (i*2);
    }
    printf("%f\n",sum);
    //problem 3
    sum = 0 ;
    printf("enter the numbers of lines :");
    scanf("%d",&n);
    printf("The sum of first %d odd numbers is :",n);
    for ( i = 1; i <= n; i++)
    {
        sum = sum + (i*2-1);
    }
    printf("%f\n",sum);
    //problem 4
    sum = 0 ;
    printf("enter the numbers of lines :");
    scanf("%d",&n);
    printf("The sum of first %d square root numbers is :",n);
    for ( k = 1; k <= n; k++)
    {
        sq = sqrt(k);
        sum = sum + sq;
    }
    printf("%f\n",sum);
    //problem 5
    sum = 0 ;
    printf("enter the numbers of lines :");
    scanf("%d",&n);
    printf("The sum of first %d square root numbers is :",n);
    for ( k = 1; k <= n; k++)
    {
        sq = cbrt(k);
        sum = sum + sq;
    }
    printf("%f\n",sum);
    //problem 6
    sum = 0;
    printf("enter a numbers to find it's factroial:");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%f",fact);
   //problem 7
   printf("Enter a number to count its digits:");
   scanf("%d",&n);
   for ( i = 1; i <= n; i++)
   {
        n = n / 10;
        count++;
   }
   printf("%d\n",count);
   //problem 8
   printf("Enter a number to check it is prime number or not:");
   scanf("%d",&n);
   if(n==0||n==1)
   flag=1;
    for ( i = 2; i <= (n/2); i++)
    {
        
        if (n%i==0)
        {
            flag=1;
            break;
        }
        
    }
   if (flag == 1)
   {
        printf("tne number is not a prime\n");
   }
   else
   {
        printf("It is prime\n");
   }
   
   //problem 9
   printf("Enter 2 number to find its LCM:");
   scanf("%d%d",&num1,&num2);
   max = (num1 > num2) ? num1 : num2;  
      
    while (fla)  
    {  
        if (max % num1 == 0 && max % num2 == 0)  
        {  
            printf( " The LCM of %d and %d is %d. ", num1, num2, max);  
            break;  
        }  
        ++max;  
    }  

    
//problem 10
num2 = 0 ;
printf("enter a number to print it's reverse:");
scanf("%d",&n);
for ( i = 0;n!=0; i++)
{
    num1 = n % 10 ;
    num2 = (num2*10) + num1;
    n = n / 10 ;
}

   printf("%d\n",num2);
    return 0;
}