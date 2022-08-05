//
// Created by vest3 on 31.07.2022.
//

#ifndef UNTITLED11_LINKEDLISTSEQUENCE_H
#define UNTITLED11_LINKEDLISTSEQUENCE_H
#include "LinkedList.h"
#include "LinkedList.cpp"
#include <iostream>
#include "Sequance.h"
template <class T>
class LinkedListSequence: public Sequence<T> {
private:
    LinkedList<T>* list;
public:

    // Constructors
    LinkedListSequence();
    LinkedListSequence(T* items, int count);
    LinkedListSequence(LinkedList<T> & list);

    // Decompose
    T GetFirst();
    T GetLast();
    T GetIndex(int index);
    int GetLength();
    Sequence<T>* GetSubsequence(int startIndex, int endIndex);

    // Operations
    void Append(T item);
    void Prepend(T item);
    void InsetAt(T item, int index);
    Sequence<T>* Concat(Sequence<T> * list);
};


#endif //UNTITLED11_LINKEDLISTSEQUENCE_H
