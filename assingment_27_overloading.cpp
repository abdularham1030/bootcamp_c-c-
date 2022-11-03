#include<iostream>
#include<cstring>
using namespace std;
class Time
{
    private:
    int hours;
    int min;
    int sec;
    public:
    // void setTime()
    // {
    //     int  x,z,y;
    //     cout<<"HOURS:";
    //     cin>>x;
    //     cout<<"MIN:";
    //     cin>>y;
    //     cout<<"SEC:";
    //     cin>>z;
    //     hours = x ;
    //     min = y ;
    //     sec = z;
    // }
    void getTime()
    {
        cout<<hours<<':'<<min<<':'<<sec<<endl;
    }
    bool operator==(Time t)
    {
        if (hours == t.hours && min == t.min && sec == t.sec)
        {
            return true;
        }
        else 
        return false;
    }
    friend istream & operator>>(istream &write , Time &t);
    friend ostream & operator<<(ostream &print , Time t);
};
ostream & operator<<(ostream &print , Time t)
{
    print<<t.hours<<":"<<t.min<<":"<<t.sec<<endl;
    return print;
}
istream & operator>>(istream &write , Time &t)
{
    cout<<"HOURS:";
    write>>t.hours;
    cout<<"MIN:";
    write>>t.min;
    cout<<"SEC:";
    write>>t.sec;
    return write;
}
class Complex
{
    private:
    int a ;
    int b ;
    public:
    void setdata(int x, int y)
    {
        a = x;
        b = y ;
    }
    void getdata()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
    // Complex operator+(Complex c)
    // {
    //     Complex x;
    //     x.a = a + c.a;
    //     x.b = b + c.b;
    //     return x;
    // }
    Complex operator-(Complex c)
    {
        Complex x;
        x.a = a - c.a;
        x.b = b - c.b;
        return x;
    }
    Complex operator*(Complex c)
    {
        Complex x;
        x.a = a * c.a;
        x.b = b * c.b;
        return x;
    }
    bool operator==(Complex c)
    {
        if (a == c.a && b == c.b)
        {
            return true;
        }
        return false;
    }
    void operator++(int)
    {
        a++;
        b++;
    }
    void operator--(int)
    {
        a--;
        b--;
    }
    friend Complex operator+(Complex c,Complex ct);
};
Complex operator+(Complex c,Complex ct)
    {
        Complex x;
        x.a = c.a + ct.a;
        x.b = c.b + ct.b;
        return x;
    }
class Numbers
{
    private:
    int x,y,z;
    public:
    void setData()
    {
        cout<<"Enter three numbers:";
        cin>>x>>y>>z;
    }
    void getDate()
    {
        cout<<"x:"<<x<<" y:"<<y<<" z:"<<z<<endl;
    }
    void operator-()
    {
        x = -1*x;
        y = -1*y;
        z = -1*z;
    }
};
class Cstring
{
    private:
    char string[100];
    public:
    void stestring()
    {
        cout<<"Enter a string:";
        gets(string);
    }
    void getstring()
    {
        cout<<string<<endl;
    }
    Cstring operator+(Cstring s)
    {
        Cstring t;
        strcpy(t.string,strcat(string,s.string));
        return t;
    }
    bool operator==(Cstring s)
    {
        cout<<"operator == called"<<endl;
        int x = strlen(string);
        // cout<<x; 
        int y = strlen(s.string);
        // cout<<" "<<y;
        int z = x - y;
        // cout<<" "<<z;
        if(z == 0 )
        {
            return true;
        }
        return false;

    }
};
class Farction
{
    private:
    long numerator;
    long denominator; 
    public:
    Farction(long n=0, long d=0)
    {
        cout<<"parameterise constructur called"<<endl;
        numerator = n;
        denominator = d;
    }
    // void setfraction()
    // {
        
    // }
    // void getfraction()
    // {
    //     cout<<numerator<<"/"<<denominator<<endl;
    // }
    friend ostream & operator<<(ostream &print,Farction f);
    friend istream & operator>>(istream &write,Farction &f);
    void operator++(int)
    {
        numerator++;
        denominator++;
    }
    void operator++()
    {
        numerator++;
        denominator++;
    }
};
ostream & operator<<(ostream &print,Farction f)
    {
        print<<f.numerator<<"/"<<f.denominator<<endl;
        return print;
    }
