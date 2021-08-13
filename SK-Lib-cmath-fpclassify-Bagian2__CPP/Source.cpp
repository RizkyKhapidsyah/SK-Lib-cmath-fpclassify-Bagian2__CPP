#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

void fpclassification(double x) {
	switch (fpclassify(x)) {		
	case FP_INFINITE:
		cout << "Infinite Number \n";
		break;
	case FP_NAN:
		cout << "Not a Number \n";
		break;
	case FP_ZERO:
		cout << "Zero \n";
		break;
	case FP_SUBNORMAL:
		cout << "Subnormal value \n";
		break;
	case FP_NORMAL:
		cout << "Normal value \n";
		break;
	default:
		cout << "Invalid number \n";
	}
}

int main() {
	// contoh 1
	double a = 1.0 / 2.0;
	cout << "For 1.0/0.0: ";
	fpclassification(a);

	// contoh 2
	double b = 0.0 / 1.0;
	cout << "For 0.0/0.0: ";
	fpclassification(b);

	// contoh 3
	double c = -0.0;
	cout << "For -0.0: ";
	fpclassification(c);

	// contoh 4
	double d = 1.0;
	cout << "For 1.0: ";
	fpclassification(d);

	_getch();
	return 0;
}
