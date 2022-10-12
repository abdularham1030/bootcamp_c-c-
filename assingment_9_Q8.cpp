#include<iostream>
#include<string.h>
using namespace std;
class Customer
{
    protected:
    long PhoneNO;
    char Name[30];
    public:
    void SetName()
    {
        char N[30];
        cout<<"Name:";
        fgets(N,30,stdin);
        strcpy(Name,N);
    }
    void SetPhoneNo()
    {
        long PNO;
        cout<<"Phone number:";
        cin>>PNO;
        PhoneNO = PNO; 
    }
    void GetName()
    {
        cout<<"Name:"<<Name;
    }
    void GetPhoneNUber()
    {
        cout<<"Phone number:"<<PhoneNO<<endl;
    }
};
class Depositor : public Customer
{
    protected:
    int acc_no;
    int balance;
    public:
    void SetAcc_no()
    {
        int a;
        cout<<"Account number  :";
        cin>>a;
        acc_no = a;
    }
    void SetBalance()
    {
        int b;
        cout<<"Balance:";
        cin>>b;
        balance = b;
    }
    void GetBalance()
    {
        cout<<balance<<endl;
    }
    void Getacc_no()
    {
        cout<<acc_no<<endl;
    }
};
class Borrower : public Depositor
{
    protected:
    int loan_num;
    int loan_amt;
    public:
    void SetloanNUMber()
    {
        int x ;
        cout<<"Loan number:";
        cin>>x;
        loan_num = x;
    }
    void SetLoanAmt()
    {
        int x ;
        cout<<"Loan Amount:";
        cin>>x;
        loan_amt = x;
    }
    void getloan_amt()
    {
        cout<<loan_amt<<endl;

    }
    void getloan_number()
    {
        cout<<loan_num<<endl;
    }
};

int main()
{
    int numberOfcustomer;
    cout<<"Enter the number of customers:";
    cin>>numberOfcustomer;
    Borrower *ptr = new Borrower[numberOfcustomer];
    for (int i = 0; i < numberOfcustomer; i++)
    {
        fflush(stdin);
        ptr[i].SetName();
        ptr[i].SetPhoneNo();
        ptr[i].SetAcc_no();
        ptr[i].SetBalance();
        ptr[i].SetloanNUMber();
        ptr[i].SetLoanAmt(); 
    }
    cout<<"Details of Customer:\n";
    for (int i = 0; i < numberOfcustomer; i++)
    {
        ptr[i].GetName();
        ptr[i].GetPhoneNUber();
        ptr[i].Getacc_no();
        ptr[i].GetBalance();
    }
    
    return 0;
}