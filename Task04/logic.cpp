#include "logic.h"

bool recursion(int n, int s) {
	if (n == s) {
		return true;
	}

	if ((n == 0 || s == 0)) {
		return false;
	}

	int digit = n % 10;

	return  recursion(n / 10, s - digit);
}

bool is_equal(int n, int s) {
	if (n < 0 || s < 0) {
		return false;
	}
	if (n == 0) {
		return s == 0;
	}
	return recursion(n, s);
}