//
// Created by Endi on 18.04.2024.
//

#include "Sneackers.h"
#include <iostream>

using namespace std;

void Sneackers::set_foot_size(float foot_size) {
    this->foot_size=foot_size;
}

float Sneackers::get_foot_size() const {
    return this->foot_size;
}

Sneackers::Sneackers(std::string modelName, float price,float foot_size):
        Footwear(string(modelName), float(price)), foot_size{float(foot_size)}{
    cout<<"Called Sneackers constructor"<<endl;
}

Sneackers::~Sneackers() {
    cout<<"Called Sneackers destructor"<<endl;
}