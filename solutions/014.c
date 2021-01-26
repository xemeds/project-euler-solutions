#include <stdio.h>

int num_terms = 1;
int cal_terms(unsigned int num) {
	if (num == 1) {
		int tmp = num_terms;
		num_terms = 1;
		return tmp;
	}
	num_terms++;
	if (num % 2 == 0) cal_terms(num / 2);
	else cal_terms((3 * num) + 1);
}

int main() {
	int highest_term_num = 1;
	int highest_term_count = 0;

	for (int i = 999999; i > 1; i--) {
		int current_term_count = cal_terms(i);
		if (current_term_count > highest_term_count) {
			highest_term_num = i;
			highest_term_count = current_term_count;
		}
	}

	printf("%i\n", highest_term_num);
}
