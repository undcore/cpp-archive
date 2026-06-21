#include <iostream>
#include "calculator.h"
#include "adder.h"
using namespace std;

void Calculator::run() {
	cout << "두 개의 수를 입력하세요>>";
	int iNo1;
	int iNo2;
	cin >> iNo1 >> iNo2;
	Adder adder(iNo1, iNo2);
	cout << adder.process();
}