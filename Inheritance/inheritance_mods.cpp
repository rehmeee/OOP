#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

class Human
{
    public:
    int weight, height;
    private:
    int age;
    protected:
    void setAge(int age){
        this->age = age;
    }
    int getAge(){
        return this->age;
    }

};

// when the inhert mode is public 

// class Male: public Human{
//     public: 
//     string eyeColor;
    
// };

// when the inhert mode is private all the public datamembers of parent class are private members of child class

// class Male: private Human{
//     // we can acces the public member of parent class here because we inherit through th mode of private so all the datamembers are private now
//     public: 
//     string eyeColor;
//     // we cannot directoly access but we can use getters and setters 
//     void setHegiht(int height){
//         this->height = height;
//     }
//     int getHegiht(){
//         return this->height ;
//     }
//     void setAge(int age){
//         Human::setAge(age);
//     }
//     int getAge(){
//         return Human::getAge();
//     }


    
// };


// if a datamember is Private in any class it is not be inherited either whatever mode you use 

// so to overcome this situation we use the protected method that are simmiler to private but can be inhereted 

class Male: protected Human{
    public:
    string eyeColor;
    void setHegiht(int height){
        this->height = height;
    }
    int getHegiht(){
        return this->height ;
    }
    void setAge(int age){
        Human::setAge(age);
    }
    int getAge(){
        return Human::getAge();
    }
};


int main(){
        	Male rehman;
            rehman.eyeColor= "brown";
            rehman.setHegiht(170);
            rehman.setAge(23);

            cout<<rehman.eyeColor<<endl;
            cout<<rehman.getHegiht()<<endl;
            cout<<rehman.getAge()<<endl;
            

}