#include <stdio.h>

int main() {
	int sum = 0;
	int num1 = 1;
	int num2 = 2;

	while (num2 <= 4000000) {
		if (num2 % 2 == 0) {
			sum += num2;
		}
		
		int tmp = num1 + num2;
		num1 = num2;
		num2 = tmp;
	}

	printf("%i\n", sum);
}
