//
// Created by Endi on 18.04.2024.
//

#ifndef SYRBUOOP_PANTS_H
#define SYRBUOOP_PANTS_H
#include <iostream>
#include "Printable.h"

using namespace std;
class Pants: public Printable{
private:
    string modelName;
    float price;
public:
    void set_modelName(string modelName);
    string get_modelName()const;
    void set_price(float price);
    float get_price()const;

    virtual void display()const;//Перша Віртуальна функція display

    virtual void doSomething()const;//Друга Віртуальна функція doSomething

    virtual void print(ostream &os) const override; // Унаслідкована функія з інтерфейса

    Pants& operator=(const Pants& other);

    Pants& operator--();
    Pants& operator++();

    Pants operator-(float value);
    Pants operator+(float value);

    Pants(Pants&& other) noexcept;

    Pants(string modelName = "None", float price = 0);

   virtual ~Pants();// virtual деструктор
};


#endif //SYRBUOOP_PANTS_H
