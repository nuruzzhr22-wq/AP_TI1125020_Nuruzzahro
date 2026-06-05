#include<iostream>
using namespace std;

//Deklarasi dan definisi fungsi
//Bentuk Umum
void salam(){
    cout << "Selamat datang di C++!" << endl;
}

//Bentuk Eksplisit (lebih formal dalam standar C lama)
void versiLama(void){
    cout << "ini juga bisa." << endl;
}

//Pemanggilan fungsi
int main(){
    salam(); //memanggil fungsi salam
    versiLama(); //memanggil fungsi versiLama
    return 0;
}