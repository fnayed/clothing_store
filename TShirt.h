//
// Created by Endi on 18.04.2024.
//

#ifndef SYRBUOOP_FURNITURES_H
#define SYRBUOOP_FURNITURES_H
#include <iostream>
#include "Printable.h"

using namespace std;

class TShirt: public Printable{
private:
    string modelName;
    float price;

public:
    void set_modelName(string modelName);
    string get_modelName()const;
    void set_price(float price);
    float get_price()const;

    virtual void display()const;//Віртуальна функція display

    void doSomething()const; // Перевантажена функція

    virtual void print(ostream &os) const override; // Унаслідкована функія з інтерфейса

    TShirt(const TShirt& other);


    TShirt();
    TShirt(string modelName);
    TShirt(string modelName, float price);

    virtual ~TShirt();// virtual деструктор
};


#endif //SYRBUOOP_FURNITURES_H
