#include <iostream>
#include <string>

using std::cout; using std::endl;

int main() {
	cout << "정사각형\n" << endl;
	int size = 6;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << "* ";
		} cout << endl;
	}

	cout << endl;

	cout << "\n직사각형\n" << endl;

	int width = 7;
	int height = 5;

	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			cout << "* ";
		} cout << endl;
	} 

	cout << endl;

	cout << "\n삼각형\n" << endl;

	int tri_height = 7;

	for (int i = 0; i < tri_height; i++) {

		for (int j = 0; j < i; j++) {
			cout << "* ";
		} cout << endl;
	} 

	cout << endl;


	return 0;
	
}