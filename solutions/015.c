#include <stdio.h>
#include <gmp.h>

// The formula to calculate such routes in a m * n grid would be C(m + n, n)
// So the answer for this problem would be C(40, 20)

int main() {
	mpz_t result;
	mpz_init(result);

	mpz_bin_uiui(result, 40, 20);

	char result_str[100];
	mpz_get_str(result_str, 10, result);
	mpz_clear(result);

	printf("%s\n", result_str);
}
