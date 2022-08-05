//
// Created by vest3 on 26.07.2022.
//
#include <iostream>
#include "DynamicArray.h"
using namespace std;

template <class T>
DynamicArray<T>::DynamicArray(int size) {
    a_Size = size;
    a_Capasity = size;
    if(size != 0){
        a_Data = new T[size];
    }
    else
        a_Data = 0;

}

template <class T>
DynamicArray<T>::DynamicArray(T* items, int count){
    a_Size = count;
    a_Capasity = count;
    for(int i = 0; i < a_Size; i++){
        a_Data[i] = items[i];
    }
}

template <class T>
int DynamicArray<T>::GetSize() {
    return a_Size;
}

template <class T>
T &DynamicArray<T>::operator[](int index) {
    return a_Data[index];
}

template <class T>
T DynamicArray<T>::Get(int index) {
    return a_Data[index];
}

template <class T>
DynamicArray<T>::DynamicArray(DynamicArray<T> &dynamicArray) {
    a_Size = dynamicArray.a_Size;
    a_Capasity = dynamicArray.a_Capasity;
    if(a_Size != 0){
        a_Data = new T[a_Size];
    } else
        a_Data = 0;
    for(int i = 0;i < a_Size; i++){
        a_Data[i] = dynamicArray.a_Data[i];
    }
}

template <class T>
void DynamicArray<T>::Set(int index, T value) {
    a_Data[index] = value;
}

template <class T>
DynamicArray<T>::~DynamicArray() {
    if(a_Data)
        delete[] a_Data;
}

template <class T>
void DynamicArray<T>::Resize(int newSize) {

    if(newSize > a_Capasity){

        int new_Capasity = newSize;
        T * new_Data = new T[newSize];

        for(int i = 0;i < newSize; i++)
            new_Data[i] = a_Data[i];
        a_Data = new_Data;
        a_Size = newSize;
        a_Capasity = new_Capasity;

    }
    else {
        if (newSize < a_Size) {
            for (int i = newSize; i < a_Size; i++) {
                a_Data[i]=0;
            }
        }

    }
    a_Size = newSize;
}

template<class T>
DynamicArray<T>::DynamicArray() {

}
template <class T>
ostream &operator<<(ostream &os, const DynamicArray<T> &dt) {
    for(int i = 0;i < dt.a_Size; i++){
        os << dt[i]<<"/";
    }
    return os;
}


