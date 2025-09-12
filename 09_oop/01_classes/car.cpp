#include <iostream>
#include "car.h"

using namespace std;

int Car::totalCount = 0;

// Default Constructor
Car::Car(){
    ++totalCount;
    cout << "Car()" << endl;
}

// Parameterised Constructor
Car::Car(float amount){
    ++totalCount;
    cout << "Car()" << endl;
    fuel = amount;
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

void Car::Dashboard(){
    cout << "Fuel: " << fuel << endl;
    cout << "Speed: " << speed << endl;
    cout << "Passengers: " << passengers << endl;
    cout << "Total count: " << totalCount << endl;
}
