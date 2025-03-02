#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
class A {
        public:
        void show(){
            cout<<"show in A"<<endl;
        }
};
class B : virtual public A{};
class C: virtual public A{};
class D : public B, public C{

};
int main(){
        	D a;
            a.show();
}