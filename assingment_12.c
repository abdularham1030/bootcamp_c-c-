#include <stdio.h>
 void PrintNumber(int);
 void RevPrint(int );
 void OddPrint(int,int );
 void OddRev(int, int);
 void PrintEven(int , int);
 void Square(int);
 void Bin(int);
 void Rev(int );
int main ()
{
    int num;
   int odd=1,odd2 = 1,eve =0 ;
    /*
    //problem 1
    printf("Enter a number:");
    scanf("%d",&num);
    PrintNumber(num);
    printf("Enter a number:");
    scanf("%d",&num);
    RevPrint(num);
   //problem 3
   printf("Enter a number to print odd number up to N :");
   scanf(" %d",&num);
   OddPrint(num,odd);
   //problem 4
    printf("Enter a number to pritnt odd number in reverse order:");
    scanf("%d",&num);
    OddRev(num,odd2);
   //problem 5 
   printf("Enter a number");
   scanf("%d",&num);
   PrintEven(num,eve);
   //problme 7
    printf("Enter a number to print square of the numbers :");
    scanf("%d",&num);
    Square(num);
   //problem 8
   printf("decimal to binary :");
   scanf("%d",&num);
   Bin(num);
   //poblem 10
   printf("enter a number to print it's reverse:");
   scanf("%d",&num);
   Rev(num);
    printf("\n");
    */
    return 0 ; 
}
void PrintNumber(int x)
{
    if(x == 0)
    return ;
    PrintNumber(x-1);
    printf("%d ",x);
}
void RevPrint(int x)
{
    if (x == 0  )
    {
        return ;
    }
    printf("%d ",x);
    RevPrint(x-1);
    
}
void OddPrint(int x,int y)
{
    if(x == 0)
    return ;

    printf("%d ",y);
    OddPrint(x-1,y+2);
   
}
void OddRev(int x , int y )
{
    if(x == 0)
    return ;

    OddRev(x-1,y+2);
    printf("%d ",y);
}
void PrintEven(int x,int y )
{
    if(x == 0)
    return;

    printf("%d ",y);
    PrintEven(x-1,y+2);
}
void Square(int x)
{
    if (x == 0 )
    {
        return;
    }
    Square(x - 1);
    printf("%d ",x*x);
}
void Bin(int x)
{
    if(x>1)
     Bin(x >> 1);

     printf(" %d",x & 1);
}
void Rev(int n )
{
    if (n == 0)
    {
        return;
    }
    printf("%d",n % 10 );
    Rev(n / 10 );
    
}

