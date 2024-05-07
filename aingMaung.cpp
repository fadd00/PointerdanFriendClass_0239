#include<iostream>
using namespace std;
class mahaiswa{
    public:
    int nim;
    void showNim(){
        cout << "no induk = " << nim << endl;
    }
};
int main(){
    mahaiswa *mhs = new mahaiswa{1}; 
    mhs->nim = 2 ;
    mhs->showNim();
    delete mhs;
    return 0;
}