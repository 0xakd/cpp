#include <iostream>
#include "car.h"

using namespace std;

// Static variable
int Car::totalCount = 0;

// Default Constructor
Car::Car():Car(0){
    cout << " car() "<<endl;

}



// Parameterised Constructor
Car::Car(float amount):Car(amount, 0){
    cout << " car(float) "<<endl;
}

Car::Car(float amount, int pass){
    cout << " car(float, int) "<<endl;
    ++totalCount;
    fuel = amount;
    speed = 0;
    passengers = pass;

}

// Deconstructor
Car::~Car(){
    --totalCount;
    cout << "~Car()" << endl;
}

void Car::FillFuel(float amount){
    fuel = amount;
}

void Car::Accelerate(){
    speed++;
    fuel -+ 0.5f;
}

void Car::Brake(){
    speed  = 0;
}

void Car::AddPassengers(int count){
    passengers = count;
}

void Car::Dashboard()const {
    cout << "Fuel: " << fuel << endl;
    cout << "Speed: " << speed << endl;
    cout << "Passengers: " << passengers << endl;
}
// Static Function
void Car::showCars(){
    cout << "Total count: " << totalCount << endl;
}
