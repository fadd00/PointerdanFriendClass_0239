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
    segitiga s;
    cout << "masukan panjang : ";
    cin >> pp.panjang;
    cout << "masukan lebar : ";
    cin >> pp.lebar;
    cout << "masukan tinggi : ";
    cin >> s.tinggi;
    cout << "masukan alas : ";
    cin >> s.alas;
    cout << "luas persegi panjang : " << pp.luasPersegiPanjang(pp.panjang, pp.lebar) << endl;
    cout << "luas segitiga : " << s.luasSegitiga(s.alas, s.tinggi) << endl;
    cout << "panjang persegi panjang : " << s.hitung(pp) << endl;
}