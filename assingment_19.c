#include<stdio.h>
#include<string.h>
void valid_ip(char *str,int s);
int dist_list(char *str,int size);
int main()
{
    char str[5][20],city[10][20],item[20];
    int i,j,count = 0 ;
    /*
    //problem 1
    for ( i = 0; i < 5; i++)
    {
        printf("Enter the %d string:",i+1);
        fgets(str[i],20,stdin);
    }
    for (i = 0; i < 5; i++)
    {
        count = 0 ;

       for ( j = 0; j < 20; j++)
       {
        if (str[i][j] == 'a' ||str[i][j] == 'A' ||str[i][j] == 'e' ||str[i][j] == 'E'||str[i][j] == 'i' ||str[i][j] == 'I'||str[i][j] == 'o' ||str[i][j] == 'O'||str[i][j] == 'u' ||str[i][j] == 'U')
        {
            count++;
        }
       }
       printf("String %d contain %d vowelse\n",i+1,count);
    }
    //problem 2
    for ( i = 0; i < 10; i++)
    {
       printf("Enter city %d ",i+1);
       fgets(city[i],20,stdin); 
    }
    for ( i = 0; i < 10; i++)
    {
        printf("City %d : %s\n",i,city[i]);
    }
    //problem 4
    printf("Enter 5 string\n");
    for ( i = 0; i < 5; i++)
    {
        fgets(str[i],20,stdin);
    }
    printf("Enter a string to search\n");
    fgets(item,20,stdin);
    for ( i = 0; i < 5; i++)
    {
       if (! strcmp(item,str[i]))
       {
            printf("Found!!!!!");
            return 0 ;
       }
    }
   //problem 5
    printf("Enter 5 e-mail address:\n");
    for ( i = 0; i < 5; i++)
    {
        fgets(str[i],20,stdin);
    }
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 20; j++)
        {
            if (str[i][j] == '@')
            {
                printf("%d is a vlid e-mail\n",i+1);
                break;
            }
        }
        
    }
    //prblem 7
    printf("enter 5 ip address:");
    for ( i = 0; i < 5; i++)
    {
        fgets(str[i],20,stdin);
    }
    for ( i = 0; i < 5; i++)
    {
        valid_ip(str[i],20);
    }
    */
    //problem 8
    printf("Enter 5 words:");
    for(i = 0;i < 5 ; i++)
    {
        fgets(str[i],20,stdin);
    }
   // printf("%s",str[1]);
    printf("%d",dist_list(str[0],20));
    return 0;
}
void valid_ip(char *str,int s)
{
    int i = 0 ,count = 0,len;
    int tmp = 1;
    len = strlen(str);
    for ( i = 0; i < len; i++)
    {
        if(str[i] == '.')
        count++;
    }
    if(count == 3)
    {
        printf("it is a valid IP address!!!\n");

    }
    else
    printf("not a ip address!!!\n");
    
}
int dist_list(char *str,int size)
{
    char temp[10],temp2[10];
    int x,y,counter = 0;
    int i , j,Cmpres = 1 ;
    printf("Enter first word:");
    fgets(temp,10,stdin);
    printf("Enter second word:");
    fgets(temp2,10,stdin);
    for ( i = 0; i < 5;i++)
    {
        Cmpres = strcmp(&str[i],temp);
        if( Cmpres == 0)
        {
            x = i;
            break;
        }
       
        
    }
    for ( j = 0; j < 5;j++)
    {
        Cmpres = strcmp(&str[i],temp2);
        if(Cmpres == 0)
        {
            y = i;
            break;
        }
       
        
    }
    for ( i = x; i < y; i++)
    {
        counter++;
    }

    
    //printf("%s",&str[2]);
    return counter;
}