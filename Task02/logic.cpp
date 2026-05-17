#include "logic.h"

int recursion(int x, int n) {
	if (n == 1) {
		return x;
	}

	return recursion(x, n - 1) * x;
}

int power(int x, int n) {
	if (n < 0) {
		return 0;
	}


	return recursion(x, n);
}