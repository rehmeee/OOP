#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
class Account{
    public:
    Account(){
        cout<<"Enter name"<<endl;
        getline(cin,name);
        cout<<"enter Acount No"<<endl;
        cin>>accoundNo;
    }
    string name;
    int accoundNo;
};

// here we use vitual keywrod that use to create a single copy of parent class for all the child classes
class CurrentAccount:virtual public Account{
    public:
    int currentAmount ;
    CurrentAccount():Account(){
        cout<<"Enter curent amount"<<endl;
        cin>>currentAmount;
    }
};
class SavingAcccount:virtual public Account{
    public:
    int savings;
    SavingAcccount(){
        cout<<"Enter your savings"<<endl;
        cin>>savings;
    }
};
class Loan: public CurrentAccount, public SavingAcccount{
    public:
    Loan():CurrentAccount(),SavingAcccount(){
        cout<<"Enter amount you want to take as a loan"<<endl;
        cin>>loanAmount;
    }
    int loanAmount;
};
int main(){
        	Loan rehman;
            cout<<rehman.name<<endl;
            if(rehman.loanAmount>100000){
                cout<<"sorry you cannot have loan"<<endl;
            }
            else{
                cout<<"congrats you can take a loan!"<<endl;
            }
            
}