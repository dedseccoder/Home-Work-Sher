#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;

double calculation(int[],int);

int main()
{
	srand(time(0));

	int *num;
	num = new int(10);
	int* arr = new int[*num];

	cout << "{ ";
	for (int i = 0; i < *num; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << ", ";
	}
	cout << "}" << endl;

	cout << "sum = " << calculation(arr, *num) << endl;

	delete(num);
	delete(arr);
	system("pause");
	return 0;
}


double calculation(int x[], int size)
{
	double num = 0;
	for (int i = 0; i < size; i ++)
	{
		num += sqrt(pow (M_E, sin(x[i])) );
	}
	return num;
}