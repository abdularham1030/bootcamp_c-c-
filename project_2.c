#include<stdio.h>
#include<time.h>
#include<stdlib.h>
char board[3][3] = {'1','2','3','4','5','6','7','8','9'};
void Rewiveboard();
void PrintBoard();
void PrintWinner(char);
void Player1();
void player2();
void SmartComputer();
char Winner();
int  CheckFreeSpaces();
void EvilCoputer();
int main()
{
    char winner = ' ';
    char option = ' ';
    int menu  = 0;

    //Rewiveboard();
    printf("Enter your choice\n");
    printf("1. Want to paly with Smart computer\n");
    printf("2. Want to play with Evel computer \n");
    printf("3. Want to play with players\n");
    printf("4. Exit\n");
    scanf("%d",&menu);
    switch (menu)
    {
    case 1:
    do
    {
        winner = ' ';
        option = ' ';
        Rewiveboard();
        while (winner == ' ' && CheckFreeSpaces() != 0)
        {
            PrintBoard();
            Player1();
            winner = Winner();
            if(winner != ' ' || CheckFreeSpaces() == 0)
            {
                break;
            }
            SmartComputer();
            winner = Winner();
            if(winner != ' ' || CheckFreeSpaces() == 0)
            {
                break;
            }
            system("clear");
        }  
        system("clear");
        PrintBoard();
        PrintWinner(winner);
        printf(" Wanna play agian 'y' for yes and 'n' for no:");
        fflush(stdin);
        scanf("%c",&option);
        system("clear");
    }while(option == 'y');
    break;
    
    case 2:
   do
    {
        winner = ' ';
        option = ' ';
        Rewiveboard();
        while (winner == ' ' && CheckFreeSpaces() != 0)
        {
            PrintBoard();
            Player1();
            winner = Winner();
            if(winner != ' ' || CheckFreeSpaces() == 0)
            {
                break;
            }
            EvilCoputer();
            winner = Winner();
            if(winner != ' ' || CheckFreeSpaces() == 0)
            {
                break;
            }
            system("clear");
        }  
        system("clear");
        PrintBoard();
        PrintWinner(winner);
        printf(" Wanna play agian 'y' for yes and 'n' for no:");
        fflush(stdin);
        scanf("%c",&option);
        system("clear");
    }while(option == 'y');
    break;
    case 3:
    do
    {
        winner = ' ';
        option = ' ';
        Rewiveboard();
        while (winner == ' ' && CheckFreeSpaces() != 0)
        {
            PrintBoard();
            printf("player 1 : 'X'\n");
            Player1();
            winner = Winner();
            if(winner != ' ' || CheckFreeSpaces() == 0)
            {
                break;
            }
            system("clear");
            PrintBoard();
            printf("player 2 : 'O'\n");
            player2();
            winner = Winner();
            if(winner != ' ' || CheckFreeSpaces() == 0)
            {
                break;
            }
            system("clear");
        }  
        system("clear");
        PrintBoard();
        PrintWinner(winner);
        printf(" Wanna play agian 'y' for yes and 'n' for no:");
        fflush(stdin);
        scanf("%c",&option);
        system("clear");
    }while(option == 'y');
    break;
    case 4:
    printf("You made a exit \n");
    return 1;
    break;
    default:
    printf("Invalid input");
        break;
    }
    
    printf("Thanks for palying :)\n");
   
    return 0;
}
void PrintBoard()
{
    for (int i = 0; i < 3; i++)
    {
        printf("     |     |     \n");
        printf("  %c  |  %c  |  %c  \n",board[i][0],board[i][1],board[i][2]);
        printf("_____|_____|_____");    
        printf("\n");
    }
}
void Player1()
{
    int block;
    while (1)
    {
    scanf("%d",&block);
    //printf("C\n");
    if (block == 1)
    {
        if(board[0][0] ==  '1')
            {
                board[0][0] = 'X';
                break;
            }
            else
            printf("Invalid move");
    }
    else if (block == 2)
    {
        if(board[0][1] == '2')
        {
            board[0][1] = 'X';
            break;
        }
        else
        {
            printf("Invalid move");
        }
    }
    else if (block == 3)
    {
        if (board[0][2] == '3')
        {
            board[0][2] = 'X';
            break;
        }
        else
        {
            printf("Invalid move");
        }
    }
    else if (block == 4)
    {
        if(board[1][0] == '4')
        {
            board[1][0] = 'X';
            break;
        }
        else
        {
            printf("Invalid move");
        }
    }
    else if (block == 5)
    {
        if(board[1][1] == '5')
        {
            board[1][1] = 'X';
            break;
        }
        else
        {
            printf("Invalid move");
        }
    }
    else if (block == 6)
    {
        if(board[1][2] == '6')
        {
            board[1][2] = 'X';
            break;
        }
        else
        {
            printf("Invalid move");
        }
    }
    else if (block == 7)
    {
        if (board[2][0] == '7')
        {
            board[2][0] = 'X';
            break;
        }
        else
        {
            printf("Invalid move");
        }
    }
    else if (block == 8)
    {
        if(board[2][1] == '8')
        {
            board[2][1] = 'X';
            break;
        }
        else
        {
            printf("Invalid move");
        }
    }
    else if (block == 9)
    {
        if (board[2][2] == '9')
        {
            board[2][2] = 'X';
            break;
        }
        else
        {
            printf("Invalid move");
        }
    }
    else
    printf("invalid input~!!!");    
    }

}
void SmartComputer()
{
    int x;
    int y;
    srand(time(NULL));
    while (1)
    {
        x = rand() % 3;
        y = rand() % 3;
        if(board[x][y] != 'X' && board[x][y]!= 'O' )
        {
            for (int i = 0; i < 3; i++)
            {
                if (board[i][0] == 'X' && board[i][2] == 'X' && (board[i][1] == '2'||board[i][1] == '5'||board[i][1] == '8'))
                {
                    board[i][1] = 'O';
                    break;
                }
            }
            for (int i = 0; i < 3; i++)
            {
                if (board[i][0] == 'X' && board[i][1] == 'X' && (board[i][2] == '3'||board[i][2] == '6'||board[i][2] == '9'))
                {
                    board[i][2] = 'O';
                    break;
                }
            }
            for (int i = 0; i < 3; i++)
            {
                if (board[i][1] == 'X' && board[i][2] == 'X' && (board[i][0] == '1'||board[i][0] == '4'||board[i][0] == '7'))
                {
                    board[i][0] = 'O';
                    break;
                }
            }
            for (int i = 0; i < 3; i++)
            {
                if (board[0][i] == 'X' && board[1][i] == 'X' && (board[2][i] == '7'||board[2][i] == '8'||board[2][i] == '9'))
                {
                    board[2][i] = 'O';
                    break;
                }
            }
            for (int i = 0; i < 3; i++)
            {
                if (board[2][i] == 'X' && board[1][i] == 'X' && (board[0][i] == '1'||board[0][i] == '2'||board[0][i] == '3'))
                {
                    board[0][i] = 'O';
                    break;
                }
            }
            //for diagonals 
            if( board[1][1] == 'X')
            {
                if(board[0][0] == 'X' && board[2][2] == '9')
                {
                    board[2][2] = 'O';
                    break;
                }
                else if (board[0][2] == 'X' && board[2][0] == '7')
                {
                    board[2][0] = 'O';
                    break;
                }
                else if(board[2][0] == 'X' && board[0][2] == '3')
                {
                    board[0][2] = 'O';
                    break;
                }
                else if(board[2][2] == 'X' && board[0][0] == '1')
                {
                    board[0][0] = 'O';
                    break;
                }
            }
            for (int i = 0; i < 3; i++)
            {
                if(board[2][i] == 'X' && board[0][i] == 'X' &&(board[1][0]== '4' || board[1][1] == '5' || board[1][2] == '6'))
                {
                    board[1][i] = 'O';
                    break;
                }
            }
           
           board[x][y] = 'O';
            break;   
        }
    }
    
}
void PrintWinner(char winner)
{
    if (winner == 'X')
    {
        printf("'X' WON!!\n");
    }
    else if (winner == 'O')
    {
        printf("'O' WON!!\n");
    }
    else
    printf("IT'A DRAW\n");
    
}
char Winner()
{
   
   for(int i = 0; i < 3; i++)
   {
      if(board[i][0] == board[i][1] && board[i][0] == board[i][2])
      {
        return board[i][0];
      }
   }

   for(int i = 0; i < 3; i++)
   {
      if(board[0][i] == board[1][i] && board[0][i] == board[2][i])
      {
         return board[0][i];
      }
   }

   if(board[0][0] == board[1][1] && board[0][0] == board[2][2])
   {
      return board[0][0];
   }
   if(board[0][2] == board[1][1] && board[0][2] == board[2][0])
   {
      return board[0][2];
   }

   return ' ';
    
    
}
int CheckFreeSpaces()
{
    int FreeSpases = 9;
    char num = '1';
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++,num++)
        {
            if (board[i][j] != num)
            {
                FreeSpases--;
            }
            
        }
        
    }
    return FreeSpases;
}
void Rewiveboard()
{
    char counter  = '1';
    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++,counter++)
        {
            board[i][j] = counter;
            //printf("%c ",counter);
        }
        
    }
    
}
void EvilCoputer()
{
    int x;
    int y;
    srand(time(NULL));
    while (1)
    {
        x = rand() % 3;
        y = rand() % 3;
        if(board[x][y] != 'X' && board[x][y]!= 'O' )
        {
            //for all rows and collums 
            for (int i = 0; i < 3; i++)
            {
                if (board[i][0] == 'X' && board[i][2] == 'X' && (board[i][1] == '2'||board[i][1] == '5'||board[i][1] == '8'))
                {
                    board[i][1] = 'O';
                    break;
                }
            }
            for (int i = 0; i < 3; i++)
            {
                if (board[i][0] == 'X' && board[i][1] == 'X' && (board[i][2] == '3'||board[i][2] == '6'||board[i][2] == '9'))
                {
                    board[i][2] = 'O';
                    break;
                }
            }
            for (int i = 0; i < 3; i++)
            {
                if (board[i][1] == 'X' && board[i][2] == 'X' && (board[i][0] == '1'||board[i][0] == '4'||board[i][0] == '7'))
                {
                    board[i][0] = 'O';
                    break;
                }
            }
            for (int i = 0; i < 3; i++)
            {
                if (board[0][i] == 'X' && board[1][i] == 'X' && (board[2][i] == '7'||board[2][i] == '8'||board[2][i] == '9'))
                {
                    board[2][i] = 'O';
                    break;
                }
            }
            for (int i = 0; i < 3; i++)
            {
                if (board[2][i] == 'X' && board[1][i] == 'X' && (board[0][i] == '1'||board[0][i] == '2'||board[0][i] == '3'))
                {
                    board[0][i] = 'O';
                    break;
                }
            }
            //for diagonals 
            if( board[1][1] == 'X')
            {
                if(board[0][0] == 'X' && board[2][2] == '9')
                {
                    board[2][2] = 'O';
                    break;
                }
                else if (board[0][2] == 'X' && board[2][0] == '7')
                {
                    board[2][0] = 'O';
                    break;
                }
                else if(board[2][0] == 'X' && board[0][2] == '3')
                {
                    board[0][2] = 'O';
                    break;
                }
                else if(board[2][2] == 'X' && board[0][0] == '1')
                {
                    board[0][0] = 'O';
                    break;
                }
                
            }
            //more rows and collmns
            for (int i = 0; i < 3; i++)
            {
                if(board[2][i] == 'X' && board[0][i] == 'X' &&(board[1][0]== '4' || board[1][1] == '5' || board[1][2] == '6'))
                {
                    board[1][i] = 'O';
                    break;
                }
            }
            board[x][y] = 'O';
            break;
            // The evil things 
           if(board[0][0] == 'X' && board[2][2] == 'X')
           {
                if(board[2][0] == 'X')
                {
                    if(board[1][1] == 'O' && board[1][0] == '4' && board[2][1] == '8')
                    {
                        board[1][0] = 'O';
                        board[2][1] = 'O';
                        break;
                    }
                    else if(board[1][0] == 'O' && board[1][1] == '5' && board[2][1])
                    {
                        board[1][1] = 'O';
                        board[2][1] = 'O';
                        break;
                    }
                    else if(board[2][1] == 'O' && board[1][1] == '5' && board[1][0])
                    {
                        board[1][1] = 'O';
                        board[1][0] = 'O';
                        break;
                    }
                    else
                    {
                        board[1][1] = 'O';
                        board[2][1] = 'O';
                        board[1][0] = 'O';
                    }
                }
           }
            
            board[x][y] = 'O';
            break;
        }
    }
    
}
void player2()
{
    int block;
    while (1)
    {
    scanf("%d",&block);
    //printf("C\n");
    if (block == 1)
    {
        if(board[0][0] ==  '1')
            {
                board[0][0] = 'O';
                break;
            }
            else
            printf("Invalid move");
    }
    else if (block == 2)
    {
        if(board[0][1] == '2')
        {
            board[0][1] = 'O';
            break;
        }
        else
        {
            printf("Invalid move");
        }
    }
    else if (block == 3)
    {
        if (board[0][2] == '3')
        {
            board[0][2] = 'O';
            break;
        }
        else
        {
            printf("Invalid move");
        }
    }
    else if (block == 4)
    {
        if(board[1][0] == '4')
        {
            board[1][0] = 'O';
            break;
        }
        else
        {
            printf("Invalid move");
        }
    }
    else if (block == 5)
    {
        if(board[1][1] == '5')
        {
            board[1][1] = 'O';
            break;
        }
        else
        {
            printf("Invalid move");
        }
    }
    else if (block == 6)
    {
        if(board[1][2] == '6')
        {
            board[1][2] = 'O';
            break;
        }
        else
        {
            printf("Invalid move");
        }
    }
    else if (block == 7)
    {
        if (board[2][0] == '7')
        {
            board[2][0] = 'O';
            break;
        }
        else
        {
            printf("Invalid move");
        }
    }
    else if (block == 8)
    {
        if(board[2][1] == '8')
        {
            board[2][1] = 'O';
            break;
        }
        else
        {
            printf("Invalid move");
        }
    }
    else if (block == 9)
    {
        if (board[2][2] == '9')
        {
            board[2][2] = 'O';
            break;
        }
        else
        {
            printf("Invalid move");
        }
    }
    else
    printf("invalid input~!!!");    
    }
}

