#include <iostream>
#include "DynamicArray.h"
#include "DynamicArray.cpp"
#include "LinkedList.h"
#include "LinkedList.cpp"

using namespace std;

int main() {


    LinkedList<int> *List = new LinkedList<int>();
    List->Append(10);
    List->Append(7);
    List->Append(8);
    List->Prepend(33);
    List->PrintList();
    LinkedList<int> *List2 = new LinkedList<int>(*List->GetSubList(0,2));
    List2->PrintList();
    List2->PrintIndex(1);
    printf("\n");
    cout<<List2;
    return 0;
}