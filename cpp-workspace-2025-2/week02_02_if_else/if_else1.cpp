// 정주호 250912
#include <iostream>
using namespace std;

int main() {

	int integer;

	cout << "정수 입력 : ";
	cin >> integer;

	if (integer == 0) { //중괄호
		cout << "0입니다";
	}
	else {
		cout << "0이 아닙니다";
	}

	/*
	if (integer == 0) {
		cout << "0입니다";
	}
	if (integer != 0) {
		cout << "0이 아닙니다";
	}
	*/
}