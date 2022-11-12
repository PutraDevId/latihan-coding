#include <iostream>
using namespace std;

void fungsi (int &b){
    b = 10;
    cout << "addres b adalah : " << &b << endl;
    cout << "nilai b adalah : " << b << endl;
}

void kuadrat(int &nilaiRef){
    nilaiRef = nilaiRef * nilaiRef;
}

int main (){

    int a = 5;
    cout << "addres a adalah : " << &a << endl;
    cout << "nilai a adalah : " << a << endl;


    kuadrat(a);
    cout << "nilai a adalah : " << a << endl;


    return 0;
}