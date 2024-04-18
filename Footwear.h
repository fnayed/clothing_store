//
// Created by Endi on 18.04.2024.
//

#ifndef SYRBUOOP_FOOTWEAR_H
#define SYRBUOOP_FOOTWEAR_H
#include <iostream>

using namespace std;
class Footwear {
private:
    string modelName;
    float price;
public:
    void set_modelName(string modelName);
    string get_modelName();
    void set_price(float price);
    float get_price();

    // Делегований конструктор (Оболочка) -->
    Footwear(string modelName, float price);
    Footwear(string modelName);
    Footwear();
    // <---

    ~Footwear(); // Деструктор (Оболочка)
};


#endif //SYRBUOOP_FOOTWEAR_H
