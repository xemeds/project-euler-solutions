#include <stdio.h>
#include <gmp.h>

// The formula to calculate such routes in a m * n grid would be C(m + n, n)
// So the answer for this problem would be C(40, 20)

// Formula: n! / (r! * (n - r)!)
void combination(int n, int r, char* result_str) {
	mpz_t value1;
	mpz_t value2;
	mpz_init(value1);
	mpz_init(value2);

	mpz_fac_ui(value1, n - r);
	mpz_fac_ui(value2, r);
	mpz_mul(value1, value1, value2);
	mpz_fac_ui(value2, n);
	mpz_divexact(value1, value2, value1);

	mpz_get_str(result_str, 10, value1);

	mpz_clear(value1);
	mpz_clear(value2);
}

int main() {
	char result_str[100];
	combination(40, 20, result_str);
	printf("%s\n", result_str);
}
