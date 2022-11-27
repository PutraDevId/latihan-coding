#include <iostream>
#include <string>

using namespace std;

int main(){

    string nama;
    string alamat;
    string nim;
    string jurusan;

    cout << "isikan BIO data ada ...... "<< endl << endl;
    cout << "Nama.....: ";
    getline(cin, nama); //getline sama dengan cin hanya saja cin menganggap spasi itu input kosong saat kita ingin mengisi kan dua kata dengan spasi maka cin akan menganggap itu satu, berbeda dengan getline

    cout << "Alamat...: ";
    getline(cin, alamat);

    cout << "NIM......: ";
    getline(cin, nim);

    cout << "jurusan..: ";
    getline(cin, jurusan);

    cout << endl;

    cout << "data anda"<< endl;
    cout << "<--------------------->" << endl;

    cout << "Nama.....: " << nama << endl;
    cout << "Alamat...: " << alamat << endl;
    cout << "NIM......: " << nim << endl;
    cout << "jurusan..: " << jurusan << endl;

    cout << endl;



    return 0;
}