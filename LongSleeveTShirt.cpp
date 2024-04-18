//
// Created by Endi on 18.04.2024.
//

#include "LongSleeveTShirt.h"
#include <iostream>

using namespace std;

void LongSleeveTShirt::set_color(std::string color) {
    this->color=color;
}

string LongSleeveTShirt::get_color() const {
    return this->color;
}

LongSleeveTShirt::LongSleeveTShirt(const LongSleeveTShirt &other): TShirt(other), color(other.color) {// Унаслідований Copy constructor (Всередині)
    cout<<"Called LongSleeveTShirt Copy constructor"<<endl;
}



LongSleeveTShirt::LongSleeveTShirt(std::string modelName, float price, std::string color):
    TShirt(string(modelName), float(price)), color{string(color)}{
    cout<<"Called LongSleeveTShirt constructor"<<endl;
}

LongSleeveTShirt::~LongSleeveTShirt() {
    cout<<"Called LongSleeveTShirt destructor"<<endl;
}