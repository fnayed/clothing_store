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
    static int count; //  static поле
public:
    void set_modelName(string modelName);
    string get_modelName()const; //Використати модифікатор const
    void set_price(float price);
    float get_price()const; //Використати модифікатор const
    int get_the_number_of_class_objects() const; //Використати модифікатор const

    // Делегований конструктор (Оболочка) -->
    Footwear(string modelName, float price);
    Footwear(string modelName);
    Footwear();
    // <---

    ~Footwear(); // Деструктор (Оболочка)
};


#endif //SYRBUOOP_FOOTWEAR_H
