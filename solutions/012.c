#include <stdio.h>
#include <math.h>

int get_num_of_divisors(long long int num) {
	int num_of_divisors = 0;

	for (int i = 1; i < sqrt(num); i++) {
		if (num % i == 0) {
			if (num / i == i) num_of_divisors++;
			else num_of_divisors += 2;
		}
	}

	return num_of_divisors;
}

int main() {
	long long int triangle_number = 0;

	for (int i = 1; get_num_of_divisors(triangle_number) <= 500; i++) {
		triangle_number += i;
	}

	printf("%lli\n", triangle_number);
}
