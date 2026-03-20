// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct date{
    int dd, mm, yy;
};
class people{
    private:
        float weight;
        char blood;
        people *dad, *mom;
        void _setDad(people* prt){
            dad = prt;} // Need pass
        void _setMom(people* prt){
            mom = prt;} // Need pass
    protected:
        char* cccd;
        date ngaysinh;
        string name;
        char* nickname = nullptr;
        void setcccd(const char* _cccd){
            int temp = strlen(_cccd);
            cout << temp << endl;
            cccd = new char[temp+1];
            strcpy(cccd, _cccd);
            cout << cccd << endl;
        }
    public:
        static int No_people;
        people(const char* _cccd){
            setcccd(_cccd);
            No_people ++;
        }
        void setDad(people* prt){ _setDad(prt); }
        void setMom(people* prt){ _setMom(prt); }
        people(const char* _cccd, string _ten):name(_ten){
            setcccd(_cccd);
            No_people ++;
        }
        ~people(){
            No_people --;
            delete cccd, nickname;}
        void setnickname(){
            char ctemp[300];
            cout << "Nickname = " << endl;
            // cin.ignore();
            cin.getline(ctemp, 300);
            int itemp = strlen(ctemp);
            nickname = new char[itemp + 1];
            strcpy(nickname,ctemp);
        }
        friend ostream& operator<<(ostream& os, people& p){
            os  << "--------------------------" << endl
                << "Ten: " << p.name << endl
                << "CCCD: " << p.cccd << endl;
                if(p.nickname != nullptr){
                os << "Nick name: " << p.nickname << endl;}
            os  << "GIA DINH:" << endl
                << "Cha: " << p.dad->name << endl
                << "Me:  " << p.mom->name << endl;
                // Sinh vien hoan thien phan nay
            return os;
        }
        friend istream& operator>>(istream& is, people& p){
            // Sinh vien hoan thien phan nay
            // Nhap tat cac cac bien
            return is;
        }
};
int people::No_people = 0;
int main(){
    people  CON("54321","Ng Van B"),
            BO("22222","Ng A"),
            ME("23456","Tran T C");
            CON.setDad(&BO);
            CON.setMom(&ME);
    cout << CON;
    CON.setnickname();
    cout << CON;
};

// BAI TAP:
// Viet class device co du 3 thuoc tinh
// Private, Protected, Public
// Co ham Khoi tao, Ham huy, Ham qua tai
// Co bien static, ham static
// Co ham Xuat nhap du lieu
