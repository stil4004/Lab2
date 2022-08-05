//
// Created by vest3 on 26.07.2022.
//

#include <cstdlib>
#include <iostream>
#include "LinkedList.h"
template <class T>
LinkedList<T>::LinkedList() {
    //Node *head = new Node();
    head = NULL;
    Number = 0;
}

template <class T>
LinkedList<T>::LinkedList(T *items, int count) {
    //LinkedList<T> List;
    //Node *temp = new Node();
    //Node *usable = new Node();
    for(int i = 0; i < count; i++){
        Append(items[i]);
    }
}

template <class T>
LinkedList<T>::LinkedList(LinkedList<T> &list) {
    head = list.head;
}

template <class T>
T LinkedList<T>::GetFirst() {
    return head->Data;
}

template <class T>
T LinkedList<T>::GetLast() {
    Node *temp;
    temp = head;
    do{
        temp = temp->Next;
    }while(temp->Next != NULL);
    return temp->Data;
}

template <class T>
T LinkedList<T>::Get(int index) {
    Node *temp = new Node();
    temp = head;
    for(int i = 0; i < index; i++){
        temp = temp->Next;
    }
    return temp->Data;
}

template <class T>
void LinkedList<T>::Append(T item) {
    Node *temp = new Node();
    Node *NewNode = new Node();
    NewNode->Data = item;
    if(head == NULL){
        head = NewNode;
    }
    else{
        for(temp = head; temp->Next != NULL;temp = temp->Next);
        temp->Next = NewNode;
    }
    //delete temp;
    //delete NewNode;
}

template <class T>
int LinkedList<T>::GetLength() {
    int count = 0;
    Node *temp = new Node();
    //temp = head;
    for(temp = head; temp->Next != NULL;temp = temp->Next){
        count++;
    }
    count++;
    return count;
}

template <class T>
LinkedList<T> *LinkedList<T>::GetSubList(int startIndex, int endIndex) {
    LinkedList<T> *SubList = new LinkedList<T>();
    Node *temp = new Node();
    temp = head;
    /*for(int i = 0; i < startIndex;i++){
        temp = temp->Next;
    }
    for(int i = startIndex; i < endIndex;i++){
        SubList->Append(temp->Data);
        temp = temp->Next;
    }*/
    for(int i = startIndex; i <= endIndex; i++){
        SubList->Append(Get(i));
    }

    return SubList;
}

template<class T>
void LinkedList<T>::PrintList() {
    Node* temp = new Node();
    temp = head;
    if(head != NULL){
            for(int i = 0; i < GetLength();i++){
                cout << temp->Data << "/";
                temp = temp->Next;
            }
    } else
        cout<<"List is Empty";
}

template <class T>
ostream &operator<<(ostream &os, const LinkedList<T> &list) {

    for(int i = 0;i < 5; i++){
    }
    return os;
}

template <class T>
void LinkedList<T>::Prepend(T item) {
    Node *temp = new Node;
    temp->Data = item;
    temp->Next = head;
    head = temp;
}

template<class T>
void LinkedList<T>::PrintIndex(int index) {
    cout<<Get(index);

}

template<typename T>
ostream & operator << (ostream & out, LinkedList<T> *a)
{
    for (int i = 0; i < a->GetLength(); ++i)
        out << a->Get(i) << " ";
    return out;
}
