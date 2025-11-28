#include <iostream>

using namespace std;

class Car{

    private:
        int speed=0;
        string name;
        string color;

    public:
    Car(string carName, string carColor, int carSpeed){
        name = carName;
        color = carColor;
        speed = carSpeed;
        cout << "A "<< color <<" color car started lets see which is it?" << endl;
    };

    void enterdInRace(){
        cout << "Oh My God! The "<< color <<"  "<< name<<" entered in the race track to compete!" << endl;
    }

    void setSpeed(int newSpeed){
        speed = newSpeed;
        cout << "The "<< color + name <<" is now on fire with " << speed << " km/h." << endl;
    }
    
};
int main (){
        string name, color;
        cout<< "Ladies and Gentlemen! Welcome to the Grand Prix!" << endl;
        cout<< "We have a new contestant today!" << endl;

        cout << "Please welcome the new car!" << endl;

        cout<< "Welcome Racer! Enter the name of your car: ";
        getline(cin,name);
        cout<< "Enter the color of your car: ";
        getline(cin,color);       
        Car newCar(name, color, 0);
        newCar.enterdInRace();
        newCar.setSpeed(160);

        return 0;
        

    }