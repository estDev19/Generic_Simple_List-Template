//
// Created by esteb on 6/4/2023.
//

#include "Node.h"

template<class tipo>
void Node<tipo>::setNext(Node *next) {
    Node::nextNode = next;
}
template<class tipo>
Node<tipo> *Node<tipo>::getNext() const {
    return nextNode;
}
template<class tipo>
void Node<tipo>::setData(tipo *data) {
    Node::data = data;
}
template<class tipo>
tipo *Node<tipo>::getData() const {
    return data;
}
template<class tipo>
Node<tipo>::Node() {
    data = nullptr;
    nextNode= nullptr;
}