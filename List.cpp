//
// Created by esteb on 6/4/2023.
//

#include "List.h"
template<class tipo>
List<tipo>::List() {
    head = new Node<tipo>;
}

template<class tipo>
List<tipo>::~List() {
    Node<tipo> * temp;
    Node<tipo> * previous;
    if(head->getNext() == nullptr){
        delete head;
    }else{
        while(head->getNext() != nullptr){
            temp = head;
            while(temp->getNext() != nullptr){
                previous = temp;
                temp = temp->getNext();
            }
            previous->setNext(nullptr);
            delete temp;
        }
    }
    cout << "Deleted list!" <<endl;
}

template<class tipo>
string List<tipo>::toString() {
    stringstream ss;
    Node<tipo> * temp = head;
    if(!isEmpty()){
        temp = temp->getNext();
        do{
            ss<<*temp->getData();
            //   ss<<"-->";
            temp = temp->getNext();
        }while (temp != nullptr);
        ss<<" <- last one"<<endl;
    }
    return ss.str();
}

template<class tipo>
void List<tipo>::insertAsEnd(tipo *p) {
    Node<tipo> * _new = new Node<tipo>;
    _new->setData(p);
    _new->setNext(nullptr);
    Node<tipo> * temp = head;
    if(temp == nullptr){
        head->setNext(_new);
    }else{
        while(temp->getNext() != nullptr){
            temp = temp->getNext();
        }
        temp->setNext(_new);
    }
}

template<class tipo>
void List<tipo>::insertAsStart(tipo *p) {
    Node<tipo> * _new = new Node <tipo>;
    _new->setData(p);
    _new->setNext(head->getNext());
    head->setNext(_new);
}

template<class tipo>
bool List<tipo>::remove(tipo *p) {
    if(find(p)) {
        delete p;
        return true;
    }
    else {
        cout<<"Not found";
        return false;
    }
}

template<class tipo>
bool List<tipo>::find(tipo *p) {
    Node<tipo> * temp = head;
    Node<tipo> * previous;
    if(temp->getNext() == nullptr){
        return false;
    }
    if (temp->getData() == p){
        return true;
    }else{
        while (temp!= nullptr){
            previous = temp;
            temp = temp->getNext();
            if(temp == nullptr){
                return false;
            }
            if (temp->getData() == p){
                previous->setNext(temp->getNext());
                return true;
            }
        }
    }
}

template<class tipo>
bool List<tipo>::isEmpty() {
    Node<tipo> * temp = head;
    return temp->getNext() == nullptr;
}