#include<iostream>
using namespace std;
class complex
{
    private:
    int x , y;
    public:
    void setcomplex(int a , int b)
    {
        x = a ;
        y = b;
    }
    void getcomplex()
    {
        cout<<x<<"+"<<y<<"i"<<endl;
    }
    complex operator+(complex c)
    {
        complex t;
        t.x = x + c.x;
        t.y = y + c.y;
        return t;
    }
    complex()
    {
        cout<<"default constructor called\n";
    }
    complex(const complex &c)
    {
        cout<<"copy constructor called!\n";
        x = c.x;
        y = c.y;
    }
    complex(int a , int b )
    {
        cout<<"parameterise constructor called \n";
        x = a ;
        y = b ; 
    }
};
int main ()
{
    complex c1,c4(3,4);
    c1.setcomplex(5,5);
    c1.getcomplex();
    // c2.setcomplex(2,4);
    // c2.getcomplex();
    complex c2 = c1;
    complex c3 = c1 + c2;
    c4.getcomplex();
    //c4.complex(3,9);
    c3.getcomplex();
    return 0;
}