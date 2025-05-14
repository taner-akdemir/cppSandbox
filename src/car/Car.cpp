//
// Created by Taner Akdemir on 9.05.2025.
//

#include "Car.h"

Car::Car(const string &_color, const string &_model) {
    color = _color;
    model = _model;
;}

Car::~Car() {
    cout <<  model <<" car is destroyed" << endl;
}


void Car::printSpecs() const {
    cout << "color: " << Car::color << endl;
    cout << "model: " << Car::model << endl;
}
