/*  ######################
    TWO-DIM ARRAY and FUNC
    ###################### */

#include<iostream>
using namespace std;
int* funcA1(int*);
int* funcA2(int*);
int * funcA3  (int (&)[5]);

int GA[10];
int main(){
    int LA[5] = {1,2,3,4,5};
    // cout << LA;
    cout << sizeof(LA) << endl;
    cout << LA << endl;
    cout << funcA1(LA) << endl;  // Recommended
    cout << funcA2(LA) << endl;
    cout << funcA3(LA) << endl;
}
int * funcA1 (int * fa1){   // pointer
    cout << sizeof(fa1) << endl;
    return fa1;
}
int * funcA2  (int fa2[3]){ // adjust to pointer
    cout << sizeof(fa2) << endl;
    return fa2;
}
int * funcA3  (int (&fa3)[5]){ // array with 5 elements
    cout << sizeof(fa3) << endl;
    return fa3;
}

/*  ########################
    SV viet FUNC truyen mang
    LA = {1, ... , 100}, FUCN 
    dao vi tri cac phan tu va
    tra ve INT* cua ket qua
    ######################## */
