#include<stdio.h>
#include<string.h>

int main()
{
    int count = -1,i,count1 = 0,x,j = 0,alpha = 0 , digit = 0 , special = 0,copy[27];
    char str[30],ch,str2[30],temp,alp[27],test = 'a';
    /*
    fgets(str,20,stdin);
    for ( i = 0; i < 20; i++)
    {
        if(str[i] == '\0')
        {
        break;
        }
        else
        {
        count++;
        }
    }
    printf("the length of the string:%d ",count);
    //fputs(str,stdout);
    //problem 2
    fgets(str,30,stdin);
    printf("Enter the character to count it's occurrence:");
    scanf("%c",&ch);
    for ( i = 0; i < 30; i++)
    {
        if(str[i] == '\0')
        break;

        else if(str[i] == ch )
        count1++;
    }
    printf("%d \n",count1);
   //problem 3
   printf("Enter a string to print the number of vowels:");
   fgets(str,30,stdin);
    for ( i = 0; i < 30; i++)
    {
        switch (str[i])
        {
            case 'a':
            count1++;
            break;
            case 'e':
            count1++;
            break;
            case 'i':
            count1++;
            break;
            case 'o':
            count1++;
            break;
            case 'u':
            count1++;
            break;
            
        }
    }
        printf("%d\n",count1);
   //problem 4
    printf("Enter a string:");
    fgets(str,30,stdin);
    for ( i = 0; i < 30; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    fputs(str,stdout);
   //problem 5
    printf("Enter a string:");
    fgets(str,30,stdin);
    for ( i = 0; i < 30; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    fputs(str,stdout);
   //problem 6
    printf("Enter a string:");
    fgets(str,30,stdin);
    for ( i = 0; i < 30; i++)
    {
        if(str[i] == '\0')
        {
            x = i;
            //printf("%d",x);
            break;
        }        
    }
    for ( i = x,j = 0 ; i >= 0; i--,j++)
    {
        //printf("%d ",j);
        str2[i] = str[j];
    }
    for ( i = 0; i <= x; i++)
    {
        printf("%c",str2[i]);
    }
    printf("\n");
   // fputs(str2,stdout);
   //problem 7
    printf("Enter a string:");
    fgets(str,30,stdin);
    for ( i = 0; i < 30; i++)
    {
        if(str[i] == '\0')
        break;

        else if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        alpha++;

        else if (str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        
        else if (str[i] >= ' ' && str[i] <= '/')
        {
            special++;
        }
        
       
    }
    printf("Alphabets:%d\n",alpha);
    printf("Digits:%d\n",digit);
    printf("Special:%d\n",special); 
   //problem 8
    printf("Enter a string:");
    fgets(str,30,stdin);
    for ( i = 0; i < 30; i++)
    {
        if (str[i] == '\0')
        {
            break;
        }
        
        str2[i] = str[i];
        
    }
    printf("The copyed string is:");
    fputs(str2,stdout);
   //problem 9
    printf("Enter a string to short:");
    fgets(str,30,stdin);
    count = strlen(str);
    for ( i = 1; i < count; i++)
    {
        for ( j = 0; j < count-1; j++)
        {
            if(str[j] > str[j+1])
            {
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
        
    }
   fputs(str,stdout);
   //problem 10
    printf("Enter a string:"); 
    fgets(str,30,stdin);
    for ( i = 0; i < 30; i++)
    {
        if(str[i] == '\0')
        {
            x = i ;
            break;
        }
    }
    
        for ( i = 0; i < 26;i++,test++)
        {
            alp[i] = test;
            copy[i] = 0;
        }
        for ( i = 0; i < 26; i++)
        {
            for ( j = 0; j < x; j++)
            {
                if (str[j] == alp[i])
                {
                    copy[i] = copy[i] + 1;
                }
            }
        }
   //fputs(copy,stdout);
   for ( i = 0; i < 26; i++)
   {
       if (copy[i] != 0)
       {
        printf("%c : %d \n",alp[i],copy[i]);
       }
       
   }
   
    */
    return 0 ;
}