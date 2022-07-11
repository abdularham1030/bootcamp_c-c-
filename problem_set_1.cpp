#include <iostream>
using namespace std;
int main()
{
int i,j,n,c=1,r;
a:
cout<<"enter the number of stpes :";
cin>>n;
r = n;
cout<<endl;
if(n>8 || n<=0)
{
    goto a;
}
for(i=0;i<n;i++)
{
    for(j=0,c=1;j<n;j++,c++)
    {
       if(c<r)
       {
       cout<<" ";
       }

       else
       cout<<" #";
    }
     r--;
    cout<<"\n";
}

    return 0;
}