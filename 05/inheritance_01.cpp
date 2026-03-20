#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class first{
    private: int A1; protected: int B1;
    public: int C1;
        first(int a, int b, int c):A1(a),B1(b),C1(c){};
        void show(){cout << "FIRST: "<< A1 << B1 << C1 << endl;}};
class second_pri : private first{
    private: int A1; protected: int B1;
    public: int C1;
        second_pri(int a, int b, int c, int aa, int bb, int cc)
        :first(a,b,c),A1(aa),B1(bb),C1(cc){};
        void show(){cout << "SEC-Pri: "<< A1 << B1 << C1 << endl;}};
class second_pro : protected first{
    private: int A1; protected: int B1;
    public: int C1;
        second_pro(int a, int b, int c, int aa, int bb, int cc)
        :first(a,b,c),A1(aa),B1(bb),C1(cc){};
        void show(){cout << "SEC-Pro: "<< A1 << B1 << C1 << endl;}};
class second_pub : public first{
    private: int A1; protected: int B1;
    public: int C1;
        second_pub(int a, int b, int c, int aa, int bb, int cc)
        :first(a,b,c),A1(aa),B1(bb),C1(cc){};
        void show(){cout << "SEC-Pub: "<< A1 << B1 << C1 << endl;}};
int main(){
    first F(-1,-2,-3);
    second_pri S_pri(1,2,3,11,12,13);
    second_pro S_pro(4,5,6,14,15,16);
    second_pub S_pub(7,8,9,17,18,19);
    F.show();
    second_pri* S_pub2 = new second_pri(111,222,333,11,12,13);
    S_pub.show();
    S_pub.first::show();
    S_pub2->show();
}
// SINH VIÊN LẬP BẢNG ACCESSIBILITY
// FIRST var            :   PRIVATE X     PROTECTED Y      PUBLIC Z
// Spri:private   Parent:   ?-----? X     ?-------? Y      ?----? Z
// Spro:protected Parent:   ?-----? X     ?-------? Y      ?----? Z
// Spub:public    Parent:   ?-----? X     ?-------? Y      ?----? Z
// Thay đổi code trên để chứng minh bảng của bạn đúng.
