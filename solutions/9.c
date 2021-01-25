#include <stdio.h>
#include <math.h>

float cal_c(int a, int b) {
	return sqrt((a * a) + (b * b));
}

int main() {
	for (int b = 1; b <= 1000 / 2; b++)  {
		for (int a = 1; a < b; a++) {
			float c = cal_c(a , b);

			if (a + b + c == 1000) {
				printf("%i\n", (int)(a * b * c));
			}
		}
	}
}
