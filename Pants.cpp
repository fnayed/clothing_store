//
// Created by Endi on 18.04.2024.
//

#include "Pants.h"
#include <iostream>

using namespace std;

void Pants::set_modelName(std::string modelName) {
    this->modelName = modelName;
}
string Pants::get_modelName() {
    return this->modelName;
}

void Pants::set_price(float price) {
    this->price=price;
}
float Pants::get_price() {
    return this->price;
}

// Конструктор з параметрами за замовченням (Всередині)
Pants::Pants(std::string modelName, float price): modelName{string(modelName)}, price{float(price)} {
    cout<<"Called Pants constructor"<<endl;
}


// Деструктор (Всередині)
Pants::~Pants() {
    cout<<"Called Pants destructor"<<endl;
}