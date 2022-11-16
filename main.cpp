#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float a, b, c, x;
    int ktora_funkcja;

    cout << "Wybierz postac funkcji liniowej (1/2): "<<endl;
    cout << "1) y=ax+b"<<endl;
    cout << "2) Ax + By + C = 0"<<endl;
    cout << "Wybrana funkcja: "; cin >> ktora_funkcja;

    switch(ktora_funkcja) {
      case 1:
        cout << "Podaj A: "; cin >> a;
        cout << "Podaj B: "; cin >> b;
        x=(-b/a);
        if (a==0) {
            cout << "Funkcja przyjmuje postac: y="<<b<<" wiec jest stala, brak m0" <<endl;
        }  else {
            cout << "Miejsce zerowe funkcji y="<<a<<"x"<<"+b to: "<<x <<endl;
        }
        break;
      case 2:
        cout << "Podaj A: "; cin >> a;
        cout << "Podaj B: "; cin >> b;
        cout << "Podaj C: "; cin >> c;
        x=(-c/a);
        if (b==0) {
            cout << "Funkcja przypisuje 1 y do 1 x, b nie powinno = 0" <<endl;
        }  else {
            cout << "Miejsce zerowe funkcji: " << a << "x + " << b <<"y + " << c << " to: " << x <<endl;
        }
        break;
    }



	return 0;
}
