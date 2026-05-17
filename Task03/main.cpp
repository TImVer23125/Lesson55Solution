#include <iostream>
#include "logic.h"
using namespace std;

int main() {
	int array[]{ 1,2,3,4,5,6,7,8,9,10};
	int size = 10;

	int s = sum(array, size);

	cout << "Sum: " << s << ".\n";

	return 0;
}