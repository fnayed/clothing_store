//
// Created by Endi on 18.04.2024.
//

#include "Breedje.h"
#include <iostream>

using namespace std;

void Breedje::set_numberOfPockets(int numberOfPockets) {
    this->numberOfPockets=numberOfPockets;
}

int Breedje::get_numberOfPockets() const {
    return this->numberOfPockets;
}




void Breedje::display() const {
    cout << "Model Name: " << Pants::get_modelName() << endl;
    cout << "Price: " << Pants::get_price() << endl;
    cout << "Number of pockets: " << numberOfPockets << endl;
}

void Breedje::doSomething() const {
    cout<<"class: Breedje, function do something"<<endl;
}

void Breedje::print(std::ostream &os) const {
    Pants::print(os);
    cout << "Number of pockets: " << numberOfPockets << endl;
}





Breedje::Breedje(Breedje &&other) noexcept: Pants(move(other)), numberOfPockets(move(other.numberOfPockets)) {
    cout<<"Called Breedje Move constructor"<<endl;
}

Breedje &Breedje::operator=(const Breedje &other) {
    if (this != &other) {
        Pants::operator=(other);
        numberOfPockets = other.numberOfPockets;
    }
    return *this;
}


Breedje::Breedje(std::string modelName, float price, int numberOfPockets):
        Pants(string(modelName), float(price)), numberOfPockets{int(numberOfPockets)}{
    cout<<"Called Breedje constructor"<<endl;
}

Breedje::~Breedje() {
    cout<<"Called Breedje destructor"<<endl;
}