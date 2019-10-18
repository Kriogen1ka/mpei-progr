#include <iostream>
#include <cstring>
#define N 10
using namespace std;

void input_array(double* array, size_t size) {
	cout << "Input array[" << size << "]:\n";
	for (size_t i = 0; i < size; ++i)
		cin >> array[i];
	return;
}

void print_array(const double* array, size_t size) {
	cout << "Array[" << size << "] = {";
	for (size_t i = 0; i < size; ++i)
		cout << array[i] << ", ";
	cout << "}\n";
	return;
}

void swap(double& a, double& b) {
	double temp = a;
	a = b;
	b = temp;
}

void pushback(double* array, size_t size) {
	bool sort = false;
	size_t i = 0, top = 0;
	while (!sort && i < size) {
		i = top;
		if (i != top && array[i] < 0) {
			swap(array[i], array[top]);
			++top;
		}
		else {
			++i;
		}
		print_array(array, size);
	}
	return;
}

int main()
{
	cout << "Lab 4_2_3 Var 10\n";
	double c[N];
	size_t m;
	cout << "Input m: ";
	cin >> m;
	input_array(c, m);
	pushback(c, m);
	print_array(c, m);
	return 0;
}