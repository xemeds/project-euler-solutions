#include <stdio.h>
#include <string.h>

int is_palindromic(int num) {
	char num_str[12];
	sprintf(num_str, "%d", num);

	int last_index = strlen(num_str) - 1;

	for (int i = last_index; i >= 0; i--) {
		if (num_str[i] != num_str[last_index - i]) {
			return 0;
		}
	}

	return 1;
}

int main() {
	int largest_palindrome = 0;

	for (int num1 = 999; num1 >= 100; num1--) {
		for (int num2 = 999; num2 >= 100; num2--) {
			int product = num1 * num2;

			if (is_palindromic(product) && product > largest_palindrome) {
				largest_palindrome = product;
			}
		}
	}

	printf("%i\n", largest_palindrome);
}
