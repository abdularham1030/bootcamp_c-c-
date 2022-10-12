// assingment 31_9 ka 5 question
#include<iostream>
#include<string.h>
using namespace std;
class Item
{
    protected:
    int ItemNO;
    char name[30];
    float price;
    public:
    void SetItemNO()
    {
        int x ;
        cout<<"Enter the Item NO:";
        cin>>x;
        ItemNO = x;
    }
    void SetName()
    {
        char N[30];
        cout<<"Enter the name of item:";
        fgets(N,30,stdin);
        strcpy(name,N);
    }
    void SetPrice()
    {
        float P;
        cout<<"Enter the price:";
        cin>>P;
        price = P;
    }
    void GetItemNo()
    {
        cout<<"Item No:"<<ItemNO<<endl;
    }
    void GetName()
    {
        cout<<"Item Name:"<<name;
    }
    void Getprice()
    {
        cout<<"Item price:"<<price<<endl;
    }
};
class DiscountedItem : public Item
{
    protected:
    float discountPercent;
    float Discountprice;
    public:
    void SetDiscountedPercentage()
    {
        float dis;
        cout<<"Enter the discount percent:";
        cin>>dis;
        discountPercent = dis;
    }
    void SetDiscountPrice()
    {
        Discountprice = price - ((price/100)*discountPercent) ;
    }
    void GetDiscountPrice()
    {
        cout<<"Discoutn Price:"<<Discountprice<<endl;
    }
    void Getdiscountpercent()
    {
        cout<<"Discount Percent:"<<discountPercent<<endl;
    }
    friend void totalDiscount(DiscountedItem *ptr,int size);
};
void totalDiscount(DiscountedItem *ptr,int size)
{
    float TotalPrice = 0,TotalDiscount = 0;
    for (int i = 0; i < size; i++)
    {
        TotalPrice = TotalPrice + ptr[i].price;
        TotalDiscount = TotalDiscount + ptr[i].Discountprice;
    }
    cout<<"Total price: "<<TotalPrice<<endl;
    cout<<"Total discount :"<<TotalDiscount<<endl;

}
class base
{
    protected:
    int x;
    public:
    void setx()
    {
        x = 10 ;
    }
    void showx()
    {
        cout<<"x :"<<x<<endl;
    }

};
class Derived : public base
{
    protected:
    int y ;
    public:
    void sety()
    {
        y = 20 ;
    }
    void showy()
    {
        cout<<"Y:"<<y<<endl;
    }
    friend void exchange(Derived *t);
};  
void exchange(Derived *t)
{
    int temp;
    temp = t->x;
    t->x = t->y;
    t->y = temp;
}
class Employee
{
    protected:
    char Name[20];
    public:
    int emp_code;
    void Setemp_code()
    {
        int x = 0;
        cout<<"Emp code:";
        //fflush(stdin);
        cin>>x;
        emp_code = x ;
    }
    void SetName()
    {
        char y[20];
        cout<<"Name:";
        fgets(y,20,stdin);
        strcpy(Name,y);
    }
    void Getemp_code()
    {
        cout<<"Emp Code:"<<emp_code<<endl;
    }
    void GetName()
    {
        cout<<"Name :"<<Name<<endl;
    }
};
class Fulltime : public Employee
{
    protected:
    float DalyRate ;
    int NUmberOFDays;
    float Salary ;
    public:
    int status;
    void setstatus()
    {
        int s;
        cout<<"status (1 for fulltime and 0 for part time):";
        cin>>s;
        status = s;
    }
    void SetDalyRate()
    {
        float x ;
        cout<<"Daly Rate:";
        cin>>x;
        DalyRate = x;
    }
    void SetNumberOfDays()
    {
        int y;
        cout<<"Number of days:";
        cin>>y;
        NUmberOFDays = y;
    }
    void SetSalary()
    {
        int z;
        cout<<"Salalry:";
        cin>>z;
        Salary = z;
    }
    void getSetDalyRate()
    {
        cout<<"Daly rate :"<<DalyRate<<endl;
    }
    void getnumberofdays()
    {
        cout<<"Number OF days:"<<NUmberOFDays<<endl;
    }
    void getSalary()
    {
        cout<<"Salary:"<<Salary<<endl;
    }
};
class PartTime : public Fulltime
{
    protected:
    float NumberOfWorkingHours;
    float hourlyRate;
   // float Salary;
    public:
    void SethourlyRate()
    {
        float x ;
        cout<<"hourly Rate:";
        cin>>x;
        hourlyRate = x;
    }
    void SetNumberOfWorkingHours()
    {
        int y;
        cout<<"Number of working hours:";
        cin>>y;
        NumberOfWorkingHours = y;
    }
    void getnumberofWorkingHours()
    {
        cout<<"Number OF working hours:"<<NumberOfWorkingHours<<endl;
    }
    void getSetDalyRate()
    {
        cout<<"hourly rate :"<<hourlyRate<<endl;
    }
};




