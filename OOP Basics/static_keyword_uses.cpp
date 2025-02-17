#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
class Hero{
    public:
    static int no;
    string name;
    Hero(){
        cout<<"Enter name"<<endl;
        getline(cin,name);
        no++;
    }
    static void abc(){
        cout<<"my name is rehman"<<endl;
    }   
};
int Hero::no = 0;
int main(){
        	Hero a;
            cout<<a.name<<endl;
            cout<<a.no<<endl;
            a.abc();
}