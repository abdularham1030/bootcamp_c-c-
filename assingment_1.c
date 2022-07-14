#include <stdio.h>
#include <string.h>
int main ()
{
    char str[20],name[20];
    int lenght,day,month,year;
    float area , radius ;
    //problem 1 
    printf("hello\n");
    //problem 2
    printf("hello\nstudent\n");
    //problem 3 
    printf("\"MySirG\"");
    //problem 4
    printf("\nenter the radius of circle");
    scanf("%f",&radius);
    area = 3.141*radius*radius;
    printf("Area of circle is %f having radius %f\n",area,radius);

    //problem 5

    printf("Enter the a string to calculate it's length \n");
    scanf("%s",&str);
    lenght=strlen(str);
    printf("the length of the string is %d\n",lenght);
    
    //problem 6
     
    printf("Enter the name of the user \n");
    scanf("%s",&name);
    printf("\"%s\" \n ",name);

    //problem 7,8 and 9 

    printf("%%d \\n // \n");

    //problem 10

    printf("DD/MM/YYYY\n");
     scanf("%d %d %d",&day,&month , &year);
     printf("Day-%d , Month-%d , year-%d\n",day,month,year);
    return 0 ;
}