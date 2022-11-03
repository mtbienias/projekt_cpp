#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	double a,b;
	float m0;
	
	cout << "Program oblicza funkcje liniowa w postaci: ax + b gdzie a =/= 0" << endl;
	cout << "Podaj a: ";  cin >> a;
	cout << "Podaj b: ";  cin >> b;
	
	cout << "f(x) = " << a << "x + " << b << endl;
	m0 = b/a;
	cout << "Miejsce zerowe: " << m0 << endl;
	
	return 0;
}
