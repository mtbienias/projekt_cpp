#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float a, b, x;


    cout << "Program do obliczania miejsc zerowych funkcji: y=ax+b" <<endl;
    cout << "Podaj A: "; cin >> a;
    cout << "Podaj B: "; cin >> b;
    x=(-b/a);
    if (a==0) {
        cout << "Funkcja przyjmuje postac: y="<<b<<" wiec jest stala" <<endl;
    }  else {
        cout << "Miejsce zerowe funkcji y="<<a<<"x"<<"+b to:"<<x <<endl;
    }



	return 0;
}
