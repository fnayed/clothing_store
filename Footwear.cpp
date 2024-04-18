//
// Created by Endi on 18.04.2024.
//

#include "Footwear.h"
#include <iostream>

using namespace std;

int Footwear::count = 0; //  static поле

void Footwear::set_modelName(std::string modelName) {
    this->modelName = modelName; //приклад використання вказівника this
}
string Footwear::get_modelName()const {
    return this->modelName; //приклад використання вказівника this
}

void Footwear::set_price(float price) {
    this->price=price; //приклад використання вказівника this
}
float Footwear::get_price()const {
    return this->price; //приклад використання вказівника this
}

int Footwear::get_the_number_of_class_objects() const {
    return this->count;
}



// Делегований конструктор (Всередині) -->
Footwear::Footwear(std::string modelName, float price): modelName{string(modelName)}, price{float(price)} {
    cout<<"Called Footwear constructor"<<endl;
    count++; //  Використати модифікатор static із полем та методом класу.
}

Footwear::Footwear(std::string modelName): Footwear(string(modelName), 0) {}

Footwear::Footwear(): Footwear("None") {}
// <---


// Деструктор (Всередині)
Footwear::~Footwear() {
    cout<<"Called Footwear destructor"<<endl;
    count--; //  Використати модифікатор static із полем та методом класу.
}