#include<stdio.h>
#include<string.h>
int StringLength(char str[],int s);
void RevStr(char *str,int s);
int StringCom(char str[],char str2[],int size);
void UpStr(char *str,int s);
void LowStr(char *str,int s);
void AlphaNum(char str[],int size);
void StringPal(char str[],int s);
void StrWord(char str[], int s);
void StrWordRev(char *str,int s);
int main()
{
    char str[50],str2[50];
    int len,j,i;

    /*
    //problem 1
    printf("Enter a string to find it's length:");
    fgets(str,50,stdin);
    printf("THE length is:%d\n",StringLength(str,50));
    //problem 2
    printf("Enter a string to reverse it :");
    fgets(str,50,stdin);
    RevStr(str,50);
    //problem 3
    printf("Enter 1st string:");
    fgets(str,50,stdin);
    printf("Enter 2nd string:");
    fgets(str2,50,stdin);
    if(StringCom(str,str2,50))
    {
        printf("Both string are same:\n");
    }
    else
    printf("Not same!!!\n");
    //problem 4
    printf("Entet a string :");
    fgets(str,50,stdin);
    UpStr(str,50);
    fputs(str,stdout);
    //problem 5
    printf("Entet a string :");
    fgets(str,50,stdin);
    LowStr(str,50);
    fputs(str,stdout);
    //problem 6
    printf("Enter a string to chech it's alphanumric or not:");
    fgets(str,50,stdin);
    AlphaNum(str,50);
    //problem 7
    printf("Enter a string to chech it is palandrom or not :");
    fgets(str,50,stdin);
    //RevStr(str,50);
    //fputs(str,stdout);
    StringPal(str,50);
   //
   printf("Enter a string :");
   fgets(str,50,stdin);
   StrWord(str,50);
    */
    //problem 8
    printf("Ėnter a string with some words:");
    //fgets(str,50,stdin);
    str[0] = ' ';
    for ( i = 0; i < 49; i++)
    {
        scanf("%c",str[i]);
    }
    StrWordRev(str,50);
    return 0;
}
int StringLength(char str[],int n)
{
    int i,len;
    for ( i = 0; i < n; i++)
    {
        if(str[i] == '\0')
        {
            len = i;
            break;
        }
    }
    
    return len - 1;
}
void RevStr(char *str, int s)
{
    int i,j,len;
    char str2[50];
    len = StringLength(str,50);
    j = len;
    for ( i = 0; i < len;i++,j--)
    {
        str2[j] = str[i];
    }
    for ( i = 0; i <= len; i++)
    {
       str[i] = str2[i];
    }   
}
int StringCom(char str[],char str2[],int size)
{
    int i, len,flag = 0;
    len = StringLength(str,50);
    for ( i = 0; i < len; i++)
    {
        if(str[i] != str2[i])
        {
            flag = 1 ;
            break;
        }
    }
    if (flag == 1)
    {
        return 0;
    }
    else
    return 1;
    
}
void UpStr(char *str,int s)
{
   //fputs(str,stdout);
   int len;
   len = StringLength(str,50);
   for (int i = 0; i < len; i++)
   {
        if(str[i]  >= 'a' && str[i] <= 'z' )
        {
            str[i] = str[i] - 32;
        }
   }
}
void LowStr(char *str,int s)
{
    int len , i ;
    len = StringLength(str,50);
    for ( i = 0; i < len; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        
    }
    
}
void AlphaNum(char str[],int size)
{
    int len , i ;
    len = StringLength(str,50);
    for ( i = 0; i < len; i++)
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            for ( i = i+1; i < len; i++)
            if (str[i] >= '0' && str[i] <= '9')
            {
                printf("The string aplhamuneric!!\n");\
                break;
            }
            
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            for ( i = i+1; i < len; i++)
            {
                if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
                {
                    printf("The string aplhamuneric!!\n");
                    break;
                }
                
            }
            
        }
        else
        {
            printf("not alphamunric!!!!!!!\n");
            break;
        }
        
    }
    
}
void StringPal(char str[],int s)
{
    int len,i,flag = 0;
    char temp[50];
    len = StringLength(str,50);
    for ( i = 0; i <= len; i++)
    {
        temp[i] = str[i];
    }
    RevStr(str,50);

    for ( i = 0; i <= len; i++)
    {

        if (temp[i] != str[0])
        {
            printf("%c",str[i]);
            flag = 1 ;

        }
        else
        {
            flag = 0 ;
            break;
        }
    }
    if (flag == 1 )
    {
        printf("palandrom!!!\n");
    }
    else
    printf("not a palandrom\n ");
}
void StrWord(char str[], int s)
{
    int i,count = 1;
    int len ;
    len = StringLength(str,50);
    for ( i = 0; i < len; i++)
    {
        if(str[i] == ' ')
        {
            count++;
        }
    }
    printf("THe total number of words :%d\n",count);
}
void StrWordRev(char *str,int s)
{
    int i,len,space;
    len = StringLength(str,50);
    for ( i = len; i == 0; i++)
    {
        if(str[i] == ' ')
        {

        }
    }
    
}


