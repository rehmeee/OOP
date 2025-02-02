#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
class Human{
    public:
    int weight, height;
    string color;
};
class Male: public Human{
    public:
    int sleepCyle;
};
class Female: public Human{
    public:
    int iq;
};
int main(){
        Male rehman;
        rehman.color = "brown";
        rehman.height = 170;
        rehman.sleepCyle = 6;
        rehman.weight = 63;
        Female NoOne;	
        NoOne.color ="black";
        NoOne.iq = 0;
        NoOne.weight = 23;
        NoOne.height = 155;

        cout<<"Rehman Color "<<rehman.color<<endl;
        cout<<"Femail iq"<<NoOne.iq<<endl;
}