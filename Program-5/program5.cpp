#include<iostream>
#include <stdlib.h>
#include<time.h>
#include<math.h>

using namespace std;

class ACCOUNT{
    string Acc_name;
    long int Acc_no;
    string IFSC;
    int Age;
    long int Aadhar_no;
    long int Phone_no;
    int Balance;
    
    private:
        void creteAccount()
        {
            srand(time(0));
            Acc_no = rand();
            cout<<"-------------------------------------------------------------------"<<endl;
            display("Your Account is generated with Account Number => "+to_string(Acc_no));
            cout<<"-------------------------------------------------------------------"<<endl;            
        }
    
    public:
        ACCOUNT(string name,int age,long int aadhar_no,long int phone)
        {
            Acc_name = name;   
            Age = age;
            Aadhar_no = aadhar_no;
            Phone_no = phone;
            IFSC = "SOIN0034022";
            Balance = 0;
            creteAccount();
        }

        void getDetails(){
            display("Name Of Account Holder => "+Acc_name);
            display("Age => "+to_string(Age));
            display("Phone Number => "+to_string(Phone_no));
            display("Aadhar Number => "+to_string(Aadhar_no));
            display("Account Number => "+to_string(Acc_no));
            display("IFSC Code => "+IFSC);
        }
        void getBalance(){
            display("Available Balance => "+to_string(Balance));
        }

        void display(string text)
        {
            cout<<text<<endl;
        }

        void deposit()
        {
            int amountDeposit;
            cout<<"Enter Amount To Deposit : ";
            cin>>amountDeposit;
            Balance = Balance+amountDeposit;
        }

        void withdraw()
        {
            int amountWithdraw;
            cout<<"Enter Amount To Withdraw : ";
            cin>>amountWithdraw;
            if (Balance>=amountWithdraw)
            {
                Balance = Balance-amountWithdraw;
                display("Now Your Available Balance Of Account => "+to_string(Balance));
            }
            else
                display("You have Insufficient Balance in your Account to Withdraw");
        }
        void interest()
        {
            int principle = Balance;
            double rate = 10.25, time = 1;
            double CI = principle * (pow((1 + rate / 100), time)) - Balance;
            display("Your Compound Interest For 1 Year => "+to_string(CI));
        }
};

int main()
{
    string name;
    int age,op;
    long int aadhar_no,phone_no;
    cout<<"\nEnter Your Name : ";
    cin>>name;
    cout<<"\nEnter Your Age : ";
    cin>>age;
    cout<<"\nEnter Your Aadhar Number : ";
    cin>>aadhar_no;
    cout<<"\nEnter Your Phone Number : ";
    cin>>phone_no;
    ACCOUNT a(name,age,aadhar_no,phone_no);

    cout<<"\n\tPress following keys to preform following Information ."<<endl;
    cout<<"1 => Details \t 2 => Balance \t 3 => Deposit \t 4 => Withdraw \t 5 => Interest 6 => exit"<<endl;
    
    while (op!=6)
    {
        cout<<"\nEnter Your Operation Key => ";
        cin>>op;
        if (op==1)
            a.getDetails();
        else if (op==2)
            a.getBalance();
        else if (op==3)   
            a.deposit();
        else if (op==4)
            a.withdraw();
        else if (op==5)
            a.interest();
        else if (op==6)
            break;
        else
            cout<<"You Entered Invalid Input , Please Enter Valid Input .";
    }
    

    return 0;
}