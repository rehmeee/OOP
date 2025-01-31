#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

class College{
    // static members are stored in global memory not in object memory so we should initilize them outside the class 
    static int studentCount;
    string name;
    int totalMarks;
    int rol;
    

    public:
    College(string n , int m, int r){
        this->name = n;
        this->totalMarks = m;
        this->rol = r;
        this->studentCount++;
        cout<<this<<endl;
        cout<<studentCount<<endl;
    }
    string getName(){
        return this->name;
    }
};
int College::studentCount = 0;
int main(){
    College rehman("Rehman Ali", 234, 53);
    College arham("Muhammad arham", 112, 34);
    College asad("Muhammad asad", 112, 34);
    College usman("Muhammad usman", 112, 34);
    cout<<rehman.getName()<<endl;
    cout<<arham.getName()<<endl;
    cout<<asad.getName()<<endl;
    cout<<usman.getName()<<endl;

        	
}