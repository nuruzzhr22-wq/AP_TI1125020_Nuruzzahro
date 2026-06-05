#include <iostream>
using namespace std;  

//Deklarasi dan definisi fungsi
void tampilkanGaris(int panjang = 10){
    for (int i = 0; i < panjang; i++){
        cout << "-";
    }
    cout << endl;
}
//Pemanggilan fungsi
int main(){
    tampilkanGaris(); 
    tampilkanGaris(20);
    return 0;   
}