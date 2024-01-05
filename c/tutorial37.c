/* simple Arithematic calculator */
#include <stdio.h>
#include <math.h>
int main()
{
	unsigned int a, b, res;
	int n, mod, num_3, num_4;
	float sum, mul, div, num_1, num_2;
	double value, result;
	printf("Enter 1 for sum,2 for mul,3 for div,4 for mod ,5 for sqrt,6 for raised power \n");
	scanf("%d", &n);
	switch (n)
	{
	case 1:
		printf("Enter two numbers buddy \n");
		scanf("%f %f", &num_1, &num_2);
		sum = num_1 + num_2;
		printf("sum = %9.4f", sum);
		break;
	case 2:
		printf("Enter two numbers buddy \n");
		scanf("%f %f", &num_1, &num_2);
		mul = num_1 * num_2;
		printf("multiply = %9.4f", mul);
		break;
	case 3:
		printf("Enter two numbers buddy \n");
		scanf("%f %f", &num_1, &num_2);
		div = num_1 / num_2;
		printf("divide = %9.4f", div);
		break;
	case 4:
		printf("Enter two numbers buddy \n");
		scanf("%d %d", &num_3, &num_4);
		if (num_4 != 0)
			mod = num_3 % num_4;
		if (num_4 == 0)
			printf("mod by 0 is undefined the below ans is garbage value not your answer try again \n");
		printf("mod = %d", mod);
		break;
	case 5:
		printf("Enter number buddy \n");
		scanf("%lf", &value); // when we use input as double than we use %lf in scanf
		result = sqrt(value); // we need to use typecast operator for long double & double  if we want sqrt of floating piont values
		printf("the value is = %9.4f", result);
		break;
	case 6:
		printf("Enter the number's buddy\n");
		scanf("%u %u", &a, &b);
		res = pow(a, b); /* mathematical funtion*/
		printf("the answer is %u", res);
		break;
	default:
		printf("your input is wronge buddy!try again \n");
		break;
	}
	return 0;
}