#include <stdio.h>

int cal_sum_of_proper_divisors(int num) {
	int sum = 0;

	for (int i = 1; i < num; i++) {
		if (num % i == 0) {
			sum += i;
		}
	}

	return sum;
}

int main() {
	int sum_of_amicable_numbers = 0;

	for (int i = 1; i < 10000; i++) {
		int sum_of_proper_divisors1 = cal_sum_of_proper_divisors(i);
		int sum_of_proper_divisors2 = cal_sum_of_proper_divisors(sum_of_proper_divisors1);

		if ((i == sum_of_proper_divisors2) && i != sum_of_proper_divisors1) {
			sum_of_amicable_numbers += i;
		}
	}

	printf("%i\n", sum_of_amicable_numbers);
}
