//assingment 31_9 ka 4th question 
#include<iostream>
#include<string.h>

using namespace std;
class Person
{
    protected:
    int phone_no;
    char name[30];
    char address[50];
    public:
    void SetPhoneNo()
    {
        int x;
        cout<<"Enter Employee phone number:";
        cin>>phone_no;
        phone_no = x;
    }
    void SetName()
    {
        char N[30];
        cout<<"Enter Employee name:";
        fgets(N,30,stdin);
        strcpy(name,N);
    }
    void SetAddress()
    {
        char ADD[50];
        cout<<"Enter the address:";
        fgets(ADD,50,stdin);
        strcpy(address,ADD);

    }
    void GetPhoneNo()
    {
        cout<<phone_no<<endl;
    }
    void GetName()
    {
        cout<<name<<endl;
    }
    void GetAddress()
    {
        cout<<address<<endl;
    }
};
class Employee : public Person
{
    protected:
    int E_no;
    char E_name[30];
    public:
    void SetE_name()
    {
        char N[30];
        cout<<"Enter Employee Name:";
        fgets(N,30,stdin);
        strcpy(E_name,N);
    }
    void SetE_no( )
    {
        int x;
        cout<<"Enter Employee number:";
        cin>>x;
        E_no = x;
    }
    void GetE_name()
    {
        cout<<E_name<<endl;
    }
    void GetE_no()
    {
        cout<<E_no<<endl;
    }
};
class Manager : public Employee
{
    private:
    char DesigNation[20];
    char DepartmentName[30];
    float BasicSalary;
    public:
    //int count;
    void SetDesignatioin()
    {
        char Des[20];
        cout<<"Enter the Designation name:";
        fgets(Des,20,stdin);
        strcpy(DesigNation,Des);
    }
    void SetDepartmentName()
    {
        char Dep[30];
        cout<<"Enter the Department name:";
        fgets(Dep,30,stdin);
        strcpy(DepartmentName,Dep);
    }
     void setbasicSalary()
        {
            float x ;
            cout<<"Enter Basic Salary:";
            cin>>x;
            BasicSalary = x ;
        }
    void GetDesignation()
    {
        cout<<DesigNation<<endl;
    }
    void getDepartment()
    {
        cout<<DepartmentName<<endl;
    }
    void GetBasicSalayr()
    {
        cout<<BasicSalary<<endl;
    }
    friend void MaxSalary(Manager arr[],int size);
};
void MaxSalary(Manager arr[],int size)
{
    float max = 0;
    char MaxName[30];
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i].BasicSalary)
        {
            max = arr[i].BasicSalary;
            strcpy(MaxName,arr[i].name);
        }
        
    }
    cout<<"--------------------------------------\n"<<"THe greatest Salary is "<<max<<endl;
    cout<<"And the employee name is "<<MaxName<<endl;
    }
int main()
{
    int ManagerCount = 0 ;
    cout<<"How many managers you want:"<<endl;
    cin>>ManagerCount;
    Manager *ptr;
    ptr = new Manager[ManagerCount];
    for(int i = 0; i < ManagerCount; i++)
    {
        cout<<"Enter the details of manager :"<<i+1<<endl;
        cout<<"--------------------------------------"<<endl;
        //cout<<"Enter employee number:";
        //cin>>ptr->GetE_no();
        //ptr->SetE_no();
        fflush(stdin);
        ptr[i].SetName();
        //ptr->SetAddress();
        //ptr->SetPhoneNo();
        //fflush(stdin);
        //ptr->SetDesignatioin();
      //  ptr->SetDepartmentName();
        ptr[i].setbasicSalary();
        fflush(stdin);
        
    }

    MaxSalary(ptr,ManagerCount);
    //cout<<"hello";
    delete(ptr);
    return 0;
}       