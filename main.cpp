#include "List.cpp"
#include "Product.h"

int main() {

    List<Product> * list = new List<Product>;

    Product * prod1 = new Product(1, "Jam", 7.80);
    Product * prod2 = new Product(2, "Bread",9.90);
    Product * prod3 = new Product(3, "Eggs",8);
    Product * prod4 = new Product(4, "Oats",6.50);
    Product * prod5 = new Product(5, "Vegetables",15.20);
    Product * prod6 = new Product(6, "Beef",9.30);


    list->insertAsStart(prod1);
    list->insertAsStart(prod2);
    list->insertAsStart(prod3);
    list->insertAsStart(prod4);
    list->insertAsStart(prod5);
    list->insertAsStart(prod6);

    cout<<list->toString()<<endl;
    list->remove(prod2);
    cout<<list->toString()<<endl;

    delete list;

    return 0;
}