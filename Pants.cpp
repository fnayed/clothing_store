//
// Created by Endi on 18.04.2024.
//

#include "Pants.h"
#include <iostream>

using namespace std;

void Pants::set_modelName(std::string modelName) {
    this->modelName = modelName;
}
string Pants::get_modelName()const {
    return this->modelName;
}

void Pants::set_price(float price) {
    this->price=price;
}
float Pants::get_price()const {
    return this->price;
}





void Pants::display() const {
    cout << "Model Name: " << modelName << endl;
    cout << "Price: " << price << endl;
}

void Pants::doSomething() const {
    cout<<"class: Pants, function do something"<<endl;
}

void Pants::print(std::ostream &os) const {
    cout << "Model Name: " << modelName << endl;
    cout << "Price: " << price << endl;
}






Pants& Pants::operator=(const Pants& other) {
    if (this != &other) {
        modelName = other.modelName;
        price = other.price;
    }
    return *this;
}

Pants& Pants::operator--(){
    if(price<=100){
        price=0;
    }
    else{
    price-=100;}
    return *this;
}

Pants& Pants::operator++() {
    price+=100;
    return *this;
}

Pants Pants::operator-(float value){
    if(price<=value){
        return Pants(modelName, 0);
    }
    else{
        return Pants(modelName, price - value);}
}

Pants Pants::operator+(float value) {
    return Pants(modelName, price + value);
}


Pants::Pants(Pants&& other) noexcept : modelName(std::move(other.modelName)), price(std::move(other.price)) {
    cout<<"Called Pants Move constructor"<<endl;
}


Pants::Pants(std::string modelName, float price): modelName{string(modelName)}, price{float(price)} {
    cout<<"Called Pants constructor"<<endl;
}



Pants::~Pants() {
    cout<<"Called Pants destructor"<<endl;
}