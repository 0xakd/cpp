#include "car.h"

int main(){
    Car::showCars();

    const Car car(4);
    // car.FillFuel(5);
    // car.Accelerate();
    // car.Accelerate();
    // car.Accelerate();
    car.Dashboard();                                    
    
    Car c2, c3;
    car.Dashboard();
}