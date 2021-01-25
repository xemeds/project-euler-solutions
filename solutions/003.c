#include <stdio.h>
#include <math.h>

// Repeatedly dividing a number by its smallest prime factor will eventually result in 1
// So the last smallest prime factor that this number is divided into would be its largest prime factor

long int get_smallest_prime_factor(long int num) {
	if (num == 2) return num;
	
	for (int i = 3; i < sqrt(num); i = i + 2) {
		if (num % i == 0) {
			return i;
		}
	}

	return num;
}

int main() {
	long int num = 600851475143;
	int smallest_prime_factor = get_smallest_prime_factor(num);

	while (num / smallest_prime_factor != 1) {
		num /= smallest_prime_factor;
		smallest_prime_factor = get_smallest_prime_factor(num);
	}

	printf("%i\n", smallest_prime_factor);
}
