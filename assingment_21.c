#include<stdio.h>
#include<string.h>
struct Student
{
    int S_id;
    int year;
    char name[20];
    char Sports[20];
};
struct stud
{
    int Roll_no;
    char Name[20];
    float chem_marks;
    float maths_marks;
    float phy_marks;
};
struct Time
{
    int hrs;
    int min;
    int sec;
};
struct Employee
{
    int id;
    char name[30];
    float salary;
};
struct Employee InputEmp()
{
    struct Employee E;
    printf("Employee Id:");
    scanf("%d",&E.id);
    fflush(stdin);
    printf("Name:");
    fgets(E.name,30,stdin);
    E.name[strlen(E.name)-1] = '\0';
    printf("Salary:");
    scanf("%f",&E.salary);
    return E;
}
struct Time CalculateTimeDiff(struct Time t1,struct Time t2);
void PrintEmp(struct Employee E)
{
    //struct Employee E;
    printf("%d %s %f\n",E.id,E.name,E.salary);
}
void HigestSalary(struct Employee Earr[], int s)
{
    int temp;
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s-1; j++)
        {
            if (Earr[j].salary < Earr[j+1].salary)
            {
                temp = Earr[j].salary;
                Earr[j].salary = Earr[j+1].salary;
                Earr[j+1].salary = temp;
            }
            
        }
        
    }
    printf("The higest salary is %f",Earr[0].salary);
}
void ArrangeBySalary(struct Employee Earr[],int s)
{
    struct Employee temp;
    int id ;
    char name[20];
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s-1-i; j++)
        {
            if (Earr[j].salary < Earr[j+1].salary)
            {
                temp = Earr[j];
                Earr[j]= Earr[j+1];
                Earr[j+1] = temp;
            }
            
        }
        
    }
    for (int k = 0; k < s; k++)
    {
        PrintEmp(Earr[k]);
    }
    
}
void ArrangeByName(struct Employee *Earr,int size);
void PrintTime(struct Time *t,int size);
void Sin(struct Student *sptr);
void Sout(struct Student *sptr);
void Stud_input(struct stud *ptr);
float CalculateAve(struct stud *ptr);
int main()
{
    int flag = 1 ,count = 0;
    struct Time t[2];
    struct Employee E1;
    struct Employee Earr[10];
    struct Student Sarr[10];
    struct stud S[5];
    /*
    for (int i = 0; i < 10; i++)
    {
        Earr[i] = InputEmp();
        printf("\n");
    }
    ArrangeBySalary(Earr,10);
    //psroblem 6
    //arrange the data of employee according to their name
    for (int i = 0; i < 10; i++)
    {
        Earr[i] = InputEmp();
        printf("\n");
    }
    ArrangeByName(Earr,10);
    for (int i = 0; i < 10; i++)
    {
        PrintEmp(Earr[i]);
    }
    //problem 7
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the time : HH:MM:SS");
        printf("\nNOTE:the minute and secends must be smaller than 60,it's a logical thing\n");
        flag = 1 ;
        while (flag)
        {
            scanf("%d  %d  %d",&t[i].hrs,&t[i].min,&t[i].sec);
            if ((t[i].min > 59) || (t[i].sec > 59))
            {
                printf("Invalid input !!\nenter again\n");
            }
            else
            flag = 0 ;
        }
    }
   // PrintTime(t,2);
    t[0] =  CalculateTimeDiff(t[0],t[1]);
    printf("%d:%d:%d\n",t[0].hrs,t[0].min,t[0].sec);
    //problem 8
    //storing information of 10 students and display
    printf("Enter the number of students :\n");
    scanf("%d",&count);
    for (int i = 0; i < count; i++)
    {
        Sin(&Sarr[i]);
    }
    for (int i = 0; i < count; i++)
    {
        Sout(&Sarr[i]);
    }
    */
    //problem 10
    printf("Enter the data of 5 students\n");
    for (int i = 0; i < 5; i++)
    {
        Stud_input(&S[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("The average of %s is %f\n",S[i].Name,CalculateAve(&S[i]));
    }
    
    
    return 0;
}

void PrintTime(struct Time *t,int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d/%d/%d\n",t[i].hrs,t[i].min,t[i].sec);
    }
}
void ArrangeByName(struct Employee *Earr,int size)
{
    struct Employee temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (Earr[j].name[0] > Earr[j+1].name[0])
            {
                temp = Earr[j];
                Earr[j]= Earr[j+1];
                Earr[j+1] = temp;
            }
            
        }
        
    }
}
struct Time CalculateTimeDiff(struct Time t1,struct Time t2)
{
    struct Time temp;
    temp.hrs = t1.hrs - t2.hrs;
    temp.min = t1.min - t2.min;
    temp.sec = t1.sec - t2.sec;
    return temp;
}
void Sin(struct Student *sptr)
{
    int flag = 1 ;
    printf("S_id:");
    scanf("%d",&sptr->S_id);
    flag = 1;
    while (flag)
    {
    printf("Year:");
    scanf("%d",&sptr->year);
    if (sptr->year > 5)
    {
        printf("The year must be smaller than 5\n");
        flag = 1;
    }
    else
    flag = 0 ;
    }
    printf("Name:");
    fflush(stdin);
    fgets(sptr->name,20,stdin);
    printf("Sports:");
    fgets(sptr->Sports,20,stdin);
    printf("\n");
}
void Sout(struct Student *sptr)
{
    printf("S_id:%d \nYear:%d\nName:%s \nsports:%s\n",sptr->S_id,sptr->year,sptr->name,sptr->Sports);
}
void Stud_input(struct stud *ptr)
{
    printf("Roll No:");
    scanf("%d",&ptr->Roll_no);
    printf("Name:");
    fflush(stdin);
    fgets(ptr->Name,20,stdin);
    printf("Chem Marks");
    scanf("%f",&ptr->chem_marks);
    printf("Maths Marks:");
    scanf("%f",&ptr->maths_marks);
    printf("Physics Marks");
    scanf("%f",&ptr->phy_marks);
}
float CalculateAve(struct stud *ptr)
{
    float average = (ptr->chem_marks+ptr->maths_marks+ptr->phy_marks)/3;
    return average;
}