#include "logic.h"
#include <iostream>
using namespace std;

int main() {
	int n, s;

	cout << "Input n and s (positive integer numbers): ";
	cin >> n >> s;

	bool result = is_equal(n, s);

	cout << "Result: " <<
		(result ? "Numbers is equal" : "Numbers is NOT equal")
		<< endl;

	return 0;
}