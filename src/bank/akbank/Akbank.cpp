//
// Created by Taner Akdemir on 14.05.2025.
//

#include "Akbank.h"


Akbank::Akbank(
    const string &_name,
    const string &_lastName,
    const int _birthYear,
    const string &_phoneNumber,
    const string &_email,
    const string &_address,
    const string &_city,
    const string &_country): Bank(_name,_lastName,_birthYear,_phoneNumber,_email,_address,_city,_country) {

    name = _name;
    lastName = _lastName;
    birthYear = _birthYear;
    phoneNumber = _phoneNumber;
    email = _email;
    address = _address;
    city = _city;
    country = _country;
    balance = 0.0;
}

Akbank::~Akbank() {
    cout << "Akbank destructor" << endl;
}



void Akbank::withDraw(const float amount) {
    balance -= amount;
}

void Akbank::addDeposit(const float amount) {
    balance += amount;
}