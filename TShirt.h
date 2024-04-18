//
// Created by Endi on 18.04.2024.
//

#ifndef SYRBUOOP_FURNITURES_H
#define SYRBUOOP_FURNITURES_H
#include <iostream>

using namespace std;

class TShirt {
private: // Приватний модифікатор доступу (Коли працюєш в main його поля не доступні)
    string modelName; // Поле
    float price; // Поле

public: // Публічний модифікатор доступу (Коли працюєш в main його поля доступні)
    void set_modelName(string modelName);
    string get_modelName();
    void set_price(float price);
    float get_price();

    // Перегружений конструктор (Оболочка) -->
    TShirt();
    TShirt(string modelName);
    TShirt(string modelName, float price);
    // <---

    ~TShirt(); // Деструктор (Оболочка)
};


#endif //SYRBUOOP_FURNITURES_H
