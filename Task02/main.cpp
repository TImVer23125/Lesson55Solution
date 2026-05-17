#include "logic.h"
#include <iostream>
using namespace std;

int main() {
	int x;
	int n;

	cout << "Input x and n: ";
	cin >> x >> n;

	int result = power(x,n);

	cout << x << "^" << n << " n " << result << ".\n";

	return 0;
}