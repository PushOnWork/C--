#include<iostream>
using namespace std;
class Vehicle{
protected:
    string brand;
    int speed;
public:
    Vehicle(string br, int spd){
        this->brand = br;
        this->speed = spd;
    }
};
class Car : public Vehicle{
protected:
    int noOfDoors;
public:
    Car(string br, int spd, int doors) : Vehicle(br, spd){
        this->noOfDoors = doors;
    }
};
class electricCar : public Car{
protected:
    int batteryCapacity;
public:
    electricCar(string br, int spd, int doors, int capacity) : Car(br, spd, doors){
        this->batteryCapacity = capacity;
    }
    void displayDetails(){
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << " km/h" << endl;
        cout << "Number of Doors: " << noOfDoors << endl;
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};
int main(){
    electricCar eCar("Tesla", 250, 4, 100);
    eCar.displayDetails();
    return 0;
}