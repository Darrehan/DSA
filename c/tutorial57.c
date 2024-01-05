// investiment problem
#include <stdio.h>
int main()
{
	int start_year, End_year;
	float x, amount, intrate;
	amount = 5000.0;
	End_year = 10;
	start_year = 0;
	intrate = .11;
	while (start_year <= End_year)
	{
		printf(" year %2d  amount = %9.9f", start_year, amount);
		printf("\n\n");
		x = amount + amount * intrate;
		amount = x;
		start_year = start_year + 1;
	}
	return 0;
}
