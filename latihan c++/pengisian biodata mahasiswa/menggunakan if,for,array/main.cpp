#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;
    string nama[10],status[10];
    int nilai[10];

    cout << "Masukan Jumlah data...: ";
    cin >> n;
    cout << endl;

    for(int i = 0; i < n; i++){
        cout << endl;

        cout << "data ke- " << i+1 << endl;
        cout << "masukan nama = ";
        cin >> nama[i];

        cout << "masukan nilai = ";
        cin >> nilai[i];

        if (nilai[i] <= 50){
            status[i]="tidak lulus";
        }else{
            status[i] = "lulus"; 
        }
    }

    cout << endl;

    cout <<"DAFTAR NILAI MAHASISWA"<< endl;
    cout << "<------------------------------->" << endl;
    cout << "NO     nama     nilai   status" << endl;
    cout << "<------------------------------->" << endl;

    for (int i=0; i < n; i++){
        cout << i+1 << "      "<< nama[i] << "     " << nilai[i] << "     " << status[i] << endl;
        cout << "<---------------------------->" << endl;
    }



    return 0;
}