#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class first{
    protected:  int X;
    public:     int Y;
        first(int _x, int _y):X(_x),Y(_y){};
        virtual void show(){cout << "I am the First one"<<endl;};
};
class second:public first{
    protected:  int X;
    public:     int Y;
        second(int _x, int _y):first(2*_x,2*_y),X(_x),Y(_y){};
        void show() override{cout<<"I am the Second one"<<endl;};
};
class third:public second{
    protected:  int X;
    public:     int Y;
        third(int _x, int _y):
        second(2*_x,2*_y),X(_x),Y(_y){};
        // Sinh viên kiểm tra từng câu lệnh
        // và giải thích vì sao có lỗi
        // void show() override{cout<<"I am the Third one"<<endl;};
        void show(int X){cout<<"I am the Third one"<<endl;};
        // void show(float X) override{cout<<"I am the Third one"<<endl;};
};
int main(){
    first *ptr1, F1(1,1);
    second *ptr2, S1(2,2);
    third  T1(3,3);
    ptr1 = &F1; ptr1->show();
    ptr1 = &S1; ptr1->show();
    ptr1 = &T1; ptr1->show();
    ptr2 = &T1; ptr2->show();
}
