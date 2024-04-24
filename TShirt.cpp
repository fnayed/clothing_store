//
// Created by Endi on 18.04.2024.
//

#include "TShirt.h"
#include <iostream>

using namespace std;

void TShirt::set_modelName(std::string modelName) {
    this->modelName = modelName;
}
string TShirt::get_modelName()const {
    return this->modelName;
}

void TShirt::set_price(float price) {
    this->price=price;
}
float TShirt::get_price()const {
    return this->price;
}



void TShirt::display() const {
    cout << "Model Name: " << modelName << endl;
    cout << "Price: " << price << endl;
}

void TShirt::doSomething() const {
    cout<<"class: TShirt, function do something"<<endl;
}


void TShirt::print(std::ostream &os) const {
    cout << "Model Name: " << modelName << endl;
    cout << "Price: " << price << endl;
}




TShirt::TShirt(const TShirt &other): modelName(other.modelName), price(other.price) {
    cout<<"Called TShirt Copy constructor"<<endl;
}


TShirt::TShirt(): modelName{"None"}, price{0} {
    cout<<"Called TShirt constructor"<<endl;
}

TShirt::TShirt(std::string modelName): modelName{string(modelName)},price{0} {
    cout<<"Called TShirt constructor"<<endl;
}

TShirt::TShirt(std::string modelName, float price): modelName{string(modelName)}, price{float(price)} {
    cout<<"Called TShirt constructor"<<endl;
}



TShirt::~TShirt() {
    cout<<"Called TShirt destructor"<<endl;
}