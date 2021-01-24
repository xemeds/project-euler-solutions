#include <stdio.h>

// So the problem is to calculate the LCM of the numbers from 1 to 20

int gcd(int num1, int num2) {
	int gcd = 1;
	for (int i = 1; i <= num1 && i <= num2; i++) {
		if ((num1 % i == 0) && (num2 % i == 0)) {
			gcd = i;
		}
	}

	return gcd;
}

int lcm(long int num1, long int num2) {
	return (num1 * num2) / gcd(num1, num2);
}

int main() {
	int lcm_value = 1;

	for (int i = 2; i <= 19; i++) {
		lcm_value = lcm(lcm_value, i);
	}

	printf("%i\n", lcm_value);
}
