//
// Created by esteb on 6/4/2023.
//

#ifndef GENERIC_SIMPLE_LIST_LIST_H
#define GENERIC_SIMPLE_LIST_LIST_H

#include <ostream>
#include "Node.cpp"

template<class tipo>
class List {
private:
    Node<tipo> * head;
public:
    List();
    ~List();
    string toString();
    void insertAsEnd(tipo*);
    void insertAsStart(tipo*);
    bool remove(tipo*);
    bool isEmpty();
    bool find(tipo*);
};


#endif //GENERIC_SIMPLE_LIST_LIST_H
