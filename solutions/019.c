#include <stdio.h>

int days_of_months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int is_leap_year(int year) {
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) return 1;
	else return 0;
}

int main() {
	// 0 being monday and 6 being sunday, this is set to the first day of 1901
	int day_of_week = 1;
	int sunday_counter = 0;

	for (int year = 1901; year <= 2000; year++) {
		// 0 being january and 11 being december
		for (int month = 0; month < 12; month++) {
			if (day_of_week == 6) sunday_counter++;
			if (month == 1) day_of_week = (day_of_week + ((days_of_months[month] + is_leap_year(year)) % 7)) % 7;
			else day_of_week = (day_of_week + (days_of_months[month] % 7)) % 7;
		}
	}

	printf("%i\n", sunday_counter);
}
