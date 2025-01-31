#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
class Animal{
    int price;
    public:
    string name, species;
    Animal(string n, string s){
        name = n; 
        species = s;
    }
    friend Animal fun();
};
 Animal fun(){
    Animal dog("papi", "pista");
    dog.price=45000;
    return dog;
}
int main(){
    fun();
}