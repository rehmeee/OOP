#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
class A{
    public:
    int a ,b;
    A(){
        cout<<"A"<<endl;
        cin>>a;
        cout<<"B"<<endl;
        cin>>b;
    }

    void operator+(A &obj){
        cout<<"In operator"<< this->a + obj.a<<endl;
    }

};
int main(){
        A obj,obj2;
        obj + obj2;	
}