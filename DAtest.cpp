//
// Created by vest3 on 26.07.2022.
//
DynamicArray<int>* test2 = new DynamicArray<int>(test2, 3);
int k;
for(int i = 0; i < 3;i++){
test2->Set(i,i);
k = test2->Get(i);
cout<<"expected : "<< i << " got : " << k << "\n";
}