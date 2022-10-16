#include<iostream>
#include<stdio.h>
using namespace std;
class complex
{
    private:
    int a , b;
    public:
    void SetData(int x , int y )
    {
        // int x, y;
        // cout<<"real:";
        // cin>>x;
        a = x;
        // cout<<"\nImagnary:";
        // cin>>y;
        b = y;
    } 
    void Showdata()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
    complex add(complex c)
    {
        complex t;
        t.a = a + c.a;
        t.b = b + c.b;
        return t;
    }
};
class Time
{
    private:
    int h,m,s;
    public:
    void setTime(int x, int y, int z)
    {
        h = x;
        m = y;
        z = s;
    }
    void showTime()
    {
        cout<<h<<":"<<m<<":"<<s<<endl;
    }
    void Normalize()
    {
        m = m + s/60;
        s = s%60;
        h = h + m /60;
        m = m % 60;
    }
    Time add(Time t)
    {
        Time temp;
        temp.h = h + t.h;
        temp.m = m + t.m;
        temp.s = s + t.s;
        return temp;
    }
};
class Cube
{
    private:
    int x ;
    public:
    Cube()
    {
        x = 5;
        cout<<"constructor called "<<endl;
        cout<<x<<endl;
    }
    void showcube()
    {
        cout<<x<<endl;
    }
    void CalculateVolume()
    {
        x = x*x*x;
    }
};
class date
{
    private:
    int x , y , z;
    public:
    date()
    {
        cout<<"YYYY/MM/DD"<<endl;
        cin>>x>>y>>z;
    }
    void showDate()
    {
        cout<<x<<"/"<<y<<"/"<<z<<endl;
    }
};
class student 
{
    private:
    int roll_no;
    char Name[30];
    float pointer;
    int year;
    public:
    student()
    {
        fflush(stdin);
        cout<<"Name:";
        fgets(Name,30,stdin);
        cout<<"roll no :";
        cin>>roll_no;
        cout<<"CGPA:";
        cin>>pointer;
        cout<<"Year:";
        cin>>year;
        
    }
    void ShowData()
    {
        cout<<"------------------------------------------"<<endl;
        cout<<"Name:"<<Name;
        cout<<"Roll_No:"<<roll_no<<endl;
        cout<<"CGPA:"<<pointer<<endl;
        cout<<"Year:"<<year<<endl;
    }
    
};
class Box
{
    private:
    float length,bredth,hight;
    public:
    Box()
    {
        cout<<"Length:";
        cin>>length;
        cout<<"Bredth:";
        cin>>bredth;
        cout<<"hight:";
        cin>>hight;
    }

    float CalculateVolume()
    {
        float vol = hight*bredth*length;
        return vol;
    }
    
};
class bank
{
    private:
    float principle, rate, time;
    public:
    bank()
    {
        cout<<"Enter the rate of intrest:";
        cin>>rate;
        cout<<"Enter the principle:";
        cin>>principle;
        cout<<"Enter the time :";
        cin>>time;
    }
    float simpleintrest()
    {
        float res=(principle*rate*time)/100;
        return res;
    }
};
class bill
{
    private:
    char Name[30];
    int unit;
    public:
    void Getdata()
    {
        cout<<"Name:";
        fgets(Name,30,stdin);
        cout<<"unit amount:";
        cin>>unit;
    }
    void calculateBill()
    {
        if (unit<=100)
        {
            unit = unit*1.2;
        }
        else if(unit>100&&unit<=200)
        {
            unit = unit*2;
        }
        else
        unit = unit * 3;
        
        cout<<"THe total bill is :"<<unit<<endl;
    }
};

int main ()
{
    // complex c1,c2;
    // c1.SetData(5,8);
    // c1.Showdata();
    // c2.SetData(2,6);
    // c2.Showdata();
    // c1 = c1.add(c2);
    // c1.Showdata();
    // Time t1 , t2;
    // t1.setTime(15,153,87);
    // t1.Normalize();
    // t1.showTime();
    // t2.setTime(12,43,123);
    // t2.Normalize();
    // t2.showTime();
    // t1 = t1.add(t2);
    // t1.showTime();
    // Cube s1;
    // s1.showcube();
    // s1.CalculateVolume();
    // s1.showcube();
    // date d1;
    // d1.showDate();
    // student stud1;
    // stud1.ShowData();
    // float volume;
    // Box b;
    // volume = b.CalculateVolume();
    // cout<<"Volume:"<<volume<<endl;
    // float result ;
    // bank cous;
    // result = cous.simpleintrest();
    // cout<<"simple intrest :"<<result<<endl;
    bill unit;
    unit.Getdata();
    unit.calculateBill();
    return 0;
}