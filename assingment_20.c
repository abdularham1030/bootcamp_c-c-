#include<stdio.h>
#include<string.h>
void PrintArray(int *arr,int );
void swap(int *, int *);
void StrinSwap(char *a,char *b,int size);
void sort(int *ptr,int size);
void GreaterNumber(int *,int *);
int StringLength(char *);
void FindVowelandConsonents(char *str);
int SumOfarr(int *arr,int size);
void ReverseArray(int *arr,int size);
void ReverseString(char *str);
int main()
{   
    int check = 10 , *p , **q , ***r;
    char a[100] , b[20];
    int x = 10 , y = 100 , count ;
    int arr[100],SizeOfArr = 0;
    //problem 1 
    /*
    swap(&x,&y);
    printf("X : %d \nY : %d\n",x , y );
    //problem 2
    printf("Enter first string :");
    fgets(a,20,stdin);
    printf("enter second string :");
    fgets(b,20,stdin);
    printf("The swaped string are:\n");
    StrinSwap(a,b,20);
    fputs(a,stdout);
    fputs(b,stdout);
    //problem 3
    printf("Enter the size of array :");
    scanf("%d",&count);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,count);
    printf("The shoted array as follows:-\n");
    PrintArray(arr,count);
    // Pointer demo 
    p = &x;
    q = &p;
    r = &q;
    printf("%d %d %d %d \n",check , *p , **q ,***r);
    printf("%d %d %d \n",&check , *q , **r);
    printf("%d %d %d \n",&p , q , *r );
    printf("%d %d \n",&q , r);
    printf("%d \n",&r);
    // problem 5 
    printf("enter two numbers to find greater one:");
    scanf("%d %d",&x,&y);
    GreaterNumber(&x,&y);
    //problem 6
    printf("Enter a string to fing its length :");
    fgets(a,100,stdin);
    printf("%d\n",StringLength(a));
    //problem 7
    printf("Enter a string to find it's vowels and consonents:");
    fgets(a,100,stdin);
    FindVowelandConsonents(a);
    //problem 8
    printf("Enter the size of the array :");
    scanf("%d",&SizeOfArr);
    printf("Enter the elementes of arrya:");
    for (int i = 0; i < SizeOfArr; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d\n",SumOfarr(arr,SizeOfArr));
    //problem 9
    printf("Enter the size of array:");
    scanf("%d",&SizeOfArr);
    printf("Enter the size of array :");
    
    for (int i = 0; i < SizeOfArr; i++)
    {
        scanf("%d",&arr[i]);   
    }
    ReverseArray(arr,SizeOfArr);
    */
    //problem 10
    printf("enter a string :");
    fgets(a,100,stdin);
    ReverseString(a);

    return 0 ;

}
void PrintArray(int *arr, int count)
{
    //printf("%d  ",arr[0]);
    for (int  i = 1; i <= count; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void sort(int *arr,int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j] > arr[j+1] )
            {
                swap(&arr[j],&arr[j+1]);
            }
            
        }
        
    }
    
}
void StrinSwap(char *a,char *b,int size)
{
    char c[20];
    strcpy(c,a);
    strcpy(a,b);
    strcpy(b,c);
}
void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t; 
}
void GreaterNumber(int *p,int *q)
{
    if(*p > *q )
    {
        printf("%d is greater \n",*p);
    }
    else
    printf("%d is greater \n",*q);
}
int StringLength(char *str)
{
    int i;
    for ( i = 0; str[i] != '\0'; i++)
    {

    }
    return i-1;
}
void FindVowelandConsonents(char *str)
{
    int i;
    int vow = 0, con = 0 ;
    for(i = 0 ; str[i] != '\0' ; i++)
    {
        if((str[i] == 'a'||str[i] == 'A') || (str[i] == 'e'||str[i] == 'E') || (str[i] == 'i'||str[i] == 'I') || (str[i] == 'o'||str[i] == 'O') || (str[i] == 'u'||str[i] == 'U')  )
        {
            vow++;
        }
        else
        con++;
    }

printf("the number of vowel is %d and consonents are %d",vow,con);

}
int SumOfarr(int *arr,int size)
{
    int sum = 0 ;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
void ReverseArray(int *arr,int size)
{
    for (int i = size-1; i >= 0; i--)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void ReverseString(char *str)
{
    int len = strlen(str);
    for (int i = len-1; i >= 0; i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}