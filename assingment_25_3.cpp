#include<iostream>
using namespace std;
class Complex
{
    private:
    int imag;
    int real;
    public:
    void setdata(int x, int y)
    {
        real = x ;
        imag = y ;
    }
    void getdata()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
class Time
{
    private:
    int hour,min,sec;
    public:
    void setTime(int x , int y , int z )
    {
        hour = x ;
        min = y ;
        sec = z;
    }
    void getTime()
    {
        cout<<hour<<" hr "<<min<<" min "<<sec<<" sec \n";
    }
};
class Factorial
{
    public:
    int Fact(int x)
    {
        int f = 1;
        for (int i = 1; i <= x; i++)
        {
            f = f*i;
        }
        return f;
    }
};
class LargestNumber
{
    public:
    int LrgNum(int x, int y, int z)
    {
        if (x>y)
        {
            if (x>z)
            {
                return x;
            }
            else
            return z;
        }
        else
        {
            if (y > z)
            {
                return y;
            }
            else
            return z;
            
        }
        
        return 0;
    }
};
class Square
{
    public:
    void sq(int x)
    {
        x = x*x;
        cout<<"square:"<<x<<endl;
    }
};
class ReverseNumber
{
    public:
    int revNum(int x)
    {
        int last = 0 ;
        int temp = 0 ;
        while (x)
        {
            last = x % 10;
            //cout<<last<<endl;
            temp = last + temp;
            //cout<<temp<<endl;
            x = x /10 ;
            //cout<<x<<endl;
            temp = temp * 10 ;
            //cout<<temp<<endl;
        }
        return temp;
    }
};
class Area
{
    public:
    void circle(int x)
    {
        x = 3.14*x*x;
        cout<<"the area of circle :"<<x<<endl;
    }
    void rectangle(int x , int y )
    {
        int temp = x*y;
        cout<<"The area of rectangle :"<<temp<<endl;
    }
    void triangle(int x , int y )
    {
        float tem = (x*y*0.5);
        cout<<"TEh area of triagle :"<<tem<<endl;
    }
};
int main()
{
    int count = 0 ;
    Complex c1;
    c1.setdata(2,5);
    count++;
    c1.getdata();
    count++;
    Time t1;
    t1.setTime(5,44,59);
    count++;
    t1.getTime();
    count++;
    Factorial f1;
    cout<<f1.Fact(5)<<endl;
    count++;
    LargestNumber l1;
    cout<<l1.LrgNum(1000 , 1080, 999)<<endl;
    count++;
    ReverseNumber r1;
    cout<<r1.revNum(34567)<<endl;
    count++;
    Square s1;
    s1.sq(5);
    count++;
    cout<<"the total function call :"<<count<<endl;
    Area a1;
    a1.circle(5);
    a1.rectangle(5,5);
    a1.triangle(5,5);
    return 0;
}