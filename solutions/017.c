#include <stdio.h>
#include <string.h>

char* ones[] = {"", "one", "two", "three", "four","five", "six", "seven", "eight", "nine"};
char* ten_to_nineteen[] = {"", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
char* tens[] = {"", "", "twenty", "thirty", "forty", "fifty","sixty", "seventy", "eighty", "ninety"};
char* tens_powers[] = {"hundred", "thousand"};

int cal_letter_count(int num) {
	if (num == 100) return strlen(ones[1]) + strlen(tens_powers[0]);
	if (num == 1000) return strlen(ones[1]) + strlen(tens_powers[1]);
	if (num < 10) return strlen(ones[num]);
	if (num < 20) return strlen(ten_to_nineteen[num - 9]);
	if (num < 100) {
		int tens_quotient = num / 10;
		int ones_quotient = num % 10;
		return strlen(tens[tens_quotient]) + strlen(ones[ones_quotient]);
	}
	if (num < 1000) {
		int hundreds_quotient = num / 100;
		int tens_and_ones_letter_count = cal_letter_count(num - (hundreds_quotient * 100));
		int total_letter_count = strlen(ones[hundreds_quotient]) + strlen(tens_powers[0]) + tens_and_ones_letter_count;
		if (tens_and_ones_letter_count != 0) total_letter_count += strlen("and");
		return total_letter_count;
	}
}

int main() {
	int sum_letter_count = 0;

	for (int i = 1; i <= 1000; i++) {
		sum_letter_count += cal_letter_count(i);
	}

	printf("%i\n", sum_letter_count);
}
