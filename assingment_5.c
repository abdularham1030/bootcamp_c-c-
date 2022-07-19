#include<stdio.h>
#include<math.h>
int main ()
{

    int i,j=1,n;
    float sq,k;
    //problem 1
    printf("enter the numbers of lines :");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
{
    printf("MysirG\n");
}
    printf("enter the numbers of lines :");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
{
    printf("%d\n",i+1);
}
    printf("enter the numbers of lines :");
    scanf("%d",&n);
    for ( i = n; i > 0; i--)
{
    printf("%d\n",i);
}
 

   //problem 4
    printf("enter the numbers of lines :");
    scanf("%d",&n);
    printf("first %d odd numbers  \n",n);
    for ( i = 0; i < n; i++,j++)
    {

       printf("%d\n",2*j-1);
        
    }
   //problem 5
    printf("enter the numbers of lines :");
    scanf("%d",&n);
    printf("odd numbers in reverse order  \n");
    for ( i = n; i > 0; i--)
    {
        printf("%d\n",i*2-1);
    }
   //problem 6
    printf("enter the numbers of lines :");
    scanf("%d",&n);
    printf("first %d even numbers\n",n);
    for ( i = 0; i < n; i++,j++)
    {
       printf("%d\n",2*j-1);   
    }
    //problem 7
    printf("enter the numbers of lines :");
    scanf("%d",&n);
    printf("even numbers in reverse order  \n");
    for ( i = n; i > 0; i--)
    {
        printf("%d\n",i*2-1);
    }


    //problem 8
    printf("enter the numbers of lines :");
    scanf("%d",&n);
    for ( k = 0; k <= n; k++)
    {
        sq = sqrt(k);
        printf("%f\n",sq);
    }
    //problem 9
    printf("enter the numbers of lines :");
    scanf("%d",&n);
    printf("the cube root of first N numbers\n");
    for ( k = 0; k <= n; k++)
    {
        sq = cbrt(k);
        printf("%f\n",sq);
    }
    //problem 10
    printf("enter the numbers of lines :");
    scanf("%d",&n);
    printf("the table of %d \n",n);
    for ( i = 1; i <= 10; i++)
    {
        printf("%d*%d=%d\n",i,n,i*n);
    }
    return 0; 
}