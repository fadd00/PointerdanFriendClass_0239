#include<iostream>
using namespace std;

class persegiPanjang
{
    public:
    
    int panjang, lebar;
    int luasPersegiPanjang(int a, int b){
        return a * b;
    }
};
class segitiga
{
    public:
    
    int alas, tinggi;
    int luasSegitiga(int a, int t){
        return a * t;
    } 
    int hitung(persegiPanjang p){
        return p.panjang;
    }
};


int main(){
    persegiPanjang pp;
    segitiga sp;
    cout << "masukan panjang : ";
    cin >> pp.panjang;
    cout << "masukan lebar : ";
    cin >> pp.lebar;
    cout << "masukan tinggi : ";
    cin >> sp.tinggi;

}