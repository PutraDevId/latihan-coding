#include <iostream>
using namespace std;

void fungsi (int *);
void kuadrat (int *);

int main (){

    int a = 5;
    cout << "addres a " << &a << endl;
    cout << "nilai a " << a << endl;

    // fungsi(&a); //fungsi dengan input pointer

    kuadrat(&a);
    cout << "nilai kuadrat a " << a <<endl;


    return 0;
}

void fungsi (int *b){
    cout << "addres b " << b << endl;
    cout << "nilai b " << *b << endl; //derefrencing    
}

void kuadrat(int *valPtr){
    *valPtr = (*valPtr) * (*valPtr);
}

