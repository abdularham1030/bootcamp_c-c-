//Array
#include<stdio.h>
int main()
{
    //problem 1
    int Arr[10],Arr2[10],f = 0,temp,j;
    float sum = 0 ,sum2 = 0  ;
    int i;
    
    for ( i = 0; i <= 9; i++)
    {
        printf("Element %d:",i+1);
        scanf("%d",&Arr[i]);
        sum = sum + Arr[i];
    }
    printf("%d",sum);
    //problem 2
    sum = 0 ;
    for ( i = 0; i <= 9; i++)
    {
        printf("Element %d:",i+1);
        scanf("%d",&Arr[i]);
        sum = sum + Arr[i];
    }
    sum = sum / 10.0 ;
    printf("Avarage:%f\n",sum);
    //problem 3
    sum = 0 ;
    for ( i = 0; i <= 9; i++)
    {
        printf("Element %d:",i+1);
        scanf("%d",&Arr[i]);
        if (Arr[i] % 2)
        {
            sum = sum + Arr[i];
        }
        else
        sum2 = sum2 + Arr[i];
        
    }
    printf("The sum of all odd numbers is %f\n",sum);
    printf("The sum of all the even numbers is %f \n",sum2);
    //problem 4
    for ( i = 0; i <= 9; i++)
    {
        printf("Element %d:",i+1);
        scanf("%d",&Arr[i]);
    }
    for ( i = 1; i < 10; i++)
    {

        if(Arr[i] > Arr[f])
        {
           f = i;
        }
    }
        printf("Greatest:%d",Arr[f]);
    //problem 5
     for ( i = 0; i <= 9; i++)
    {
        printf("Element %d:",i+1);
        scanf("%d",&Arr[i]);
    }
    for ( i = 1; i < 10; i++)
    {

        if(Arr[i] < Arr[f])
        {
           f = i;
        }
    }
        printf("Smallest:%d",Arr[f]);
    //problem 7
    for ( i = 0; i <= 9; i++)
    {
        printf("Element %d:",i+1);
        scanf("%d",&Arr[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 9; j++)
        {
            if(Arr[j]>Arr[j+1])
        {
            temp = Arr[j];
            Arr[j] = Arr[j+1];
            Arr[j+1] = temp;
        }
        }
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d ",Arr[i]);
    }
    //problem 8
    for ( i = 0; i <= 9; i++)
    {
        printf("Element %d:",i+1);
        scanf("%d",&Arr[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 9; j++)
        {
            if(Arr[j]<Arr[j+1])
        {
            temp = Arr[j];
            Arr[j] = Arr[j+1];
            Arr[j+1] = temp;
        }
        }
    }
    printf("the second largest is:%d \n",Arr[1]);
    //problem 9
    for ( i = 0; i <= 9; i++)
    {
        printf("Element %d:",i+1);
        scanf("%d",&Arr[i]);
    }
    for ( i = 9; i >= 0; i--)
    {
        printf("%d ",Arr[i]);
    }
    //problem 10
    for ( i = 0; i <= 9; i++)
    {
        printf("Element %d:",i+1);
        scanf("%d",&Arr[i]);
        Arr2[i] = Arr[i]; 
    }
    printf("Copyed array is");
    for ( i = 0; i < 10; i++)
    {
        printf("%d ",Arr2[i]);
    }
    
    
    return 0;
}