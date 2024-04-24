//
// Created by Endi on 18.04.2024.
//

#ifndef SYRBUOOP_LONGSLEEVETSHIRT_H
#define SYRBUOOP_LONGSLEEVETSHIRT_H
#include "TShirt.h"
#include <iostream>

using namespace std;
class LongSleeveTShirt: public TShirt {
private:
    string color;
public:
    void set_color(string color);
    string get_color()const;

    LongSleeveTShirt(const LongSleeveTShirt& other);

    void display()const override; // Унаслідкована віртуальна функція display

    void doSomething()const; // Перегружена функція doSomathing

    void print(ostream &os) const override; // Унаслідкована функія з TShirt

    LongSleeveTShirt(string modelName="None", float price=0, string color="None");
    virtual ~LongSleeveTShirt();// virtual деструктор
};


#endif //SYRBUOOP_LONGSLEEVETSHIRT_H
