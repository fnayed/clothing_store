//
// Created by Endi on 18.04.2024.
//

#ifndef SYRBUOOP_SNEACKERS_H
#define SYRBUOOP_SNEACKERS_H
#include "Footwear.h"
#include <iostream>

using namespace std;
class Sneackers: public Footwear{
private:
    float foot_size;
public:
    void set_foot_size(float foot_size);
    float get_foot_size()const;


    Sneackers(string modelName="None", float price=0, float foot_size=0);
    ~Sneackers();
};


#endif //SYRBUOOP_SNEACKERS_H
