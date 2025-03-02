#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
class Animal{
    public:
    virtual void speak(){
        cout<<"animal speaks"<<endl;
    }
};
class Cat: public Animal{
    public:
    void speak(){
        cout<<"cat meos"<<endl;
    }
};
class Dog: public Animal{
    public:
    void speak(){
        cout<<"dog barks"<<endl;
    }
};
int main(){
        Animal* a = new Cat();
        Animal* c = new Animal();
        Animal* b = new Dog();
        b->speak();
        a->speak();
        c->speak();
}