istream & operator>>(istream &write,Farction &f)
    {
        int n , d ;
        // cout<<"enter the fraction"<<endl;
        cout<<"numerator    :";
        cin>>n;
        cout<<"denomiinator :";
        cin>>d;
        f.numerator = n;
        f.denominator = d;
        return write;
    }
class Matrix
{
    private:
    int a[3][3];
    public:
    void setmatrix()
    {
        cout<<"Enter the elements of array:"<<endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin>>a[i][j];
            }
            
        }
        
    }
    void getmatrix()
    {
        static int x = 1;
        cout<<"The elements of matrix "<<x<<" are:"<<endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout<<a[i][j]<<"    ";
            } 
            cout<<endl;   
        }
        cout<<endl;
        x++;
    }
    void operator-()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                a[i][j] = -1 * a[i][j];
            }    
        }
    }
    Matrix operator+(Matrix m)
    {
        Matrix temp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                temp.a[i][j] = a[i][j] + m.a[i][j];
            }
            
        }
        return temp;
    }
};
class Mystring
{
    private:
    char str[100];
    public:
    void setstr()
    {
        cout<<"Enter a string:";
        fgets(str,100,stdin);
    }
    void getstr()
    {
        cout<<str;
    }
    void operator!()
    {
        int x = strlen(str);
        for (int i = 0; i < x; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'y')
            {
                str[i] = str[i] - 32;
            }
            else if (str[i] >= 'A' && str[i] <= 'A')
            {
                str[i] = str[i] + 32;
            }
            
        }
        
    }
};
int main()
{
    // Complex c1,c2,c3;
    // c1.setdata(3,7);
    // c2.setdata(5,2);
    // c1.getdata();
    // c2.getdata();
    // //  cout<<c1+c2;
    // c3 = c1 + c2;
    // c3.getdata();
    // c3 = c1 - c2;
    // c3.getdata();
    // c3 = c1 * c2;
    // c3.getdata();
    // if (c1 == c2 )
    // {
    //     cout<<"both complex numbers are equal"<<endl;
    // }
    // else
    // cout<<"not equal"<<endl;
    // c1++;
    // c2--;
    // c1.getdata();
    // c2.getdata();
    //Time t1;
    // t1.setTime();
    // t1.getTime();
    // t2.setTime();
    // t2.getTime();
    // cin>>t1;
    // if(t1 == t2)
    // cout<<"time has stoped"<<endl;
    // else
    // cout<<"Not equal"<<endl;
    // t1.getTime();
    // cout<<t1;
    // Numbers n1;
    // n1.setData();
    // n1.getDate();
    // -n1;
    // n1.getDate();
    // Cstring s1,s2,s3;
    // s1.stestring();
    // s1.getstring();
    // s2.stestring();
    // s2.getstring();
    // // s3 = s1 + s2;
    // s3.getstring();
    // if (s1 == s2)
    // {
    //     cout<<"both strings are equal!"<<endl;
    // }
    // else
    // cout<<"not equal"<<endl;
    // s3.getstring();
    // Farction f1,f2;
    // cout<<"f1    :"<<f1;
    // cout<<"f2    :"<<f2;
    // cout<<"enter 1st fraction values"<<endl;
    // cin>>f1;
    // cout<<"f1      :"<<f1;
    // f1++;
    // cout<<"f1++    :"<<f1;
    // ++f1;
    // cout<<"++f1    :"<<f1;
    // cout<<"Enter 2nd fraction valuse"<<endl;
    // cin>>f2;
    // cout<<"f2      :"<<f2;
    // f2++;
    // cout<<"f2++    :"<<f2;
    // f2 = f1;
    // ++f2;
    // cout<<"++f2    :"<<f2;
    // Matrix m1;
    // m1.setmatrix();
    // m1.getmatrix();
    // -m1;
    // m1.getmatrix();
    // Mystring st1;
    // st1.setstr();
    // st1.getstr();
    // !st1;
    // st1.getstr();
    Matrix m1,m2,m3;
    m1.setmatrix();
    m2.setmatrix();
    m1.getmatrix();
    m2.getmatrix();
    m3 = m1 + m2;
    m3.getmatrix();
    return 0;

}