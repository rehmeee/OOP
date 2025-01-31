#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
class Fruit{
    string name , color;
    public:
    static int count;
    Fruit(string n, string c){
        name = n;
        color = c;
        count++;
    }
    int getData(){
        return count;
    }
};
int Fruit::count = 0;

class Animal {
    
};
int main(){
    Fruit apple("apple", "red");
    Fruit malta("apple", "red");
    cout << apple.getData();
}