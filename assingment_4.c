#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int i , j = 1 ;
    float sq,k;
    //problem 1 
for ( i = 0; i < 5; i++)
{
    printf("MysirG\n");
}

//problem 2
for ( i = 0; i < 10; i++)
{
    printf("%d\n",i+1);
}
printf("\n\n");
// problem 3
for ( i = 10; i > 0; i--)
{
    /* code */
    printf("%d\n",i);
}

//problem 4
printf("first 10 odd numbers  \n");
for ( i = 0; i < 10; i++, j++)
{
    if (j % 2)
    {
        printf("%d\n",2*j-1);
    }
}
//problem 5

printf("in reverse order \n");
for ( i = 20; i > 0; i--)
{
    if(i % 2)
    {
        printf("%d\n",2*i-1);
    }
}
//problem 6
printf("first 10 even natural numbers\n");
for ( i = 0; i < 10; i++)
{
    printf("%d\n",2*i);
}

//problem 7
printf("in reverse order \n");
for ( i = 10; i > 10; i--)
{
    /* code */
    printf("%d\n",i*2);
}
//problem 8

for ( k = 0; k <= 10; k++)
{
   sq = sqrt(k);
    printf("%f\n",sq);
}
//problem 9
printf("the cube root of first 10 numbers\n");
for ( k = 0; k <= 10; k++)
{
    sq = cbrt(k);
    printf("%f\n",sq);
}

//problem 10
printf("the table of 5 \n");
for ( i = 1; i <= 10; i++)
{
    printf("%d*5=%d\n",i,i*5);
}

    return 0;
}