#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

class Human{
    public:
    int age; 
    int height,weight;
    
    int getAge(){
        return this->age;
    }
};
class Male: public Human{
    public:
    int sleepCycle;

    int getSleepCycle(){
        return this->sleepCycle;
    }

};

int main(){
        	    Male rehman;
                
                rehman.height= 170;
                rehman.weight = 63;
                rehman.sleepCycle = 8;
                cout<<rehman.getSleepCycle()<<endl;
}