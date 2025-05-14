//
// Created by Taner Akdemir on 14.05.2025.
//

#ifndef AKBANK_H
#define AKBANK_H
#include "../Bank.h"

class Akbank : public Bank {
public:
    Akbank(
        const string &_name,
        const string &_lastName,
        int _birthYear,
        const string &_phoneNumber,
        const string &_email,
        const string &_address,
        const string &_city,
        const string &_country
    );
    ~Akbank();

    void withDraw(float amount) override;
    void addDeposit(float amount) override;
};

#endif //AKBANK_H
