#include <iostream>
using namespace std;

class Vehicle
{

    string brand;
    string model;

public:
    void getVehicleDetails(string b, string m)
    {
        brand = b;
        model = m;
    }

    void showVehicleDetails()
    {
        cout << "Brand of the Vehicle is " << brand << " and model of the vehicle is " << model << ".";
    }
};

class Car : Vehicle
{

    // fuel type and milage

    string fuelType;
    int milage;

public:
    void getCarDetails(string ft, int m)
    {
        fuelType = ft;
        milage = m;
    }

    void showCarDetails()
    {
        cout << "Fuel Type of this Car is " << fuelType << " and Milage of the car is " << milage << ".";
    }
};

// electric car battCapcity chargingTime

class ElectricCar : Vehicle
{

    int batteryCapacity;
    int chargingTime;

public:
    void getCarDetails(int bc, int ct)
    {
        batteryCapacity = bc;
        chargingTime = ct;
    }

    void showCarDetails()
    {
        cout << "Electric Car's Battery Capacity is " << batteryCapacity << " and Charging Time of car is " << chargingTime << ".";
    }
};

int main()
{
    ElectricCar e;
    Car c;

    string mod, bra, ft;
    int m, bc, ct;

    cout << "Enter Brand of Vehicle/n";
    cin >> bra;
    cin.ignore();
    cout << "Enter Model of Vehicle/n";
    cin >> mod;
    cin.ignore();

    int type;
    cout << "Enter Type of the Vehicle: /n 1. for Electric /n 2. for Other";
    cin >> type;
    if (type == 1)
    {
        cout << "Enter Battery Capacity./n";
        cin >> bc;

        cout << "Enter Charging Time./n";
        cin >> ct;

        e.getCarDetails(bc, ct);
        e.showCarDetails();
    }
    else if (type == 2)
    {
        cout << "Enter Fuel Type.";
        cin >> ft;
        cin.ignore();
        cout << "Enter Milage.";
        cin >> m;

        c.getCarDetails(ft, m);
        c.showCarDetails();
    }
    else
    {
        cout << "Wrong Type choosen.";
    }

    return 0;
}
