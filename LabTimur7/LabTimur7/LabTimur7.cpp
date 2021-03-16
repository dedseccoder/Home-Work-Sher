#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

using namespace std;

void tor(double&, int);

int main()
{
	double I1, I2, I3, I4;
	
	tor(I1, 1);
	tor(I2, 2);
	tor(I3, 3);
	tor(I4, 4);

	cout << "Middle I = " << (I1 + I2 + I3 + I4) / 4 << "\n" << endl;

	system("pause");
	return 0;
}

void tor(double& I, int i)
{
	double R, r, m;
	cout << "Input m" << i << ": ";
	cin >> m;
	cout << endl;
	cout << "Input r" << i << ": ";
	cin >> r;
	cout << endl;
	cout << "Input R" << i << ": ";
	cin >> R;
	cout << endl;
	I = (m / 8) * (4 * pow(R, 2) + 5 * pow(r, 2));
	cout << "I" << i << " = " << I << "\n" << endl;
}
