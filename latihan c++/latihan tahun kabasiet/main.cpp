#include <iostream>
using namespace std;

int main(){

    int tahun;

    cout << "masukan tahun kabist yang di inggin kan... : ";
    cin >> tahun;

    if(tahun %400 == 0){
        cout << tahun << " merupakan tahun kabist \n";
    }
    else if (tahun %100 == 0){
        cout << tahun << " bukan merupakan tahun kabist... \n";
    }
    else if (tahun %4 == 0){
            cout << tahun << "merupakan tahun kabiset... " << endl;
    }else{
        cout << tahun << " bukan merupan tahun kabiset.... " << endl;
    }

    cin.get();
    return 0;
}