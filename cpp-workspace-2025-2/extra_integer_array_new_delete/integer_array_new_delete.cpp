//정수형 배열의 동적 할당 및 반환 ** 동적할당 standard , 정적할당으로는 할 수 없는 일(-> 사용자가 얼마나? 모름.)
//사용자로부터 정수의 개수를 입력 받아 배열을 선언하고 하나씩 정수를 입력받은 후 합을 출력하는 프로그램을 작성하라.
#include <iostream>
using namespace std;
int main() {
	cout << "입력할 정수의 개수는?";
	int iNo;
	cin >> iNo;
	if (iNo <= 0) return 0;
	int* p = new int[iNo];
	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}
	for (int i = 0; i < iNo; i++) {
		cout << i + 1 << "번째 정수: ";
		cin >> p[i];
	}
	int sum = 0;
	for (int i = 0; i < iNo; i++) {
		sum = sum + p[i];
	}
	cout << "평균= " << sum / iNo << endl;

	delete[] p;
}