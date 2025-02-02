#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

// in singel level inheritance we derive a single child class from a single paren class

// one line terminology to remember is that we "we create one child class from one parent class"

class College
{
public:
    string name;
    int id;
    College()
    {
        cout << "enter the name " << endl;
        cin >> name;
        cout << "enter the id " << endl;
        cin >> id;
    }
};

class Student : public College
{
public:
    int marks;
    Student() : College()
    {
        cout << "enter the marks" << endl;
        cin >> marks;
    }
};

int main()
{
    Student rehman;
    cout << "id" << rehman.id << endl;
    cout << "name" << rehman.name << endl;
    cout << "marks" << rehman.marks << endl;
}