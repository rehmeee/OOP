#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

// simple concept of multiple ingeritance that you derive a class from more than one class

// when a class created from more than one class it means that the multiple inheritance is applied

class ElectricCar
{
public:
    string name;
    int engineNo;
    string batteryCapicity;
    ElectricCar()
    {
        cout << "enter the car name " << endl;
        cin >> name;
        cout << "enter the engine No " << endl;
        cin >> engineNo;
        cout << "enter batterCapacity" << endl;
        cin >> batteryCapicity;
    }
};

class DiselCar
{
public:
    string model, fuelCapacity;

    DiselCar()
    {
        cout << "Enter model " << endl;
        cin >> model;
        cout << "Enter fuel capacity" << endl;
        cin >> fuelCapacity;
    }
};

class Hybrid : public ElectricCar, public DiselCar
{
public:
    Hybrid() : DiselCar(), ElectricCar()
    {
    }
};
int main()
{
    Hybrid vezal;
    cout << "model" << vezal.model << endl;
    cout << "name" << vezal.name << endl;
    cout << "fuel Capicity " << vezal.fuelCapacity << endl;
    cout << "batter capicity  " << vezal.batteryCapicity << endl;
    cout << "engine no " << vezal.engineNo << endl;
}