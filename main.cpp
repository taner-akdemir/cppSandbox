#include <iostream>

#include "src/bank/akbank/Akbank.h"

using namespace std;

// Generics - template metot

template <typename T>
T add(T a, T b) {
    return a + b;
}

template <typename T>

class Kare {
    private:
        T kenar;
    public:
    explicit Kare(T _kenar) {
        kenar = _kenar;
    }

    T calculateArea() {
        return kenar * kenar;
    }

    void show() {
        cout << "Kenar: " << kenar << endl;
        cout << "Area: " << this->calculateArea() << endl;
    }

};


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


    // Lambda Expression. Sadece içinde olduğu metot görebilir
    // [&] yaparsak dış değişkenlerin tamamını yakalar ve referansı alınır
    // [=] yaparsak dış değişkenlerin tamamını yakalar ve value (copy) alınır. mutable return type verilmelidir

    int count = 0;
    cout << [](const int a, const int b)->int {return a + b;}(3,4) << endl;

    auto add = [=]() mutable->void {
        ++count;
        cout << count << endl;
    };

    add();

    cout << count << endl;


    Kare<double> k1(5);
    k1.show();

    return 0;
}
