#include <iostream>
#include<string.h>
using namespace std;
class Person
{
    char name[30];
    int age;
    public:
    void setname(char n[30])
    {
        strcpy(name,n);
    }
    void setage(int x )
    {
        age = x;
    }
    void getname()
    {
        cout<<name<<endl;
    }
    void getage()
    {
        cout<<"Age:"<<age<<endl;
    }
};
class Employee : public Person
{
    int salary;
    int emp_id;
    public:
    void setsalary(int x )
    {
        salary = x;
    }
    void setempId(int x )
    {
        emp_id = x;
    }
    void getsalary()
    {
        cout<<"Salary:"<<salary<<endl;
    }
    void getempId()
    {
        cout<<"Emp_id:"<<emp_id<<endl;
    }
};
class Add1
{
    public:
    int a , b,sum;
   void taketotal()
   {
        a = 10 ; 
        b = 20 ;
        sum = a + b;
   }

};
class Add2 : public Add1
{
    public:
    void printSum()
    {
        cout<<"Sum:"<<sum<<endl;
    }
};
class student_marks
{
    protected:
    int chem ;
    int phy ;
    int maths;
    public:
    void set_Marks()
    {
        cout<<"Enter the maks obtain in 3 sub:\n";
        cin>>chem>>phy>>maths;
    }
};
class total_marks : public student_marks
{
    public:
    int t;

    void total()
    {
        t = chem + phy + maths;
    }
};
class Marks_percentage : public total_marks
{
    public:
    int ava;
    void setavarage()
    {
        ava = t / 3;
    }
    void getavarage()
    {
        cout<<"the avarage :"<<ava<<endl;
    }
};

int main ()
{
    Add2 a2;
    a2.taketotal();
    a2.printSum();
    //Marks_percentage s1;
    //s1.set_Marks();
    //s1.total();
    //s1.setavarage();
    //s1.getavarage();

    return 0;
}