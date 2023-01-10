#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct mahasiswa{
    int NIM;
    string nama;
    string jurusan;
};

mahasiswa ambilData(int posisi, fstream &myfile){
    mahasiswa bufferData;

    myfile.seekp((posisi-1)*sizeof(mahasiswa));
    myfile.read(reinterpret_cast<char*>(&bufferData),sizeof(mahasiswa));
    return bufferData;
}

void menulisdata(mahasiswa &data, fstream &myfile){
    myfile.write(reinterpret_cast<char*>(&data), sizeof(mahasiswa));
}

void menulisdatabyposisi(int posisi, mahasiswa &bufferData, fstream &myfile){
    myfile.seekg((posisi-1)*sizeof(mahasiswa));
    myfile.write(reinterpret_cast<char*>(&bufferData),sizeof(mahasiswa));
}

int main(){
    fstream myfile;
    myfile.open("data.bin",ios::trunc | ios::out | ios::in | ios::binary);
    mahasiswa mahasiswa1, mahasiswa2, mahasiswa3, output;

    mahasiswa1.NIM = 1232;
    mahasiswa1.nama = "siro";
    mahasiswa1.jurusan = "elektro";

    mahasiswa2.NIM = 2232;
    mahasiswa2.nama = "putra";
    mahasiswa2.jurusan = "elektro";

    mahasiswa3.NIM = 3232;
    mahasiswa3.nama = "ambo";
    mahasiswa3.jurusan = "otomotif";

    menulisdata(mahasiswa1, myfile);
    menulisdata(mahasiswa2, myfile);
    menulisdata(mahasiswa3, myfile);

    mahasiswa2.nama = "aug";
    menulisdatabyposisi(2, mahasiswa2,myfile);

    output = ambilData(2, myfile);
    cout << output.NIM << endl;
    cout << output.nama <<endl;
    cout << output.jurusan << endl;

    myfile.close();

    return 0;
}