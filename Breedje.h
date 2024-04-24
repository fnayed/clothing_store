//
// Created by Endi on 18.04.2024.
//

#ifndef SYRBUOOP_BREEDJE_H
#define SYRBUOOP_BREEDJE_H
#include "Pants.h"
#include <iostream>

using namespace std;
class Breedje: public Pants{
private:
    int numberOfPockets;
public:
    void set_numberOfPockets(int numberOfPockets);
    int get_numberOfPockets()const;

    void display()const override;//Унаслідкова Перша Віртуальна функція display

    void doSomething()const override;//Унаслідкова Друга Віртуальна функція doSomething

    void print(ostream &os) const override; // Унаслідкована функія з Pants

    Breedje(Breedje&& other)noexcept;

    Breedje& operator=(const Breedje& other);

    Breedje(string modelName="None", float price=0, int numberOfPockets = 0);
    virtual ~Breedje();// virtual деструктор
};


#endif //SYRBUOOP_BREEDJE_H
