//
// Created by esteb on 6/4/2023.
//

#ifndef GENERIC_SIMPLE_LIST_PRODUCT_H
#define GENERIC_SIMPLE_LIST_PRODUCT_H
#include <iostream>
#include <sstream>
using namespace  std;

class Product {
private:
    int id;
    string name;
    float price;
public:
    Product(int id, const string &name, float price);
    int getId() const;
    void setId(int id);
    const string &getName() const;
    void setName(const string &name);
    void setPrice(float price);
    float getPrice() const;
    friend ostream &operator<<(ostream &os, const Product &product);
};


#endif //GENERIC_SIMPLE_LIST_PRODUCT_H
