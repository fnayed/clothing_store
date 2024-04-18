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

Breedje::Breedje(Breedje &&other) noexcept: Pants(move(other)), numberOfPockets(move(other.numberOfPockets)) {// Унаслідований Move constructor (Всередині)
    cout<<"Called Breedje Move constructor"<<endl;
}

Breedje &Breedje::operator=(const Breedje &other) { // Унаслідований operator= (Всередині)
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