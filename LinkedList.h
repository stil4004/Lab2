//
// Created by vest3 on 26.07.2022.
//

#ifndef UNTITLED11_LINKEDLIST_H
#define UNTITLED11_LINKEDLIST_H

#include <iostream>

using namespace std;


template <class T> class LinkedList {
private:
    class Node
    {
        friend class LinkedList<T>;
    private:
        Node *Next;
        T Data;

        Node(){Next = NULL;};
        ~Node(){}
    };
    Node *head;
    int Number;
public:
    // adding object
    LinkedList(T* items, int count);
    LinkedList();
    LinkedList(LinkedList<T> & list);

    // Decompos
    T GetFirst();
    T GetLast();
    T Get(int index);
    LinkedList<T>* GetSubList(int startIndex, int endIndex);
    int GetLength();

    // Operations
    void Append(T item);
    void Prepend(T item);
    void InsertAt(T item, int index);
    LinkedList<T>* Concat(LinkedList<T> *list);

    // Out
    void PrintList();
    void PrintIndex();
    //friend ostream& operator<<(ostream& os, const LinkedList<T>& list);
    void PrintIndex(int index);
};
//ostream& operator<<(ostream& os, const LinkedList<T>& list);



#endif //UNTITLED11_LINKEDLIST_H
