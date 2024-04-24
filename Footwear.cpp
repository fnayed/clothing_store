//
// Created by Endi on 18.04.2024.
//

#include "Footwear.h"
#include <iostream>

using namespace std;

int Footwear::count = 0;

void Footwear::set_modelName(std::string modelName) {
    this->modelName = modelName;
}
string Footwear::get_modelName()const {
    return this->modelName;
}

void Footwear::set_price(float price) {
    this->price=price;
}
float Footwear::get_price()const {
    return this->price;
}

int Footwear::get_the_number_of_class_objects() const {
    return this->count;
}





void Footwear::display() const {
    cout << "Model Name: " << modelName << endl;
    cout << "Price: " << price << endl;
}

void Footwear::doSomething() const {
    cout<<"class: Footwear, function do something"<<endl;
}

void Footwear::print(std::ostream &os) const {
    cout << "Model Name: " << modelName << endl;
    cout << "Price: " << price << endl;
}





Footwear::Footwear(std::string modelName, float price): modelName{string(modelName)}, price{float(price)} {
    cout<<"Called Footwear constructor"<<endl;
    count++;
}

Footwear::Footwear(std::string modelName): Footwear(string(modelName), 0) {}

Footwear::Footwear(): Footwear("None") {}




Footwear::~Footwear() {
    cout<<"Called Footwear destructor"<<endl;
    count--;
}