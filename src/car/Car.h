//
// Created by Taner Akdemir on 9.05.2025.
//



#ifndef CAR_H
#define CAR_H
#include <iostream>

using namespace std;

class Car {
    public:
    Car(const string &_color, const string &_model);
    string color;
    string model;
    void printSpecs() const;
    ~Car();
};

#endif //CAR_H
