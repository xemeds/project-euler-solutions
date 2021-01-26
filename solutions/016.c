#include <stdio.h>
#include <gmp.h>

int main() {
	mpz_t result;
	mpz_init(result);

	mpz_ui_pow_ui(result, 2, 1000);

	char result_str[320];
	mpz_get_str(result_str, 10, result);
	mpz_clear(result);

	int sum_of_digits = 0;
	for (int i = 0; result_str[i] != '\0'; i++) {
		sum_of_digits += result_str[i] - '0';
	}

	printf("%i\n", sum_of_digits);
}
