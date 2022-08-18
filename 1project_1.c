#include<stdio.h>
#include<conio.h>
#include<time.h>
#include <string.h>
#define M 4
#define N 4 
void Rules();
void printArr(int a[4][4]);
void swap(int *a, int *b);
void Shuffel(int a[4][4] );
char compareArray(int a[M][N],int b[M][N]);
int main()
{
    int i,j,x,y,k;
    int  count = 0;
    int Arr[4][4] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,0};
    char name[20],move;
    printf("Player Name:");
    fgets(name,20,stdin);
    system("cls");
    Rules();
    Shuffel(Arr);
    printArr(Arr);
    while(1)
    {
    
    if (count == 10)
    {
    printf("you loos!!!!");
    return 0;
}
//printf("%d",count);    
    count = (count + 1);
    
        move = getch();
    if ( compareArray(Arr,arr) == 0)
        printf(" you won !!");
        
        for ( i = 0; i < 4; i++)
        {
            for ( j = 0; j < 4; j++)
            {
                if (Arr[i][j] == 0)
                {
                    x = i ;
                    y = j ;
                    break;
                }
            }   
        }
         if (move == 'e' || move == 'E')
        {
            printf("you made a exit\n");
            return 0;
        }
        else if (move == 72)
        {
            system("cls");
            swap(&Arr[x][y],&Arr[x-1][y]);
            printArr(Arr);
        }
        else if (move == 77)
        {
            system("cls");
            swap(&Arr[x][y],&Arr[x][y+1]);
            printArr(Arr);
        }
        else if (move == 75)
        {
            system("cls");
            swap(&Arr[x][y],&Arr[x][y-1]);
            printArr(Arr);
        }
        else if (move == 80)
        {
            system("cls");

            swap(&Arr[x][y],&Arr[x+1][y]);
            printArr(Arr);
        } 

    }
    return 0;
}
void Rules()
{
    int i , j ,count = 1;
    printf("  \t\t\t MATRIX PUZZEL  \n\n");
    printf("\t\t\tRULE OF THIS GAME\n\n");
    printf("1.You can move only 1 step at a time by arrow key \n");
    printf("\tMove up   : By Up arrow key\n");
    printf("\tMove Down :By Down arrow key \n");
    printf("\tMove Left :By Left arrow key \n");
    printf("\tMove Right:By Right arrow key \n");
    printf("2.You can move number at empty position only\n\n");
    printf("3.For each valid move : your total number of move will decreased by 1\n");
    printf("4.Wining situation : Number in a 4*4 matrix should be in order from 1 to 15\n\n");
    printf("Winning situation:\n");
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if(count == 16)
                printf("|    ");
            else if (count > 9 )
            {
                printf("| %d ",count);
            }
            else
            printf("|  %d ",count);   

            count++;
        }
        printf("|\n");
    }
    printf("5.You can xit the game at any time by pressing 'E' or 'e'\nso try win in 5 number of move\n\n ");
    printf("hit any key to start:");
    getch();
    system("cls");
    return ;
}
void printArr(int a[4][4])
{
int i,j;
    printf("-------------------------\n\n");
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if (a[i][j] == 0)
            {
                printf("|    ");
            }
            else if (a[i][j] > 9 )
            {
                printf("| %d ",a[i][j]);
            }
            else
            printf("|  %d ",a[i][j]);   
        }
        printf("|\n");
    }
    printf("\n-------------------------\n\n");
}
void swap(int *a , int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
void Shuffel(int a[4][4])
{
    int i,j,k,l,num,count;
    srand(time(NULL));
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            k = rand() % 4 ;
            l = rand() % 4 ;
            //printf("%d  %d\n",k,l);
            swap(&a[i][j],&a[k][l]);
        }
    }
}
char compareArray(int a[M][N],int b[M][N]) {
int i,k;
for(i=0;i<4;i++)
{
for(k = 0 ; k < 4; k++)
{
   if(a[i][k] !=  b[i][k])
return 1;
}
}
return 0;
}
