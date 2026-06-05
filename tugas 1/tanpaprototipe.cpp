#include <iostream>
using namespace std;    

//Deklarasi dan definisi fungsi 
double bagi(double a, double b){
    if (b == 0) return 0;
    return a / b;
}

//pemanggilan fungsi
int main(){
    cout <<"hasil bagi: " << bagi(10, 2) << endl;
    return 0;
}
    