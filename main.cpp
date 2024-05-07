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
        return (a * t) / 2;
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
    cout << "masukan alas : ";
    cin >> sp.alas;
    cout << "luas persegi panjang : " << pp.luasPersegiPanjang(pp.panjang, pp.lebar) << endl;
    cout << "luas segitiga : " << sp.luasSegitiga(sp.alas, sp.tinggi) << endl;
    cout << "panjang persegi panjang : " << sp.hitung(pp) << endl;
}