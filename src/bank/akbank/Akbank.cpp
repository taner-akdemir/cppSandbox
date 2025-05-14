//
// Created by Taner Akdemir on 14.05.2025.
//

#include "Akbank.h"


void Akbank::withDraw(const float amount) {
    balance -= amount;
}

void Akbank::addDeposit(const float amount) {
    balance += amount;
}