#include <iostream>
using namespace std;

class Car {
    // Data
public:
    string brand, model, variant, fuel_type;
    int year;
    float price; // Added missing semicolon

    // Member Functions
    void start() {
        cout << model << " started!" << endl;
    }

    void park() {
        cout << model << " parked!" << endl;
    }

    void stop() {
        cout << model << " stopped!" << endl;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Variant: " << variant << endl;
        cout << "Fuel Type: " << fuel_type << endl;
        cout << "Launch Year: " << year << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Car c1; // Object Created for the class Car
    c1.brand = "Toyota";
    c1.model = "innova";
    c1.variant = "6";
    c1.fuel_type = "deasel";
    c1.year = 2022; // Changed to integer
    c1.price = 1500000; // Changed to float

    c1.start();
    c1.park();
    c1.stop(); // Added stop function call
    c1.display(); // Display car details

}

