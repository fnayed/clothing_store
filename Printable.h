//
// Created by Endi on 24.04.2024.
//

#ifndef SYRBUOOP_PRINTABLE_H
#define SYRBUOOP_PRINTABLE_H
#include <iostream>
using namespace std;

class Printable { // Абстрактний клас = Інтерфейс
    friend ostream &operator<<(ostream &os, const Printable &obj);
public:
    virtual void print(ostream &os) const = 0; // Pure virtual function
    virtual ~Printable() {};// virtual destructor
};

#endif //SYRBUOOP_PRINTABLE_H
