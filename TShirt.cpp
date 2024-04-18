//
// Created by Endi on 18.04.2024.
//

#include "TShirt.h"
#include <iostream>

using namespace std;

void TShirt::set_modelName(std::string modelName) {
    this->modelName = modelName; //приклад використання вказівника this
}
string TShirt::get_modelName()const {
    return this->modelName; //приклад використання вказівника this
}

void TShirt::set_price(float price) {
    this->price=price; //приклад використання вказівника this
}
float TShirt::get_price()const {
    return this->price; //приклад використання вказівника this
}


std::ostream& operator<<(std::ostream& os, const TShirt& obj) {// Перевантажений дружній оператор <<
    os << "Model Name: " << obj.modelName << endl << "Price: " << obj.price << endl;
    return os;
}

std::istream& operator>>(std::istream& is, TShirt& obj) {// Перевантажений дружній оператор >>
    std::cout << "Enter model name: ";
    is >> obj.modelName;
    std::cout << "Enter price: ";
    is >> obj.price;
    return is;
}

TShirt::TShirt(const TShirt &other): modelName(other.modelName), price(other.price) {}// Copy constructor (Всередині)

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