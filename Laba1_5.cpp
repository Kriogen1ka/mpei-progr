#include <iostream>
#include <conio.h>
#include <math.h>

int main()
{
	std::cout << "Lab 1.5 Var 10 \n ";
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
		double sum, current, numerator = 3, denominator = 2, sign = -1, power;
		power = x;
		sum = 1 - 2.0 * x / 3.0;
		current = 1;
		int i = 2;
		do {
			numerator *= (2.0 * i + 1.0);
			denominator *= (2.0 * i);
			sign = -sign;
			power *= x;
			current *= sign * power * numerator / denominator;
			sum += current;
			std::cout << "i=" << i << "   sum= " << sum << "   current=" << current << std::endl;
			i++;
		} while (fabs(current) >= epsilon);
		double y;
		y = 1.0 / pow((1 + x), 3.0 / 2.0);
		std::cout << "y = " << y << "   eps = " << epsilon << std::endl;
		// Program Repeat
		char exit;
		std::cout << "Type 'Y' to redo programm or 'N' to exit programm: ";
		std::cin >> exit;
		if ((exit == 'N') || (exit == 'n'))
			fl = false;
		else
			std::cout << "\n";
	} while (fl);
	system("pause");
	return 0;
}