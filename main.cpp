#include <iostream>
#include "TShirt.h"
#include "Pants.h"
#include "Footwear.h"

using namespace std;

int main() {

    // Приклад роботи кода для лаби 2

    TShirt a("Nike");
    cout<<a.get_modelName()<<endl;
    cout<<a.get_price()<<endl;

    Pants b("Джинси", 500);
    cout<<b.get_modelName()<<endl;
    cout<<b.get_price()<<endl;

    Footwear с("adidas", 1000);
    cout<<с.get_modelName()<<endl;
    cout<<с.get_price()<<endl;
    return 0;
}
