/*  ######################
    TWO-DIM ARRAY and FUNC
    ###################### */

#include<iostream>
using namespace std;
int funcA1 (int(*)[2]);
int * funcA2(int(*)[2]);
int (*funcA3 (int(*)[2]))[2] ;

int GA[10];
int main(){
    int LA[3][2] = {{1,2},{3,4},{5,6}};
    // cout << LA;
    cout << sizeof(LA) << endl;
    cout << LA << endl;
    cout << funcA1(LA) << endl;  // Recommended
    cout << funcA2(LA) << endl;
    cout << funcA3(LA) << endl;
}
int funcA1 (int(*fa1)[2]){   // pointer
    cout << sizeof(fa1) << endl;
    return fa1[0][0];
}
int * funcA2 (int(*fa2)[2]){   // pointer
    cout << sizeof(fa2) << endl;
    return &fa2[0][0];
}
int (*funcA3 (int(*fa3)[2]))[2]{   // pointer
    cout << sizeof(fa3) << endl;
    return fa3;
}

/*  ########################
    SV viet FUNC truyen mang 
    LA[3][3], FUCN in ra gia
    tri lon nhat (MAX), va gia 
    tri nho nhat (MIN) cua 
    mang truyen vao
    ######################## */
