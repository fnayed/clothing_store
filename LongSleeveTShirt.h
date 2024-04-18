//
// Created by Endi on 18.04.2024.
//

#ifndef SYRBUOOP_LONGSLEEVETSHIRT_H
#define SYRBUOOP_LONGSLEEVETSHIRT_H
#include "TShirt.h"
#include <iostream>

using namespace std;
class LongSleeveTShirt: public TShirt {// Наслідуємо батьківський клас TShirt (наслідування типу public)
private:
    string color;
public:
    void set_color(string color);
    string get_color()const;

    LongSleeveTShirt(const LongSleeveTShirt& other); // Унаслідований Copy constructor (Оболочка)

    LongSleeveTShirt(string modelName="None", float price=0, string color="None");
    ~LongSleeveTShirt();
};


#endif //SYRBUOOP_LONGSLEEVETSHIRT_H
