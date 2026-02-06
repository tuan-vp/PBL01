/*  ######################
      INT** and INT(*)[M]
    ###################### */
#include<iostream>
#include<iomanip>
using namespace std;
int ** funcA1(int **);
int ** funcA2 (int(*)[2], int, int) ;

int GA[10];
int main(){
    // int (*)[2]
    int LA[3][2] = {{1,2},{3,4},{5,6}};
    // int **
    int ** ptr = new int*[3];
    for(int i=0;i<3;i++){
        // int *
        ptr[i] = new int [2];
    }
    cout << ptr << endl;
    cout << ptr[0] << endl;
    cout << ptr[0][0] << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            ptr[i][j] = LA[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout << setw(4) << ptr[i][j];
        }
        cout << endl;
    }
    int ** f1pt = funcA1(ptr);
    int ** f2pt = funcA2(LA,3,2);
    funcA1(f2pt);
    funcA1(f1pt);
    delete [] ptr;
    delete [] f1pt;
    delete [] f2pt;
    cout << "END";
}
int ** funcA1(int ** p){
    cout << "-- call func 1" << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            p[i][j] *= 2;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout << setw(4) << p[i][j];
        }
        cout << endl;
    }
    cout << "-- return from func 1" << endl;
    return p;  
}
int ** funcA2(int (*p)[2], int row, int col){
    cout << "-- call func 2" << endl;
    int **pt = new int *[row];
    for(int i=0;i<row;i++)
        pt[i] = new int [col]; 
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            pt[i][j] = p[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << setw(4) << pt[i][j];
        }
        cout << endl;
    }
    cout << "-- return from func 2" << endl;
    return pt;  
}

/*  ########################
    SV viet FUNC truyen tham
    so INT** (cho ma tran co 
    dang    {{1,2,3}
            ,{4,5,6}
            ,{7,8,9}}
    ), FUNC thuc hien phep toan 
    chuyen vi (TRANSPOSE), va 
    tra ve INT** cua ket qua
    ######################## */
