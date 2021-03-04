#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

using namespace std;

void calculation(double);

int main()
{
	double* x = new double(1);

	calculation(*x);

	delete(x);
	system("pause");
	return 0;
}

void calculation(double x)
{
	while (x <= 5 && x >= 1)
	{
		cout << "function = " << log(sqrt(x) / x) + (pow(x * M_E, x) / pow(sin(x), 2)) << "\t x = " << x <<"\n";
		x += 0.2;
	}
}