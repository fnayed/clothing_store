#include "TShirt.h"
#include "Pants.h"
#include "Footwear.h"
#include <iostream>

using namespace std;


int main() {
    // Приклад роботи кода для лаби 2

//    TShirt a("Nike");
//    cout<<a.get_modelName()<<endl;
//    cout<<a.get_price()<<endl;
//
//    Pants b("Джинси", 500);
//    cout<<b.get_modelName()<<endl;
//    cout<<b.get_price()<<endl;
//
//    Footwear с("adidas", 1000);
//    cout<<с.get_modelName()<<endl;
//    cout<<с.get_price()<<endl;

    // Приклад роботи кода для лаби 3

    // Copy constructor
//    TShirt a("Nike", 200);
//    TShirt b(a);
//    std::cout << b.get_modelName() << std::endl;
//    std::cout << b.get_price() << std::endl;

    // Move constructor
//    Pants a("Джинси", 700);
//    Pants b(move(a));
//    std::cout << b.get_modelName() << std::endl;
//    std::cout << b.get_price() << std::endl;

    //  Приклад Використати модифікатор static із полем та методом класу.
//    Footwear a;
//    cout<<a.get_the_number_of_class_objects()<<endl;
//    Footwear b;
//    Footwear c;
//    Footwear d;
//    cout<<a.get_the_number_of_class_objects()<<endl;
//    cout<<c.get_the_number_of_class_objects()<<endl;

    // Приклад Використання бінарних операторів -/+
//    Pants a("Джинси", 400);
//    cout<<a.get_price()<<endl;
//    a=a-102;
//    cout<<a.get_price()<<endl;
//    a=a+600;
//    cout<<a.get_price()<<endl;


    // Приклад Використання унарних операторів --/++
//    Pants a("Джинси", 400);
//    cout<<a.get_price()<<endl;
//    --a;
//    cout<<a.get_price()<<endl;
//    ++a;
//    cout<<a.get_price()<<endl;

    // Приклад використання Перевантажений дружній оператор >>/<<
    TShirt a;
    cin>>a;
    cout<<a;
    return 0;
}