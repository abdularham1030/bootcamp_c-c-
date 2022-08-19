//!!!!!!run a single problem at a time due to multiple declaratioin of array  !!!!!

#include<stdio.h>
int GreatNum(int a[],int size);
int SmallNum(int a[],int size);
void SortArr(int a[],int size);
void RotateArr(int a[],int size);
int Dupli(int a[],int size);
void Print_Rev(int a[], int n );
void Count_Dupli(int a[], int n);
void Merg(int a[],int n ,int b[]);
void Frequency_check(int a[], int n );
int main()
{
    int num = 0,i;
    /*
    printf("Enter the size of array:");
    scanf("%d",&num);
    int Arr[num];
    for ( i = 0; i < num; i++)
    {
        printf("Element_%d:",i+1);
        scanf("%d",&Arr[i]);
    }
    printf("Greatest:%d\n",GreatNum(Arr,num));
    //problem 2
    printf("Enter the size of array:");
    scanf("%d",&num);
    int Arr[num];
    for ( i = 0; i < num; i++)
    {
        printf("Element_%d:",i+1);
        scanf("%d",&Arr[i]);
    }
    printf("Smallest:%d\n",SmallNum(Arr,num));
    //problem 3
    printf("Enter the size of array:");
    scanf("%d",&num);
    int Arr[num];
    for ( i = 0; i < num; i++)
    {
        printf("Element_%d:",i+1);
        scanf("%d",&Arr[i]);
    }
    SortArr(Arr,num);
    //problem 4
    printf("Enter the size of array:");
    scanf("%d",&num);
    int Arr[num];
    for ( i = 0; i < num; i++)
    {
        printf("Element_%d:",i+1);
        scanf("%d",&Arr[i]);
    }
    RotateArr(Arr,num);
    //problem 5
    printf("Enter the size of array:");
    scanf("%d",&num);
    int Arr[num];
    for ( i = 0; i < num; i++)
    {
        printf("Element_%d:",i+1);
        scanf("%d",&Arr[i]);
    }
    printf("Found!!!:%d",Dupli(Arr,num));
   // problem 6
    printf("Enter the size of array:");
    scanf("%d",&num);
    int Arr[num];
    for ( i = 0; i < num; i++)
    {
        printf("Element_%d:",i+1);
        scanf("%d",&Arr[i]);
    }
    Print_Rev(Arr,num);
    //problem 7
    printf("Enter the size of array:");
    scanf("%d",&num);
    printf("Enter some duplicate elements\n");

    int Arr[num];
    for ( i = 0; i < num; i++)
    {
        printf("Element_%d:",i+1);
        scanf("%d",&Arr[i]);
    }
    Count_Dupli(Arr,num);
    //problem 8
    printf("Enter the size of array:");
    scanf("%d",&num);
    printf("Enter some duplicate elements\n");

    int Arr[num],Arr2[num];
    for ( i = 0; i < num; i++)
    {
        printf("Element_%d:",i+1);
        scanf("%d",&Arr[i]);
    }
    printf("Enter the elements of second array :\n");

    for ( i = 0; i < num; i++)
    {
        printf("Element_%d:",i+1);
        scanf("%d",&Arr2[i]);
    }
    Merg(Arr,num,Arr2);
    //problem 9
    */
    printf("Enter the size of array:");
    scanf("%d",&num);
    int Arr[num];
    for ( i = 0; i < num; i++)
    {
        printf("Element_%d:",i+1);
        scanf("%d",&Arr[i]);
    }
    Frequency_check(Arr,num);
   
    return 0;
}
int GreatNum(int a[],int n)
{
    int i ,max = 0;
    for ( i = 1; i <= n; i++)
    {
        if(a[i] > a[max])
        {
            max = i;
        }
    }
    return a[max];
}
int SmallNum(int a[],int n)
{
    int i = 0,mini = a[0];
    for ( i = 1; i < n; i++)
    {
        if(a[i] < mini)
        {
            mini = a[i];
        }
    }
    return mini;
}
void SortArr(int a[],int n)
{
    int i,j,temp;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n-1; j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j] ;
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            
        }
        
    }
    
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}
void RotateArr(int a[],int n )
{
    int R,i,temp[n],j = 0;
    printf("Enter the number of rotation:");
    scanf("%d",&R);
    
        for ( i = R; i < n  ; i++,j++)
        {
            temp[j] = a[i] ;
        }
        for (i = 0,j = (n - R);i < R ; i++,j++)
        {
            temp[j] = a[i];
        }
        
    
    for ( i = 0; i < n; i++)
    {
        printf("%d " , temp[i]);
    }
    
}
int Dupli(int a[],int n )
{
    int i,flag = 0  ;
    for ( i = 0; i < n-1; i++)
    {
        if (a[i] == a[i+1])
        {
            flag = 1 ;
            break;
        }
        
        
    }
    if (flag == 1 )
    {
        return a[i];
    }
    else
    {
        printf("Not found :(\n");
        return 0 ;
    }
    
}
void Print_Rev(int a[], int n)
{
    int i ;
    for ( i = n-1; i >= 0; i--)
    {
        printf("%d ",a[i]);
    }
    
}
void Count_Dupli(int a[], int n)
{
    int i,j,count = 0;
    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                break;
            }
            
        }
        
    }
    printf("%d\n",count);
}
void Merg(int a[] , int n , int b[])
{
    int i ,j,ARR[n*2],temp;
        for ( i = 0; i < n; i++)
        {
            ARR[i] = a[i];
        }
        for ( i = n,j = 0 ; i < (n*2); i++,j++)
        {
            ARR[i] = b[j];
        }
       
    for ( i = 0; i < n*2; i++)
    {
        for ( j = 0; j < n*2; j++)
        {
            if (ARR[j] < ARR[j+1])
            {
                temp = ARR[j];
                ARR[j] = ARR[j+1];
                ARR[j+1] = temp;
            }
        }
    }
    for ( i = 0; i < n*2; i++)
    {
        printf("%d ",ARR[i]);
    }
}
void Frequency_check(int a[], int n )
{
    int ARR[99],temp,i;
    /*
    for ( i = 0; i <= 99; i++)
    {
        ARR[i] = 0;
        printf("%d",i);
    }
    for ( i = 0; i < n; i++)
    {
        temp = a[i];
        ARR[temp]++;
    }
    for ( i = 0; i < 100; i++)
    {
        if (ARR[i] != 0)
        {
            printf("%d ",ARR[i]); 
        }
    }
    */
    
}