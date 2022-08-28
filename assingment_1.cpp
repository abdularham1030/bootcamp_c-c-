#include<iostream>
using namespace std;
int main()
{
    //problem 1
    cout<<"hello arham \n";
    // problem 2
    cout << "hell "<< endl << "MysirG.com" << endl;
    // problem 3
    int a = 10 , b= 22;
    cout << a+b<<endl;
    // problem 4
    int r  =  20;
    float pi = 3.41;
    // problem 5 
    cout << pi*r*r<<endl;
    int l = 10, k = 10, h = 10 ;
    cout << l*k*h<<endl;
    // problem 6
    int c  =  5;
    cout << (a+b+c)/3 << endl;
    // problem 7
    cout << a*a << endl;
    // problem 8
    a += b;
    b  = a - b;
    a =  a - b;
    cout << a << endl << b << endl;
    // problem 9
    if(a < b)
    {
        cout << "b is greater"<< endl;
    }
    else
    cout << "a is greater "<< endl;

    // problem 10
    int arr[10] = {2,131,53,252,46,313,52,31,42,5};
    int i , sum = 0;
    for ( i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum << endl;
    

 
}