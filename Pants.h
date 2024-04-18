//
// Created by Endi on 18.04.2024.
//

#ifndef SYRBUOOP_PANTS_H
#define SYRBUOOP_PANTS_H
#include <iostream>

using namespace std;
class Pants {
private:
    string modelName;
    float price;
public:
    void set_modelName(string modelName);
    string get_modelName()const; //Використати модифікатор const
    void set_price(float price);
    float get_price()const; //Використати модифікатор const

    Pants& operator=(const Pants& other); // Оператор присвоєння

    Pants& operator--(); // Унарний оператор "--" (зменшити ціну)
    Pants& operator++();// Унарний оператор "++" (Збільшити ціну)

    Pants operator-(float value); // Бінарні оператор "-" (зменшити ціну)
    Pants operator+(float value);// Бінарні оператор "+" (Збільшити ціну)

    Pants(Pants&& other) noexcept; // Move constructor (Обложка)

    Pants(string modelName = "None", float price = 0);// Конструктор з параметрами за замовченням (Оболочка)

    ~Pants();// Деструктор (Оболочка)
};


#endif //SYRBUOOP_PANTS_H
