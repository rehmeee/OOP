#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
class A{
    public:
    void clasName(){
        cout<<"this is class A"<<endl;
    }
};
class B{
    public:
    void clasName(){
        cout<<"this is class B"<<endl;
    }
};
class C : public A, public B{};
int main(){
        	    C obj;
                obj.A::clasName();
                obj.B::clasName();
}