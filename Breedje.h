//
// Created by Endi on 18.04.2024.
//

#ifndef SYRBUOOP_BREEDJE_H
#define SYRBUOOP_BREEDJE_H
#include "Pants.h"
#include <iostream>

using namespace std;
class Breedje: public Pants{ // Наслідуємо батьківський клас Pants (наслідування типу public)
private:
    int numberOfPockets;
public:
    void set_numberOfPockets(int numberOfPockets);
    int get_numberOfPockets()const;

    Breedje(Breedje&& other)noexcept; // Унаслідований Move constructor (Оболочка)

    Breedje& operator=(const Breedje& other); // Унаслідований operator= (Оболочка)

    Breedje(string modelName="None", float price=0, int numberOfPockets = 0);
    ~Breedje();
};


#endif //SYRBUOOP_BREEDJE_H
