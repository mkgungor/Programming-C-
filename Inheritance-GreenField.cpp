//Why do we need inheritance? IS-A
#include <iostream>
#include <vector>
using namespace std;

class Product {
public:
    Product(int price, string name) {
        this->price = price;
        this->name = name;    
    }

    virtual void printInfo() {
        cout << "Name:\t" << name << endl;
        cout << "Price:\t" << price << endl;        
    }

protected:
    int price;
    string name;
};

class TV : public Product {
public:
    TV(int price, string name, string resolution, int voltage):Product(price, name){
        this->resolution = resolution;
        this->voltage = voltage;
    }

    void printInfo() {
        Product::printInfo();
        cout << "Resolution:\t" << resolution << endl;
        cout << "Voltage:\t" << voltage << endl;
    }

private:
    string resolution;
    int voltage;
};

class Produce : public Product {
public:
    Produce(int price, string name, string unit, string type) :Product(price, name) {
        this->unit = unit;
        this->type = type;    
    }

    void printInfo() {
        Product::printInfo();
        cout << "Unit:\t" << unit << endl;
        cout << "Type:\t" << type << endl;
    }

private:
    string unit;
    string type;
};


int main()
{

    Produce tomato(2, "Tomato", "Pound", "Sweet");
    tomato.printInfo();

    TV lg(200, "LG", "4K", 115);
    lg.printInfo();
    cout << "Learning inheritance!\n";    
}
