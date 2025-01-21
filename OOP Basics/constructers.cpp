#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
class Car{
   
    private:
    string name,color, model;
    int price;
    
    public:
     Car(string n, string c, string m, int p){
        name = n;
        color = c;
        model = m;
        price = p;
    }
    // getters and setters
    void setColor(string color){
        this->color = color;
    }
    string getColor(){
        return color;
    }
    void setModel(string model);
    string getModel();

    
};
void Car::setModel(string model){
    this->model = model;
}
string Car::getModel(){
return model;
}
int main(){
    Car honda("caltus", "black", "suzuki", 40000);

    honda.setColor("white");
    // honda.name= "Honda civic";
    // honda.model= "2021";
    cout<<honda.getColor();
    honda.setModel("grande");
    cout<<honda.getModel();
    
}