//
// Created by Endi on 18.04.2024.
//

#ifndef SYRBUOOP_FOOTWEAR_H
#define SYRBUOOP_FOOTWEAR_H
#include <iostream>
#include "Printable.h"

using namespace std;
class Footwear: public Printable{ // Наслідування інтерфейсу
private:
    string modelName;
    float price;
    static int count;
public:
    void set_modelName(string modelName);
    string get_modelName()const;
    void set_price(float price);
    float get_price()const;
    int get_the_number_of_class_objects() const;

    virtual void display()const;//Віртуальна функція display

    virtual void doSomething()const final; //Продемонструвати можливості модифікатора final

    virtual void print(ostream &os) const override; // Унаслідкована функія з інтерфейса


    Footwear(string modelName, float price);
    Footwear(string modelName);
    Footwear();


    ~Footwear();
};


#endif //SYRBUOOP_FOOTWEAR_H
