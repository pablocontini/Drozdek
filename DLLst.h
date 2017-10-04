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
  
