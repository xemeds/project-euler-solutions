#include <stdio.h>
#include <stdbool.h>

#define LIMIT 28123

bool is_abundant(int num)
{
	int sum_of_divisors = 1;
	for (int i = 2; i*i <= num; i++)
	{
		if (num % i == 0)
		{
			sum_of_divisors += i;

			if (i < (num / i))
				sum_of_divisors += (num / i);

			if (sum_of_divisors > num)
				return true;
		}
	}
	return false;
}

int main()
{
	int abundant_nums[7000];
	int abx = 0;
	
	for (int num = 1; num <= LIMIT; num++)
	{
		if (is_abundant(num))
		{
			abundant_nums[abx++] = num;
		}
	}

	int sum_of_abundants[LIMIT + 1];

	for (int abx1 = 0; abx1 < abx; abx1++)
	{
		for (int abx2 = 0; abx2 < abx; abx2++)
		{
			int sum = abundant_nums[abx1] + abundant_nums[abx2];
			if (sum <= LIMIT)
				sum_of_abundants[sum] = 1;
		}
	}

	unsigned long result = 0;

	for (int i = 0; i <= LIMIT; i++)
	{
		if (sum_of_abundants[i] == 0)
			result += i;
	}

	printf("%li\n", result);
}
