//
// Created by Endi on 18.04.2024.
//

#include "TShirt.h"
#include <iostream>

using namespace std;

void TShirt::set_modelName(std::string modelName) {
    this->modelName = modelName;
}
string TShirt::get_modelName() {
    return this->modelName;
}

void TShirt::set_price(float price) {
    this->price=price;
}
float TShirt::get_price() {
    return this->price;
}

// Перегружений конструктор (Всередині (тіпа логіка його) ) -->
TShirt::TShirt(): modelName{"None"}, price{0} { // Списки ініціалізії конструкторів: modelName{"None"}, price{0}
    cout<<"Called TShirt constructor"<<endl;
}

TShirt::TShirt(std::string modelName): modelName{string(modelName)},price{0} { // Списки ініціалізії конструкторів:  modelName{string(modelName)},price{0}
    cout<<"Called TShirt constructor"<<endl;
}

TShirt::TShirt(std::string modelName, float price): modelName{string(modelName)}, price{float(price)} { //  Списки ініціалізії конструкторів: modelName{string(modelName)}, price{float(price)}
    cout<<"Called TShirt constructor"<<endl;
}
// <---

// Деструктор (Всередині)
TShirt::~TShirt() {
    cout<<"Called TShirt destructor"<<endl;
}