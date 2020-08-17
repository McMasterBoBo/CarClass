#pragma once
#include<string>


using namespace std;

class Car
{
private: 
	string brand;
	int yearModel;
	int speed;

public:
	
	Car(int, string);
	int accelerate(int);
	int brake(int);

	int getYearsModel();
	string getMake();
	int getSpeed();
	
};