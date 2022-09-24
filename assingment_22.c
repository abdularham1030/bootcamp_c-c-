#include<stdio.h>
#include<string.h>
#include<stdlib.h>
float Allo_Input(int size);
char* VarLenStr();
float AveOfN(int size);
void PrintText();
int ArraySum(int size);
int LargestElement(int size);
void f1();
int main()
{
    int *ptr,size = 0 ;
    char *str;
    int sum;
    /*
    //problem 1 
    str = VarLenStr();
    printf("%s",str);
    free(str);
   //probelem 2
    printf("Enter the size of array :\n");
    scanf("%d",&size);
    printf("THe average is :%f\n",Allo_Input(size));
    //problem 3
    printf("Enter the number of elements:");
    scanf("%d",&size);
    printf("The average of the data is %f",AveOfN(size));
    //probelm 4
    printf("Enter some text to print It:\n");
    PrintText();
    //problem 5
    printf("Enter the elements of array :");
    scanf("%d",&size);
    sum = ArraySum(size);
    printf("THe sum of array is %d\n",sum);
    //problem 6

    */
    printf("Enter the size of array :");
    scanf("%d",&size);
    printf("the lagest elemetnt is %d\n",LargestElement(size)) ;
    //problem 7
    //printf(" the example of memory leek\n");
    
    //f1();
    //problem 8
    
    return 0;
}
float Allo_Input(int size)
{
    int *arr;
    float average = 0;
    arr = (int*)malloc(size*sizeof(int));
    //taking the data form the user
    printf("ENter the elemetns of array:\n"); 
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        average = (average + arr[i]);
    }
    average = average/size;
    
    free(arr);
    return average;
    
    
}
char * VarLenStr()
{
    char *ptr, c;
    int i = 0, j = 1 ;
    ptr = (char *)malloc(sizeof(char));
    printf("Enter a string:");
    while (c != '\n')
    {
        c=getc(stdin);
        j++;
        ptr=(char*)realloc(ptr,j * sizeof(char));
        ptr[i] = c;
        i++;
    }
    return ptr;
}
float AveOfN(int size)
{
    float ave;
    int *ptr;
    ptr = (int*)calloc(size,sizeof(int));
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    for (int i = 0; i < size; i++)
    {
        ave = ave + ptr[i];
    }
    ave = ave/size;
    free(ptr);
    return ave;
}
void PrintText()
{
    int i = 0 , j = 1 ;
    char *str , c ;
    str = (char*)malloc(sizeof(char));
    while (c != '\n')
    {   
       c = getc(stdin);
       j++;
       str = (char*)realloc(str,j*sizeof(char));
       str[i] = c;
       i++;
    }
    printf("%s\n",str);
    free(str);
    
}
int ArraySum(int size)
{
    int *ptr,sum = 0;
    ptr = (int*)malloc(size*sizeof(int));
    for (int  i = 0; i < size; i++)
    {
        scanf("%d",&ptr[i]);
    }
    for(int i = 0 ; i < size ; i++)
    {
        sum = sum + ptr[i];
    }
    free(ptr);
    return sum;
}
int LargestElement(int size)
{
    int large = 0 , mini;
    int *ptr;
    ptr = (int*)malloc(size*sizeof(int));
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    for (int i = 0; i < size; i++)
    {
        if (ptr[i] > large)
        {
            large = ptr[i];
        }
        
    }
    mini = large;
    for (int i = 0; i < size; i++)
    {
        if (ptr[i] < mini)
        {
            mini = ptr[i];
        }
        
    }
    printf("MINImum:%d",mini);
    free(ptr);
    return large;
}
void f1()
{
    int *ptr;
    ptr = (int*)malloc(4);
    *ptr = 545;
    printf("%d",*ptr);
    //not relesing the allocated memory ;    
}




