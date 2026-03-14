#include <iostream>

using std::cout; using std::endl;

int main() {
	int j = 1;

	for (int i = 1; i < 10; i++) {
		
		j *= i;
	}
	
	cout << j << endl;

	return 0;
}