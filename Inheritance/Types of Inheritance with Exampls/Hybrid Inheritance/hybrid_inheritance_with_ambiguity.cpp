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
class CurrentAccount: public Account{
    public:
    int currentAmount ;
    CurrentAccount():Account(){
        cout<<"Enter curent amount"<<endl;
        cin>>currentAmount;
    }
};
class SavingAcccount: public Account{
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
            // cout<<"name"<<rehman.name<<endl; we cannot access this because its amibiguas
            // if(rehman.loanAmount>rehman.currentAmount+ rehman.savings){
            //     cout<<"you canot take the loan"<<endl;
            // }
}