#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float a, b, x;

    do {
        cout << "Program do obliczania miejsc zerowych funkcji: y=ax+b, gdzie a=/=0" <<endl;
        cout << "Podaj A: "; cin >> a;
        cout << "Podaj B: "; cin >> b;
        x=(-b/a);
        if (a==0) {
            cout << "A nie moze byc zerem!" <<endl;
        } else {
            cout << "Miejsce zerowe funkcji y="<<a<<"x"<<"+b to:"<<x;
        }
    }
    while (a==0);

	return 0;
}
