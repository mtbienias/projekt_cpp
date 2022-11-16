#include <iostream>
#include <cmath>

using namespace std;

void wpiszParametry(float &a, float &b, float &c, string typ) {
    if (typ=="liniowa_kierunkowa") {
        cout << "Podaj A: "; cin >> a;
        cout << "Podaj B: "; cin >> b;
    } else {
        cout << "Podaj A: "; cin >> a;
        cout << "Podaj B: "; cin >> b;
        cout << "Podaj C: "; cin >> c;
    }
}

int main(int argc, char** argv) {
    float a, b, c, x1, x2, delta;
    int ktora_funkcja;

    cout << "Wybierz postac funkcji liniowej (1/2): "<<endl;
    cout << "1) y=ax+b"<<endl;
    cout << "2) Ax + By + C = 0"<<endl;
    cout << "Lub wybierz postac funkcji kwadratowej (3): "<<endl;
    cout << "3) y=ax^2+bx+c"<<endl;
    cout << "Wybrana funkcja: "; cin >> ktora_funkcja;

    switch(ktora_funkcja) {
      case 1:
        wpiszParametry(a,b,c,"liniowa_kierunkowa");
        x1=(-b/a);
        if (a==0) {
            cout << "Funkcja przyjmuje postac: y="<<b<<" wiec jest stala, brak m0" <<endl;
        }  else {
            cout << "Miejsce zerowe funkcji y="<<a<<"x"<<"+b to: "<<x1 <<endl;
        }
        break;

      case 2:
        wpiszParametry(a,b,c,"liniowa_ogolna");
        x1=(-c/a);
        if (b==0) {
            cout << "Funkcja przypisuje 1 y do 1 x, b nie powinno = 0" <<endl;
        }  else {
            cout << "Miejsce zerowe funkcji: " << a << "x + " << b <<"y + " << c << " to: " << x1 <<endl;
        }
        break;

      case 3:
        wpiszParametry(a,b,c,"kwadratowa_ogolna");
        if (a==0) {
            cout << "Podana funkcja to funkcja liniowa: y=" <<b << "x + " << c <<endl;
        } else {
            delta = pow(b, 2)-(4*a*c);
            if (delta>0) {
                x1=(-b-sqrt(delta))/2*a;
                x2=(-b+sqrt(delta))/2*a;
                cout << "Miejsca zerowe funkcji: y="<< a << "x^2 + " << b << "x + " << c << " to: " <<endl;
                cout << "x1 = " << x1 << " | x2 = " << x2 << endl;
            } else if (delta=0) {
                x1=-b/(2*a);
                cout << "Miejsca zerowe funkcji: y="<< a << "x^2 + " << b << "x + " << c << " to: " <<endl;
                cout << "x1 = " << x1 << endl;
            } else {
                cout << "Brak miejsc zerowych funkcji: y="<< a << "x^2 + " << b << "x + " << c << " to: " <<endl;
            }
        }
        break;
    }



	return 0;
}
