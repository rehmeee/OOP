#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

// when we drive a child class from a parent class and that parent class is already derived from another parent classs here the concept is multilevel inheritance

class Vehicle
{ /// level ONE
public:
    int engineNo, price;
};
class Car : public Vehicle
{   // Lever TWO
public:
    string model;
    int fuelCapacity;
};

class SportsCar : public Car
{ // Level THREE
public:
    string brandName;
};
int main()
{
    SportsCar ferari;
    ferari.brandName = "ferari";
    ferari.engineNo = 384093;
    ferari.fuelCapacity = 100;
    ferari.model = "2006 v8";
    ferari.price = 1000000;

    cout << "name\t" << ferari.brandName << endl;
    cout << "engine no \t" << ferari.engineNo << endl;
    cout << "fuel Capacity \t" << ferari.fuelCapacity << endl;
    cout << "model \t" << ferari.model << endl;
    cout << "price\t" << ferari.price << endl;
}