//
// Created by Endi on 18.04.2024.
//

#include "Footwear.h"
#include <iostream>

using namespace std;

void Footwear::set_modelName(std::string modelName) {
    this->modelName = modelName;
}
string Footwear::get_modelName() {
    return this->modelName;
}

void Footwear::set_price(float price) {
    this->price=price;
}
float Footwear::get_price() {
    return this->price;
}

// Делегований конструктор (Всередині) -->
Footwear::Footwear(std::string modelName, float price): modelName{string(modelName)}, price{float(price)} {
    cout<<"Called Footwear constructor"<<endl;
}

Footwear::Footwear(std::string modelName): Footwear(string(modelName), 0) {}

Footwear::Footwear(): Footwear("None") {}
// <---


// Деструктор (Всередині)
Footwear::~Footwear() {
    cout<<"Called Footwear destructor"<<endl;
}