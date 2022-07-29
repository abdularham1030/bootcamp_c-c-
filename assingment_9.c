#include <stdio.h>
#include <stdbool.h>
int main()
{
    int month,opra,week,year,num4;
    float num1 , num2,result,num3,bill=0,unit;
    


    /*
    printf("enter the number of a month:");
    scanf("%d",&month);
   switch(month)
    {
    case 1:
        printf("jan:31 day");
        break;
    
     case 2:
        printf("fab:28 day");
        break;
     case 3:
        printf("mar:31 day");
        break;
     case 4:
        printf("apr:30 day");
        break;
     case 5:
        printf("may:31 day");
        break;
     case 6:
        printf("jun:30 day");
        break;
     case 7:
        printf("jul:31 day");
        break;
     case 8:
        printf("aug:31 day");
        break;
     case 9:
        printf("sept:30 day");
        break;
     case 10:
        printf("oct:31 day");
        break;
     case 11:
        printf("jan:30 day");
        break;
     case 12:
        printf("dec:31 day");
        break;
     
    
    default:
    printf("invalid input:");
        break;
    }
   //problem 2 
    printf("Enter two number :");
    scanf("%f%f",&num1,&num2);
    printf("Ent3r: 1 for Addition\n");
    printf("Ent3r: 2 for subtraction\n");
    printf("Ent3r: 3 for multiply\n");
    printf("Ent3r: 4 for divide\n");
    printf("Ent3r: 5  for Exit\n");
    scanf("%d",&opra);
    switch (opra)
    {
        case 1:
        printf("%f + %f = %f",num1,num2,num1+num2);
        break;
        case 2:
        printf("%f - %f = %f",num1,num2,num1-num2);
        break;
        case 3:
        printf("%f * %f = %f",num1,num2,(num1*num2));
        break;
        case 4:
        printf("%f / %f = %f",num1,num2,num1/num2);
        break;
        case 5:
        return 0;
        break;
    
    default:
    printf("invalid input:");
        break;
    }
   //problem 3
   printf("Enter the number of a week day :");
   scanf("%d",&week);
   switch (week)
   {
   case 1:
    printf("Monday's are boring :(\n");
    break;
   case 2:
    printf("Tuesday's can't be tollrated :<\n");
    break;
   case 3:
    printf("wednesday's can be tollrated\n");
    break;
   case 4:
    printf("It is thusday \n");
    break;
   case 5:
    printf("friday's are good :)");
    break;
   case 6:
    printf("saturday is a week end :)\n");
    break;
   case 7:
    printf("sunday is a funday :)\n");
    break;
   
   default:
   printf("iinvalid input\n");
    break;
   }
   //problem 4
   printf("Enter the length of  three sides of a triangle:\n");
   scanf("%f%f%f",&num1,&num2,&num3);
    printf("Press the number given bellow to run the program");
    printf("1:isoceles triangle\n");
    printf("2:right angle triangle \n");
    printf("3:equilateral triangle\n");
    printf("4:exit\n");
    scanf("%d",&opra);
    switch (opra)
    {
    case 1:
       if(num1==num2&&(num1!=num3)&&(num2!=num3)||num2==num3&&(num3!=num1)&&(num2!=num1)||num1==num3&&(num1!=num2)&&(num3!=num2))
       {
         printf("it is a isoceles triangle");
       }
       else
       printf("not a isoceles triangle");
        break;
      case 2:
         if((num1*num1)+(num2+num2)==(num3*num3)||(num3*num3)+(num2+num2)==(num1*num1)||(num1*num1)+(num3+num3)==(num2*num2))
         printf("it is a right angle triangle");
         else
         printf("not a right angle trianle");
      case 3:
      if ((num1==num2)==num3)
      {
         printf("it is a equilatral triangle");

      }
      else
      printf("it is not a equilatral triangle ");
      
      default:
        break;
    }


   //problem 5
   printf(" Enter a number :");
   scanf("%d",&opra);
   switch (opra)
   {
   case 1:
    printf("good\n");
    break;
   case 2:
    printf("better\n");
    break;
   case 3:
    printf("best\n");
    break;
   
   default:
   printf("invalid\n");
    break;
   }
   //problem 6
printf("Enter a year :");
scanf("%d",&year);
switch (year%400==0||year%4==0)
{
case 1:
    printf("leap year\n");
    break;

default:
    printf("not a leap year\n");
    break;
}
   //problem 7
   printf("Enter the unit used:");
   scanf("%f",&unit);
   switch (unit<=50)
   {
      case 1:
      bill = 0.5*unit;
      break;
   }
   switch ((unit>=0&&unit>50&&unit<100)==0)
   {
   case 1:
    unit = unit - 50 ;
    bill = 25+(0.75*unit);
    break;
   }

printf("%f\n",bill);
   //problem 8
      printf("Enter a number :");
      scanf("%f",&num1);
      switch (num1>0)
      {
      case 1:
         printf("%f",num1*(-1));
         break;

      }
      switch (num1<0)
      {
      case 1:
      printf("%f",num1*(-1));
         
         break;
      
      default:
         break;
      }
    //problem 9
      printf("Enter a even number:");
      scanf("%d",&num4);
       if (num4%2==1)
      {
         printf("Enter a even number:)");
      }
      
      switch (num4%2==0)
      {
      case 1:
         num4++;
         printf("%d\n",num4);
         break;
      }
    */
     
    return 0;
}