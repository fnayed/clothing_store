//
// Created by Endi on 18.04.2024.
//

#include "Pants.h"
#include <iostream>

using namespace std;

void Pants::set_modelName(std::string modelName) {
    this->modelName = modelName; //приклад використання вказівника this
}
string Pants::get_modelName()const {
    return this->modelName; //приклад використання вказівника this
}

void Pants::set_price(float price) {
    this->price=price; //приклад використання вказівника this
}
float Pants::get_price()const {
    return this->price; //приклад використання вказівника this
}


Pants& Pants::operator=(const Pants& other) {// Оператор присвоєння =
    if (this != &other) {
        modelName = other.modelName;
        price = other.price;
    }
    return *this;
}

Pants& Pants::operator--(){// Унарний оператор "--" (зменшити ціну)
    if(price<=100){
        price=0;
    }
    else{
    price-=100;}
    return *this;
}

Pants& Pants::operator++() {// Унарний оператор "++" (Збільшити ціну)
    price+=100;
    return *this;
}

Pants Pants::operator-(float value){// Бінарні оператор "-" (зменшити ціну)
    if(price<=value){
        return Pants(modelName, 0);
    }
    else{
        return Pants(modelName, price - value);}
}

Pants Pants::operator+(float value) {// Бінарні оператор "+" (Збільшити ціну)
    return Pants(modelName, price + value);
}


Pants::Pants(Pants&& other) noexcept : modelName(std::move(other.modelName)), price(std::move(other.price)) { // Move constructor (Всередині)
    cout<<"Called Pants Move constructor"<<endl;
}

// Конструктор з параметрами за замовченням (Всередині)
Pants::Pants(std::string modelName, float price): modelName{string(modelName)}, price{float(price)} {
    cout<<"Called Pants constructor"<<endl;
}


// Деструктор (Всередині)
Pants::~Pants() {
    cout<<"Called Pants destructor"<<endl;
}