#include <bits/stdc++.h>//menggunakan semua lebery setandar c++ tidak baik di gunakan jika banyak lebry yg di gunakan
using namespace std;

int main(){

    int nilai;

    cout << "masukan nilai anda... : ";
    cin >> nilai;

    if(nilai >= 90){
        cout << " A ";
    }else{
        if(nilai >= 80 && nilai <=89){
            cout << " B ";
        }else{
            if(nilai >= 60 && nilai <= 79){
                cout << " C ";
            }else{
                if (nilai >= 33 && nilai <= 59){
                    cout << " D ";
                }else{
                    cout << " E ";
                }
            }
        }
    }



    return 0;
}