//
// Created by esteb on 6/4/2023.
//

#include "Product.h"

Product::Product(int id, const string &name, float price) : id(id), name(name), price(price) {}

int Product::getId() const {
    return id;
}

void Product::setId(int id) {
    Product::id = id;
}

const string &Product::getName() const {
    return name;
}

void Product::setName(const string &name) {
    Product::name = name;
}

float Product::getPrice() const {
    return price;
}

void Product::setPrice(float price) {
    Product::price = price;
}

ostream &operator<<(ostream &os, const Product &product) {
    os << "\nProduct: " << product.name << "- Id: " << product.id << "- Price: " << product.price;
    return os;
}
