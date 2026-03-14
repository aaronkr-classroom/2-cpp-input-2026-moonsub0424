#include <iostream>
#include <string>

using std::cout, std::endl, std::cin;

int main() {

	double a, b;

	cout << "a를 입력하시오 : ";
	cin >> a;
	cout << "b를 입력하시오 : ";
	cin >> b;

	cout << endl;

	if (a > b) {
		cout << "두 수 중 더 큰 수는 : " << a << endl;
	 }
	else if (a < b) {
		cout << "두 수 중 더 큰 수는 : " << b << endl;
	}
	else {
		cout << "두 수는 같습니다." << endl;
	}

	return 0;
}