#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct mahasiswa{
    int NIM;
    string nama;
    string jurusan;
};

mahasiswa ambilData(int &posisi, fstream &myfile){
    mahasiswa bufferData;

    myfile.seekp((posisi-1)*sizeof(mahasiswa));
    myfile.read(reinterpret_cast<char*>(&bufferData),sizeof(mahasiswa));
    return bufferData;
}

int main(){
    fstream myfile;
    mahasiswa dataBaca;
    myfile.open("data.bin", ios::in | ios::binary);
    int posisi = 2;

    dataBaca = ambilData(posisi,myfile);

    cout << dataBaca.NIM << endl;
    cout << dataBaca.nama << endl;
    cout << dataBaca.jurusan << endl;

    myfile.close();
    return 0;
}