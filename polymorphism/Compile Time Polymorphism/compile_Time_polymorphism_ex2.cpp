#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
class Parent{
    public:
    void show(int a){
        cout<<a<<endl;
    }
    void show(int a, int b){
        cout<<a+b<<endl;
    }
};
class Child: public Parent{
    public:
    void show(int a, int b , int c){
        cout<<a+b+c<<endl;
    }
    void operator+(Child& obj){
        cout<<"operator overloading is called"<<endl;
    }
};
int main(){
    // Parent a;
    // a.show(12, 23);
    Child a,b;
    a+b;


        	
}