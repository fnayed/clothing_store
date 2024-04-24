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

LongSleeveTShirt::LongSleeveTShirt(const LongSleeveTShirt &other): TShirt(other), color(other.color) {
    cout<<"Called LongSleeveTShirt Copy constructor"<<endl;
}






void LongSleeveTShirt::display() const {
    cout << "Model Name: " << TShirt::get_modelName() << endl;
    cout << "Price: " << TShirt::get_price() << endl;
    cout << "Color: " << color << endl;
}

void LongSleeveTShirt::doSomething() const {
    cout<<"class: LongSleeveTShirt, function do something"<<endl;
}

void LongSleeveTShirt::print(std::ostream &os) const {
    TShirt::print(os);
    cout << "Color: " << color << endl;
}





LongSleeveTShirt::LongSleeveTShirt(std::string modelName, float price, std::string color):
    TShirt(string(modelName), float(price)), color{string(color)}{
    cout<<"Called LongSleeveTShirt constructor"<<endl;
}

LongSleeveTShirt::~LongSleeveTShirt() {
    cout<<"Called LongSleeveTShirt destructor"<<endl;
}