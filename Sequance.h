//
// Created by vest3 on 31.07.2022.
//

#ifndef UNTITLED11_SEQUANCE_H
#define UNTITLED11_SEQUANCE_H
#include <iostream>

using namespace std;

template <class T> class Sequence{
public:
    virtual T GetFirst();
    virtual T GetLast();
    virtual T GetIndex(int index);
    virtual Sequence<T>* GetSubsequence(int startIndex, int endIndex);
    virtual int GetLength();


    virtual void Append(T item);
    virtual void Prepend(T item);
    virtual void InsertAt(T item, int index);
    virtual Sequence<T>* Concat(Sequence<T>* list);
};

template <class T>
ostream& operator<<(ostream& out, Sequence<T>* seq){
    for(int i = 0; i < seq->GetLength();i++){
        out<<seq->GetIndex(i)<<" /";
    }
    return out;
}

#endif //UNTITLED11_SEQUANCE_H
