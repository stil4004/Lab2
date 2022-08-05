//
// Created by vest3 on 26.07.2022.
//

#ifndef UNTITLED11_DYNAMICARRAY_H
#define UNTITLED11_DYNAMICARRAY_H

using namespace std;

template <class T> class DynamicArray{
private:
    int a_Size;
    int a_Capasity;
    T * a_Data;
public:

    // constuctors
    DynamicArray(T* items, int count);
    DynamicArray(int size);
    DynamicArray(DynamicArray<T> & dynamicArray );
    ~DynamicArray();

    // overload of operator
    T& operator[](int index);

    // decompos
    T Get(int index);
    int GetSize();

    // operations
    void Set(int index, T value);
    void Resize(int newSize);
    //friend ostream& operator<<(ostream& os, const DynamicArray<T>& dt);

    DynamicArray();
};









#endif //UNTITLED11_DYNAMICARRAY_H
