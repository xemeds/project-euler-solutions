#include <stdio.h>

int main() {
	int sum1 = 0;
	int sum2 = 0;

	for (int i = 1; i <= 100; i++) {
		printf("%i\n", sum1);
		sum1 += i * i;
		sum2 += i;
	}

	sum2 *= sum2;

	printf("%i\n", sum2 - sum1);
}
