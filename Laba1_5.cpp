#include <iostream>
#include <math.h>

double summary(double x, double epsilon) {
	double sum = 1, current = 1, numerator = 1, denominator = 1, sign = 1, power = 1;
	int i = 1;
	do {
		numerator *= (2.0 * i + 1.0);
		denominator *= (2.0 * i);
		sign = -sign;
		power *= x;
		current *= sign * power * numerator / denominator;
		sum += current;
		// std::cout << "i=" << i << "   sum= " << sum << "   current=" << current << std::endl;
		i++;
	} while (fabs(current) >= epsilon);
	std::cout << "sum = " << sum << std::endl << "eps = " << epsilon << std::endl; // delete
	return sum;
}

double func(double x) {
	double y = (1.0 / pow((1 + x), 3.0 / 2.0));
	std::cout << "func = " << y << std::endl; // delete
	return y;
}

bool contester() { // delete
	double y, sum;
	bool fl = true;
	int e = 0.01;
	for (double x = 0.1; x < 1.0; x += 0.1) {
		for (; e > 0.00001; e *= 0.1) {
			std::cout << x << "   " << e << std::endl;
			y = func(x);
			sum = summary(x, e);
			if (fabs(y - sum) > e)
				fl = false;
		}
	}
	return fl;
}

int main()
{
	std::cout << "Lab 1.5 Var 10 \n ";

	bool fl;
	fl = contester();

	/*
	bool fl = true;
	do {
		// Input
		double epsilon, x;
		bool incorrect_input = false;
		do {
			if (incorrect_input)
				std::cout << "Incorrect input. Please input again \n";
			incorrect_input = false;
			std::cout << "Input Epsilon as calculation accuracy (>0) : ";
			std::cin >> epsilon;
			if (epsilon <= 0)
				incorrect_input = true;
		} while (incorrect_input);
		std::cout << "Input X as function argument : ";
		std::cin >> x;
		// Calculation
		//double sum = summary(x, epsilon);
		//double y = func(x);
		//std::cout << "sum = " << sum << "   y = " << y << "   eps = " << epsilon << std::endl;
		// Program Repeat
		char exit;
		std::cout << "Type 'Y' to redo programm or 'N' to exit programm: ";
		std::cin >> exit;
		if ((exit == 'N') || (exit == 'n'))
			fl = false;
		else
			std::cout << "\n";
	} while (fl);
		*/
	//delete
	return 0;
}