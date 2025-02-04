#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// we cannot achieve the function overloading through changing the return type of function

// we can overload the function through the the no of parameters 
class A{
    public:
    // void display(string n){
    //     cout<<"this is function A"<<endl;
    //     cout<<n<<endl;
    // }
    void display(string n, int k=43){
        cout<<"this is function A"<<endl;
        cout<<k<<endl;
        cout<<n<<endl;
    }
    void display(){

        cout<<"this is function B"<<endl;
    }

};

int main(){
        	A obj;
            obj.display("hello", 23);
            obj.display("elad");
}