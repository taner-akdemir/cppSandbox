//
// Created by Taner Akdemir on 14.05.2025.
//

#ifndef BANK_H
#define BANK_H

#include <iostream>

using namespace std;

class Bank {
public:
    Bank(
        const string &_name,
        const string &_lastName,
        int _birthYear,
        const string &_phoneNumber,
        const string &_email,
        const string &_address,
        const string &_city,
        const string &_country
    );

    ~Bank();

    string getName();
    string getLastName();
    int getBirthYear() const;
    string getAccountNumber();
    string getPhoneNumber();
    string getEmail();
    string getExpireMonth() const;
    int getExpireYear() const;
    int getCVV() const;
    string getAddress() const;
    int getAge() const;
    float getBalance() const;
protected:
    string name;
    string lastName;
    int birthYear{};
    string accountNumber;
    string phoneNumber;
    string email;
    string expireMonth;
    int expireYear{};
    int CVV{};
    string address;
    string city;
    string country;
    float balance;

    static int generateCVV();
    virtual void withDraw(float amount);
    virtual void addDeposit(float amount);
    static string generateAccountNumber();
    static int generateNumber(int startNumber, int endNumber);
};

#endif //BANK_H
