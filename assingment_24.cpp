//functions in cpp.
#include<iostream>
using namespace std;
bool Prime(int x );
int HigestDigit(int x );
int CalculatePower(int x , int y);
void PascasTriangle(int x );
void SwapByrefrence(int &x , int &y);
int Addition(int, int , int = 0); 
float Area(int );
int Area(int , int );
int Area(int , int , float );
int LargeNumber(int , int );
float LargeNumber(float , float);
int Add(int m , int x);
float Add(float , float);
float Add(int , float);
int main ()
{
    int p ;
    int num, num2;
    float x , y;
    /*
    //problem 1
    cout<<"enter a number :"<<endl;
    cin>>p;
    if (Prime(p) == 1)
    {
        cout<<p<<" is a prime number "<<endl;
    }
    else
    cout<<"not a prime number";
    //problem 2
    cout<<"Enter a number :"<<endl;
    cin>>p;
    //cout<<"cin is end"<<endl;
    cout<<"the greatest digit is "<<HigestDigit(p)<<endl;
    //problem 3
    //calculate x to the power y.
    cout<<"Enter the value of x :";
    cin>>num;
    cout<<"Enter the power of x:";
    cin>>p;
    cout<<CalculatePower(num,p)<<endl;
    //problem 4
    //print pascal triangle up to N lines
    cout<<"Enter the lines of pascal triangle "<<endl;
    cin>>num;
    PascasTriangle( num);
    //problem 5
    
    //problem 6
    //swap by call by refrence
    cout<<" enter two number to swap them :"<<endl;
    cin>>num>>p;
    SwapByrefrence(num,p);
    cout<<num<<" "<<p<<endl;
    //problem 7
    // add 2 or 3 number 
    cout<<"Enter two number:\n";
    cin>>num>>num2;
    cout<<Addition(num,num2)<<endl;
    cout<<"Enter three number:"<<endl;
    cin>>num>>num2>>p;
    cout<<Addition(num,num2,p)<<endl;
    //problem 8
    cout<<"enter the radius for area\n";
    cin>>num;
    cout<<"circle:"<<Area(num)<<endl;
    cout<<"Enter the length and bredth\n";
    cin>>num>>num2;
    cout<<"reactangle:"<<Area(num,num2)<<endl;
    cout<<"Enter the length and bredth of a triangle:\n";
    cin>>num>>num2;
    cout<<"triangle:"<<Area(num,num2,2)<<endl;
    //problem 9
    cout<<"Enter 2 interger:\n";
    cin>>num>>num2;
    cout<<"large:"<<LargeNumber(num,num2)<<endl;
    cout<<"Enter 2 real number:\n";
    cin>>x>>y;
    cout<<"large:"<<LargeNumber(x,y)<<endl;
    */
    //problem 10
    cout<<"Enter two int:\n";
    cin>>num>>num2;
    cout<<"Sum:"<<Add(num,num2)<<endl;
    cout<<"Enter two float\n";
    cin>>x>>y;
    cout<<"Sum:"<<Add(x,y)<<endl;
    cout<<"Enter one int and one float:\n";
    cin>>x>>num;
    cout<<"Sum:"<<Add(num,x)<<endl;

    return 0;
}
bool Prime(int x )
{
    for(int i = 2; i < x ;i++)
    {
        if ((x % i) == 0 )
        {
            return false;
        }
        
    }
    return true;
}
int HigestDigit(int x )
{
    int max=0,temp = 0;
    int x1 = x,i = 0;
    int size;
    //cout<<x<<endl;
    while(x1)
    {
        temp = x1 % 10 ;
        size++;
        x1 = x1 / 10;
        //cout<<p;
    }
    int arr[size];
    while(x)
    {
        temp = x%10;
        arr[i] = temp;
        x = x / 10 ;
        //cout<<arr[i];
        i++;
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            //cout<<max<<endl;
        }
    }
    return max;
    
}
int CalculatePower(int x , int y)
{
    int temp = x ;
    for (int i = 0; i < y-1; i++)
    {
        x = x * temp; 
    }
    return x;   
}
void PascasTriangle(int line )
{
    int sum = 0;
    int arr[line],arrtemp[line];
    for (int i = 0; i < 2; i++)
    {
        arr[i] = 1;
        arrtemp[i] = 1;
    }
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (j == 0)
            {
                cout<<"1 ";
                arrtemp[j] = 1;
            }
            else if (j == i-1 )
            {
                cout<<"1 ";
                arrtemp[j] = 1;
            }
            else
            {
                sum = arr[j-1] + arr[j];
                cout<<sum<<" " ;
                arrtemp[j] = sum;
            }
        }
        cout<<endl;
        for (int i = 0; i < line; i++)
        {
            arr[i] = arrtemp[i] ;
        }
        
    }
    
    
}
void SwapByrefrence(int &x , int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int Addition(int x, int y , int z)
{
    return x + y + z;
}
float Area(int a )
{
    return 3.14*a*a;
}
int Area(int a , int b)
{
    return a*b;
}
int Area(int a , int b , float c)
{
    return (a*b)/c;
}
int LargeNumber(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else 
    return y;
}
float LargeNumber(float x , float y)
{
    if(x > y)
    {
        return x;
    }
    else
    return y;
}
int Add(int x , int y)
{
    return x+y;
}
float Add(float x , float y)
{
    return x+y;
}
float Add(int x , float y)
{
    return (float)x+y;
}
