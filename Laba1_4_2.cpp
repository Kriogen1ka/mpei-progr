#include <iostream>
#define iMAX 100
#define RandMin -100
#define RandMax 100

int get_rand_range_int(const int min, const int max) {
	return rand() % (max - min + 1) + min;
}

void input_array(int *array, int size) {
	for (int i = 0; i < size; i++) {
		array[i] = get_rand_range_int(RandMin, RandMax);
		std::cout << array[i] << " ";
	}
}


int main()
{
    std::cout << "Lab 1.3.2 Var 10" << std::endl;
	int array_length;
	std::cout << "Input array length: ";
	std::cin >> array_length;
	int array1[iMAX];
	input_array(array1, array_length);
}
