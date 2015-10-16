#include <iostream>
#include <stdio.h>
#include <math.h>

int main() {
	float n;
	float input[1 << 16];
	int k = 0;
	while (scanf("%f", &n) != EOF) {
		input[k] = n;
		k++;
	}
	while (k - 1 >= 0) {
		printf("%lf\n", sqrt(input[k - 1]));
		k--;
	}
}
