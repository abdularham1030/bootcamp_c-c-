#include<stdio.h>
int main()
{
    int i,j,k,count=1;
    char alpha = 'A';

    //problem 1
    for ( i = 0; i <= 5; i++)
    {
        for ( j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
//problem 2
    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= 5; j++)
        {
            if (j<=(5-i))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    //problem 3
    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= 5; j++)
        {
            if (j<=(6-i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }// problem 4
    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= 5; j++)
        {
            if (j>=(i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
   //problem 5
   for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <=5; j++)
        {
            
            if (j<=(5-i))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        if (i>1)
        {
            for ( k = 1; k < i; k++)
            {
                printf("*");
            }
            
        }
        
        printf("\n");
    }

   //problem 6
   for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= 5; j++)
        {
            if (j>=(i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        for ( k = 1; k <= 4; k++)
        {
            if (k<=(5-i))
            {
                printf("*");
            }
            
        }
        printf("\n");
    }
   //problem 7
    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= 5; j++)
        {
            if (j<=(6-i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for ( k = 0; k <= 5; k++)
        {
            if (k>=(i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }   
        }
        
        printf("\n");
    }   
   //problem 8
   for (i = 1; i <= 5; i++)
    {
        for ( j = 1,count = 1; j <=5; j++)
        {
            
            if (j<=(5-i))
            {
                printf(" ");
            }
            else
            {
                printf("%d",count);
                count++;
            }
        }
        if (i>1)
        count = i;
        {
            for (k = 1; k < i; k++)
            {
                count--;
                printf("%d",count);
            }
        }
        printf("\n");
    }
   //problem 9;
    for (i = 1; i <= 5; i++)
    {
        for ( count=0,j = 1; j <= 5; j++)
        {
            if (j>=(i))
            {
                count++;
                printf("%d",count);
            }
            else
            {
                printf(" ");
            }
        }
        count = i;
        count = 6-count;
        for ( k = 1; k <= 4; k++)
        {
            if (k<=(5-i))
            {
                count--;
                printf("%d",count);
            }
        }
        printf("\n");
    }
    //problem 10
    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j < 5; j++)
        {
            if (j<=(6-i))
            {
                printf("%d",j);
            }

            else
            {
                printf(" ");
            }
        }
        count = i;
        count = 6 - count;
        for ( k = 1; k <= 5; k++)
        {
            if (k>=(i))
            {  
                printf("%d",count);
                count--;
            }
            else
            {
                printf(" ");
            }   
        }
        
        printf("\n");
    }   

    // problem 11
    for ( i = 1; i <= 5; i++)
    {
        alpha = 'A';
        for ( j = 1; j <=5; j++)
        {
            
            if (j<=(5-i))
            {
                printf("  ");
            }
            else
            {
                printf("%c ",alpha);
                alpha++;
            }
        }
        if (i>1)
        {
            alpha = 'A' + i - 2;
            for ( k = 1; k < i; k++)
            {
                printf("%c ",alpha);
                alpha--;
            }
            
        }
        printf("\n");
    }  

    //problem 12
    for ( i = 1; i <= 5; i++)
    {
        alpha = 'A';
        for ( j = 1; j <= 5; j++)
        {
            if (j>=(i))
            {
                printf(" %c",alpha);
                alpha++;
            }
            else
            {
                printf("  ");
            }
            
        }
        alpha = 'A' + (4-i);
        for ( k = 1; k <= 4; k++)
        {
            if (k<=(5-i))
            {
                printf(" %c",alpha);
                alpha--;
            }
            
        }
        printf("\n");
    }
   //problem 13
    for ( i = 1; i <= 7; i++)
    {
        alpha = 'A';
        for ( j = 1; j < 7; j++)
        {   
            if (j<=(8-i))
            {
                printf(" %c",alpha);
                alpha++;
            }

            else
            {
                printf("  ");
            }
        }
        alpha = 'A';
        alpha = alpha + (7-i);
        for ( k = 1; k <= 7; k++)
        {
            if (k>=(i))
            {  
                printf(" %c",alpha);
                alpha--;
            }
            else
            {
                printf("  ");
            }   
        }
        
        printf("\n");
    }   
   //problem 14
   for ( i = 1; i <= 9;i++)
   {
    if (i%2)
    {
        for ( j = 1; j <=i ;j++)
    {
      if (j==2||(i==5&&j==3||i==5&&j==4)||(i==7&&(j>=2&&j<=6))||(i==9&&(j%2==0)))
      {
        printf("  ");
      }
       else
        printf(" *");

    }
    }
    printf("\n");
   }
   //problem 15
   for ( i = 1; i < 11; i++)
   {
    if (i%2==1)
    {
       for ( j = 1; j <= 11; j++)
    {
        if(j<=(11-i))
        printf("  ");
        else if(j==4||j==6||j==8||j==10||(i==5&&j==9)||(i==7&&j==7)||(i==7&&j==9))
        {
            printf("  ");
        }
        
        else
        printf("* ");
        
    } 
    }
    
    printf("\n");
   }
    
   //problem 16
      for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <=5; j++)
        {
            
            if (j<=(5-i))
            {
                printf("  ");
            }
            else if (j==5&&(i>=2&&i<=4)||(j==3&&i==4)||(j==4&&(i==4||i==3)))
            {
                printf("  ");
            }
            else
            {
                printf(" *");
            }
        }
        if (i>1)
        {
            for ( k = 1; k < i; k++)
            {
                if(k==1&&(i==4||i==3)||(k==2&&i==4))

                printf("  ");

                else
                printf(" *");


            }
            
        }
        
        printf("\n\n");
    }
       for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <=5; j++)
        {
            
            if (j<=(5-i))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        if (i>1)
        {
            for ( k = 1; k < i; k++)
            {
                printf("*");
            }
            
        }
        
        printf("\n");
    }
   //problem 6
   for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <=5; j++)
        {
            
            if (j<=(5-i))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        if (i>1)
        {
            for ( k = 1; k < i; k++)
            {
                printf("*");
            }
            
        }
        
        printf("\n");
    }

   for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= 5; j++)
        {
            if (j>=(i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        for ( k = 1; k <= 4; k++)
        {
            if (k<=(5-i))
            {
                printf("*");
            }
            
        }
        printf("\n");
    }


    return 0;
}
    