int main()
{
    int ItemCount;
    int empcount;
    /*
    cout<<"Enter the number of item :";
    cin>>ItemCount;
    DiscountedItem *ptr = new DiscountedItem[ItemCount];
    for (int i = 0; i < ItemCount; i++)
    {
        fflush(stdin);
        ptr[i].SetName();
        ptr[i].SetItemNO();
        ptr[i].SetPrice();
        ptr[i].SetDiscountedPercentage();
        cout<<"---------------------------------------"<<endl;
    }
    for (int i = 0; i < ItemCount; i++)
    {
        ptr[i].GetName();
        ptr[i].GetItemNo();
        ptr[i].Getprice();
        ptr[i].Getdiscountpercent();
        ptr[i].SetDiscountPrice();
        ptr[i].GetDiscountPrice();       
        cout<<"---------------------------------------"<<endl;
    }
    totalDiscount(ptr,ItemCount);
    //problem 6
    //swap the protected members to calsses with the help of friend function
    Derived D1;
    D1.setx();
    D1.sety();
    D1.showx();
    D1.showy();

    exchange(&D1);
    cout<<"After exchange function call\n";
    D1.showx();
    D1.showy();
    */
    //problem 7
    int menu;
    int code;
    cout<<"Enter how many employee you want: ";
    cin>>empcount;
    PartTime *q = new PartTime[empcount];
    // q->Getemp_code();
    for (int i = 0; i < empcount; i++)
    {
        q[i].setstatus();
        if (q[i].status == 1)
        {
            cout<<"ENter the details of employee "<<i+1<<endl;
            q[i].Setemp_code();
            fflush(stdin);
            q[i].SetName();
            q[i].SetDalyRate();
            q[i].SetNumberOfDays();
            q[i].SetSalary();
            cout<<"----------------------------------"<<endl;
        }
        else
        {
            cout<<"ENter the details of employee "<<i+1<<endl;
            q[i].Setemp_code();
            fflush(stdin);
            q[i].SetName();
            q[i].SethourlyRate();
            q[i].SetNumberOfWorkingHours();
            q[i].SetSalary();
            cout<<"----------------------------------"<<endl;
        }
    }

    



    // To display all 
        while (1)
        {
        cout<<"1.Display Record\n2.search Record\n3.Quit\n";
        cout<<"Enter your choise :";
        cin>>menu;
        switch (menu)
        {
        case 1:
            for(int i = 0 ;i < empcount ;i++)
            {
                if(q[i].status==1)
                {
                    cout<<"----------------------------"<<endl;
                    q[i].Getemp_code();
                    cout<<"\n";
                    q[i].GetName();
                    cout<<"\n";
                    q[i].getSalary();
                    cout<<"\n";
                    cout<<"Status : Fulltime"<<endl;
                }
                else
                {
                    cout<<"----------------------------"<<endl;
                    q[i].Getemp_code();
                    cout<<"\n";
                    q[i].GetName();
                    cout<<"\n";
                    q[i].getSalary();
                    cout<<"\n";
                    cout<<"Status : Fulltime"<<endl;
                }
            }
            break;
        case 2:
            cout<<"Enter the employee code:";
            cin>>code;
            for (int i = 0; i < empcount; i++)
            {
                if (q[i].emp_code == code)
                {
                    cout<<"----------------------------"<<endl;
                    q[i].Getemp_code();
                    cout<<"\n";
                    q[i].GetName();
                    cout<<"\n";
                    q[i].getSalary();
                    cout<<"\n";
                    cout<<"Status : Fulltime"<<endl;
                    break; 
                }
                
            }
            break;
        case 3:
            return 0;
        default:
            break;
        }
        }
    // delete(ptr);
    return 0;
}