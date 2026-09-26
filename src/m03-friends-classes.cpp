#include<iostream>

using namespace std;

class Engine {
    private:
        double fuelLevel;
        void injectFuel(double amount) { fuelLevel -= amount; }

        // Car gets full access to Engine's private members
        friend class Car;   
};

class Car {
    public:
        Car(double amount) {
            engine.fuelLevel = amount;
        }
        void accelerate() {
            // legal only because Car is a friend of Engine
            engine.injectFuel(0.5);   
        }
        double checkFuel() {
            return engine.fuelLevel;
        }

    private:
        Engine engine;
};

int main() 
{
    Car c1(10);

    c1.accelerate();
    cout << "Fuel level: " << c1.checkFuel() << endl;

    c1.accelerate();
    c1.accelerate();
    c1.accelerate();
    cout << "Fuel level: " << c1.checkFuel() << endl;

    return 0;
}