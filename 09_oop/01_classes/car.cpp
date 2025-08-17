#include <iostream>
#include "car.h"

using namespace std;

Car::Car(){
    fuel = 0;
    speed = 0;
    passengers = 0; 
}

void Car::FillFuel(float amount)
{
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
}
