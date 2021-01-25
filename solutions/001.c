#include <stdio.h>

int main() {
	int sum = 0;

	for (int num = 3; num < 1000; num++) {
		if ((num % 3 == 0) || (num % 5 == 0)) {
			sum += num;
		}
	}

	printf("%i\n", sum);
}
