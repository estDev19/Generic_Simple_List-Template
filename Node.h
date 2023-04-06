//
// Created by esteb on 6/4/2023.
//

#ifndef GENERIC_SIMPLE_LIST_NODE_H
#define GENERIC_SIMPLE_LIST_NODE_H

#include <iostream>
#include <sstream>
using namespace  std;

template<class tipo>
class Node {
private:
    tipo *data;
    Node *nextNode;
public:
    Node();
    tipo *getData() const;
    void setData(tipo *data);
    Node * getNext() const;
    void setNext(Node * next);
};



#endif //GENERIC_SIMPLE_LIST_NODE_H
