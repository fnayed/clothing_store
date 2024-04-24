#include "TShirt.h"
#include "Pants.h"
#include "Footwear.h"
#include "Sneackers.h"
#include "LongSleeveTShirt.h"
#include "Breedje.h"
#include "Printable.h"
#include <iostream>

using namespace std;

ostream &operator<<(ostream &os, const Printable &obj) {
    obj.print(os);
    return os;
}

int main() {
    // Приклади для 5 лаби

    // Проблема (Static Method Binding)

//    TShirt *p = new LongSleeveTShirt;
//    p->doSomething();


    // використання динамічного(Run-time) поліморфізму | через вказівник

//        Pants *p = new Breedje;
//        p->doSomething();


    // використання динамічного(Run-time) поліморфізму | через посилання

//    Breedje a;
//    Pants &p = a;
//    p.doSomething();


    // Приклад використаня Інтерфейсу в простих класах

//    TShirt a("Simple white t-shirt", 100);
//    LongSleeveTShirt b("Nike", 200, "black");
//    cout << endl << a << endl;
//    cout << endl << b << endl;

    return 0;
}