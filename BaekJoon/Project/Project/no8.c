#include <stdio.h>

int main() {
	double a, b;

	scanf_s("%lf", &a);
	scanf_s("%lf", &b);

	printf("%.9lf", a / b);

	return 0;
}