#ifndef DOUBLY_LINKED_LIST
#define DOUBLY_LINKED_LIST

#include <iostream>

template<class T>
class Node {
public:
  Node() {
    next = prev = 0;
  }
  Node(const T& el, Node *n = 0, Node *p = 0) {
    info = el; next = n; prev = p;
  }
  T info;
  Node *next, *prev;
},

template<class T>
class DoublyLinkedList {
public:
  DoublyLinkedList() {
    head = tail = 0;
  }
  void addToDLLTail(cont T&);
  T deleteFromDLLTail();
protected:
  Node<T> *head, *tail;
};

template<class T>
void DoublyLinkedList<T>::addToDLLTail(const T& el) {
  if (tail!=0) {
    tail = new Node<T>(el, 0, tail);
    tail->prev->next=tail;
  }
  else head = tail = new Node<T>(el);
}

template<class T>
T DoublyLinkedList<T>::deleteFromDLLTail() {
  T el = tail->info;
  if (head == tail) { // if only one node in the list;
    delete head;
    head = tail = 0;
  }
  else {              // if more than one node in the list;
    tail = tail->prev;
    delete tail->next;
    tail->next = 0;
  }
  return el;
}

#endif
