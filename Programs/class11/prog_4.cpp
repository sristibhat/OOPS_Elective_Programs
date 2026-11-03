
// Write a C++ program with abstract class Vehicle and derived classes
// Car and Bike to display features such as number of wheels,
// mileage and fuel capacity.

#include<iostream>
using namespace std;

class Vehicle
{
public:
    virtual void display() = 0;
    virtual ~Vehicle() = default;
};

class Car: public Vehicle
{
public:
    int wheels = 4;
    float mileage = 20.0;
    float fuel_capacity = 40.0;

    void display() override
    {
        cout<<"Car Details"<<endl;
        cout<<"Number of wheels: "<<wheels<<endl;
        cout<<"Mileage: "<<mileage<<" km/l"<<endl;
        cout<<"Fuel Capacity: "<<fuel_capacity<<" litres"<<endl;
    }
};

class Bike: public Vehicle
{
public:
    int wheels = 2;
    float mileage = 50.0;
    float fuel_capacity = 15.0;

    void display() override
    {
        cout<<"Bike Details"<<endl;
        cout<<"Number of wheels: "<<wheels<<endl;
        cout<<"Mileage: "<<mileage<<" km/l"<<endl;
        cout<<"Fuel Capacity: "<<fuel_capacity<<" litres"<<endl;
    }
};

int main()
{
    Vehicle *v1, *v2;

    Car c;
    Bike b;

    v1 = &c;
    v2 = &b;

    v1->display();

    cout<<endl;

    v2->display();

    return 0;
}
