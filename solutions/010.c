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
	long int sum = 0;

	for (int i = 2; i < 2000000; i++) {
		if (is_prime(i)) {
			sum += i;
		}
	}

	printf("%li\n", sum);
}
