#include <iostream>

#include "src/bank/akbank/Akbank.h"

using namespace std;

int main() {
    auto *akbank = new Akbank("Taner",
                              "Akdemir",
                              1981,
                              "05303200647",
                              "aaa@gmail.com",

                              "Atakent Mah. 1472.cad Eda Apt. No:5 D:3 Elvankent",
                              "Ankara",
                              "Türkiye");

    akbank->addDeposit(1000);
    akbank->withDraw(500);
    cout << akbank->getBalance() << endl;

    delete akbank;

    return 0;
}
