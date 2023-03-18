
#include <iostream>
#include <list>

using namespace std;

class Car {
public:
	string brand;
	string model;
	int year;
	int speed;
	int fuelConsumption;
	int fuelAmount;
	int distance;

	Car() {
		brand = "Volkswagen";
		model = "Volkswagen Käfer";
		int year = 1947;
		int speed = 60;
		fuelConsumption = 4;
		fuelAmount = 44;
		distance = 11;
	}

	void newCar(string brand, string model, int year, int speed, int fuelConsumption, int fuelAmount) {
		this->brand = brand;
		this->model = model;
		this->year = year;
		this->speed = speed;
		this->fuelConsumption = fuelConsumption;
		this->fuelAmount = fuelAmount;
	}

	int increaseSpeed(int icrSpeed) {
		this->speed += icrSpeed;

		return 1;
	}

	int decreaseSpeed(int decrSpeed) {
		this->speed -= decrSpeed;

		return 1;
	}

	string getBrand() {
		return this->brand;
	}

	string getModel() {
		return this->model;
	}

	int getYear() {
		return this->year;
	}
	int getSpeed() {
		return this->speed;
	}

	int fuelLevelCheck() {
		distance = fuelAmount / fuelConsumption;
		if (distance > 1) {
			cout << "Топлива хватит на " << distance << " км";
		}
		else
		{
			cout << "Недостаточный уровень топлива";
		}

		return fuelAmount;
	}

	int refill(int refill) {
		fuelAmount += refill;
		return fuelAmount;
	}

};

class Truck : public Car {
public:

	int payloadCapacity;
	int price;
	int serviceTime;

	Truck() {
		this->brand = "Tatra";
		this->model = "Tatra 805";
		this->year = 1980;
		this->speed = 60;
		this->fuelConsumption = 25;
		this->fuelAmount = 75;
		this->payloadCapacity = 2250;
		this->price = 10000;
		this->serviceTime = 30;
	}

	void newTruck(string brand, string model, int year, int speed, int fuelConsumption, int fuelAmount, int payloadCapacity, int price, int serviceTime) {
		this->brand = brand;
		this->model = model;
		this->year = year;
		this->speed = speed;
		this->fuelConsumption = fuelConsumption;
		this->fuelAmount = fuelAmount;
		this->payloadCapacity = payloadCapacity;
		this->price = price;
		this->serviceTime = serviceTime;
	}

	int getPayloadCapacity()
	{
		return payloadCapacity;
	}

	int Payback()
	{
		int annual_income;
		cout << "Введите годовую прибыль: ";
		cin >> annual_income;

		if (price / annual_income > serviceTime)
		{
			cout << "Автомобиль окупится через " << price / annual_income << " лет";
		}
		else {
			cout << "Ваш автомобиль не окупится";
		}
	}

	int Workability()
	{
		if (2023 - year > serviceTime)
		{
			cout << "Машина держится на вере в нее";
		}

		else if (2023 - year == serviceTime)
		{
			cout << "Пора купит синюю изоленту";
		}

		else
		{
			cout << "Новый, почти с завода";
		}
	}
};

int main()
{
	setlocale(0, "");


	Car car1;
	Car car2;
	Car car3;
	Car car4;
	Car car5;
	Car car6;
	Car car7;
	Car car8;
	Car car9;
	Car car10;

	car1.newCar("Ford", "Mustang", 1967, 200, 10, 50);
	car2.newCar("Chevrolet", "Camaro", 1969, 180, 8, 40);
	car3.newCar("Dodge", "Challenger", 1970, 190, 9, 45);
	car4.newCar("BMW", "M3", 2008, 250, 12, 60);
	car5.newCar("Mercedes-Benz", "C63 AMG", 2016, 280, 14, 70);
	car6.newCar("Audi", "RS5", 2019, 270, 13, 65);
	car7.newCar("Porsche", "911 GT3", 2021, 320, 15, 75);
	car8.newCar("Tesla", "Model S", 2022, 250, 0, 0);
	car9.newCar("Nissan", "GT-R", 2020, 310, 16, 80);
	car10.newCar("Toyota", "Supra", 2022, 290, 14, 70);
	
	list<Car> cars;
	cars.push_back(car1);
	cars.push_back(car2);
	cars.push_back(car3);
	cars.push_back(car4);
	cars.push_back(car5);
	cars.push_back(car6);
	cars.push_back(car7);
	cars.push_back(car8);
	cars.push_back(car9);
	cars.push_back(car10);

	list<Truck> trucks_list;

	
	Truck truck1;
	Truck truck2;
	Truck truck3;
	Truck truck4;
	Truck truck5;
	Truck truck6;
	Truck truck7;
	Truck truck8;
	Truck truck9;
	Truck truck10;

	trucks_list.push_back(truck1);
	trucks_list.push_back(truck2);
	trucks_list.push_back(truck3);
	trucks_list.push_back(truck4);
	trucks_list.push_back(truck5);
	trucks_list.push_back(truck6);
	trucks_list.push_back(truck7);
	trucks_list.push_back(truck8);
	trucks_list.push_back(truck9);
	trucks_list.push_back(truck10);

	for(Car car : cars)
	{
		cout << car.getBrand() << "\n";
		cout << car.getModel() << "\n";
		cout << car.getSpeed() << "\n";
		cout << car.getYear() << "\n";

		cout << "\n";
	}

	cout << "\n" << "\n";

	for (Truck truck : trucks_list) {
		cout << truck.getBrand() << "\n";
		cout << truck.getModel() << "\n";
		cout << truck.getSpeed() << "\n";
		cout << truck.getYear() << "\n";
		cout << truck.getPayloadCapacity() << "\n";

		cout << "\n";
	}
}