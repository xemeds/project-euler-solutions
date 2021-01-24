#include <stdio.h>
#include <math.h>

int is_prime(int num) {
	if (num == 2) return 1;
	if (num % 2 == 0) return 0;

	for (int i = 3; i <= sqrt(num); i = i + 2) {
		if (num % i == 0) {
			return 0;
		}
	}

	return 1;
}

int main() {
	int number_of_primes = 0;
	int current_prime = 0;
	int i = 1;

	while (number_of_primes <= 10001) {
		if (is_prime(i)) {
			number_of_primes++;
			current_prime = i;
		}

		i++;
	}

	printf("%i\n", current_prime);
}
