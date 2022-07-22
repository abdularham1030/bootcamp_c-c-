#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,sum=0,num,pre=1,pre2=0,flag=0;
    int hcf,num2=0;

    //problem 1
    printf("enter a number to print the Nth number of fibonnic series:");
    scanf("%d",&num);
    for ( i = 2; i <= num; i++)
    {
        sum = pre + pre2;
        pre = pre2;
        pre2 = sum;
    }
   printf("%d\n",sum);

    //problem 2
    sum = 0 ;
    pre = 1;
    pre2 = 0;
    printf("enter a number to print fibonnic series:");
    scanf("%d",&num);
    for ( i = 2; i <= num; i++)
    {
        sum = pre + pre2;
        pre = pre2;
        pre2 = sum;
        printf("%d\n",sum);
    }
    // problem 3
    sum = 0 ;
    pre = 1;
    pre2 = 0;
    printf("enter a number to check fibonnic series:");
    scanf("%d",&num);
    if (num==0||num==1)
    {
        printf("PRESENT\n");
        return 0;
    }
    
    for ( i = 1; i <= num+3; i++)
    {
        sum = pre + pre2;
        pre = pre2;
        pre2 = sum;

        if(num == sum)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("PRESRNT\n");
    }
    else
    {
        printf("not present\n");
    }
    //problem 4
    printf("Enter 2 numbers to find its HCF\n");
    scanf("%d%d",&pre,&pre2);
    for (i = 1; i <=pre||i<=pre2 ; i++)
    {
        if (pre % i == 0 && pre2 % i == 0)
        {
            hcf = i;
        }
    }
    printf("HCF:%d\n",hcf);
    
    //problem 5
    flag = 0;
    printf("Enter 2 numbers to find it is co-prime or not:\n");
    scanf("%d%d",&pre,&pre2);
    for (i = 1; i <=pre||i<=pre2 ; i++)
    {
        if (pre % i == 0 && pre2 % i == 0)
        {
            hcf = i;
        }
    }
    if(hcf == 1)
    {
        printf("the numbers are co-prime\n");
    }
    else
    {
        printf("not co-prime\n");
    }
    
   // problem 6
   for ( i = 1; i <= 100; i++)
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
    if(flag == 0)
    {
        printf("%d\n",i);
    }
    }
   //problem 7
   printf("Enter two numbers to print prime numbers between them:");
   scanf("%d%d",&pre,&pre2);
   if (pre>pre2)
   {
    printf("first number should be greater run again \n");
    return 0;
   }
   
   for ( i = pre; i <= pre2; i++)
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
    if(flag == 0)
    {
        printf("%d\n",i);
    }
    }
   //problem 8
   printf("Enter a number to check it's next prime number:");
   scanf("%d",&num);
   for ( i = num+1; i <= num+10; i++)
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
    if(flag == 0)
    {
        printf("%d\n",i);
        return 0;
    }
    }
   //problem 9
   //armstrong number
   //153=1^3+5^3+3^3
   sum = 0;
   printf("Enter a number to check it is armstron or not:");
   scanf("%d",&num);
   pre2 = num;
   for ( i = 0; i <= num+10; i++)
   {
        pre = num % 10 ;
        sum = sum + (pre*pre*pre);
        num = num / 10 ;
   }
   if(sum == pre2 )
   {
        printf("%d is armstrong :O\n",sum);
   }
   else
   {
    printf("%d is non armstron :(",sum);
   }

    
   //problem 10
   for ( i = 1; i <= 1000; i++)
   {
        sum = 0;
        num = i;
        num2 = num;
    for ( j = 1; j <= num+10; j++)
    {
        pre = num % 10 ;
        sum = sum + (pre*pre*pre);
        num = num / 10 ;
    }
        //printf("%d\n",num2);
        if (num2 == sum)
        {
            printf("%d\n",sum);
        }
   }
    return 0;
}