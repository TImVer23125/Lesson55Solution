#include "logic.h"
#include <iostream>
using namespace std;

int main() {
	int number;

	cout << "Input your number: ";
	cin >> number;

	int count = count_number_digits(number);

	cout << "Current number has " << count << " digits.\n";
	return 0;
}