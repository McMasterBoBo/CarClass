// Car_Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <Car.h>
#include <iostream>

void Menu(Car myCar)
{
    cout << "This is my car" << endl;
    cout << "Years: " << myCar.getYearsModel() << endl;
    cout << "Brand: " << myCar.getMake() << endl;
    cout << "Current Speed:" << myCar.getSpeed() << endl;
}

Car::Car(int carYearsModel, string carMakes)
{
    yearModel = carYearsModel;
    brand = carMakes;
    speed = 0;
};

int Car::getYearsModel()
{
    return yearModel;
}

string Car::getMake()
{
    return brand;
}

int Car::getSpeed()
{
    return speed;
}

int Car::accelerate(int currentSpeed)
{
    currentSpeed += 5;

    return currentSpeed;
}

int Car::brake(int currentSpeed)
{
    currentSpeed -= 5;

    return currentSpeed;
}

int main()
{
    Car myCar = Car(1985, "Mustang");  
    int newSpeed = 0;

    Menu(myCar);

    for (int i = 0; i < 5; i++)
    {
        newSpeed = myCar.accelerate(newSpeed);
    }
    
    cout << "The speed after the 5 times of accelerations: " << newSpeed << endl;

    for (int i = 0; i < 5; i++)
    {
        newSpeed = myCar.brake(newSpeed);
    }

    cout << "The speed after the 5 times of brakes: " << newSpeed << endl;

    cin.ignore();
    cin.get();
    return 0;
}



