//
// Created by Taner Akdemir on 14.05.2025.
//

#include "Bank.h"
#include <iostream>
#include <random>
#include <ctime>

using namespace std;

Bank::Bank(
    const string &_name,
    const string &_lastName,
    const int _birthYear,
    const string &_phoneNumber,
    const string &_email,
    const string &_address,
    const string &_city,
    const string &_country) {
    name = _name;
    lastName = _lastName;
    birthYear = _birthYear;
    phoneNumber = _phoneNumber;
    email = _email;
    address = _address;
    city = _city;
    country = _country;
    balance = 0.0;

    const time_t now = time(nullptr);
    const tm *time = localtime(&now);
    const int year = time->tm_year;
    const int month = time->tm_mon + 1;
    string monthStr = to_string(month);
    if (month>9) {
        monthStr = "0" + monthStr;
    }
    expireMonth = monthStr;
    expireYear = year + 10;
    accountNumber = generateAccountNumber();
    CVV = generateCVV();
}

void Bank::withDraw(const float amount) {
    cout << "withdraw bank" << accountNumber << endl;
    balance -= amount;
}

void Bank::addDeposit(const float amount) {
    cout << "addDeposit bank" << accountNumber << endl;
    balance += amount;
}

Bank::~Bank() {
    cout << "Bank is destroyed" << endl;
}

string Bank::getName() {
    return name;
}

string Bank::getLastName() {
    return lastName;
}

string Bank::getAccountNumber() {
    return accountNumber;
}

string Bank::getPhoneNumber() {
    return phoneNumber;
}

string Bank::getEmail() {
    return email;
}

string Bank::getExpireMonth() const {
    return expireMonth;
}

string Bank::getAddress() const {
    return expireMonth;
}

int Bank::getExpireYear() const {
    return expireYear;
}

int Bank::getBirthYear() const {
    return birthYear;
}

int Bank::getAge() const {
    const time_t now = time(nullptr);
    const tm *time = localtime(&now);
    const int year = time->tm_year;
    return year - birthYear;
}

int Bank::getCVV() const {
    return CVV;
}

float Bank::getBalance() const {
    return balance;
}



int Bank::generateNumber(const int startNumber, const int endNumber) {
    random_device seed;
    mt19937 gen{seed()};
    uniform_int_distribution<int> dist{startNumber, endNumber};
    return dist(gen);
}

int Bank::generateCVV() {
    return generateNumber(100,999);
};

string Bank::generateAccountNumber() {
    vector<string> generatedNumbers(4);
    string accountNumber;

    for (string & generatedNumber : generatedNumbers) {
        generatedNumber = to_string(generateNumber(1000, 9999));
        generatedNumbers.push_back(generatedNumber);
    }

    for (string & generatedNumber : generatedNumbers) {
        if (&generatedNumber != &generatedNumbers.back()) {
            accountNumber += generatedNumber + "-";
            continue;
        }
        accountNumber += generatedNumber;
    }

    return accountNumber;
}
