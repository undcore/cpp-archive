// 정주호 250919
#include <iostream>
using namespace std;
/*	0~9 사이의 정수를 입력받아 입력된 수의 구구단을 출력하세요
	0~9 사이의 수가 아닌 경우 오류 메시지를 출력하세요
	- 1. 출력    */
int gugu, multiplier, result;
int main() {

	while (true) {
		cout << "0 ~ 9사이의 정수입력 : ";
		cin >> gugu;
		if (gugu == 0) {
			cout << "0을 입력했으므로 프로그램을 종료" << endl;
			break;
		}
		if ((gugu >= 0) && (gugu <= 9)) {
			for (int i = 0; i < 9; ++i)
			{
				multiplier = i + 1;
				result = gugu * multiplier;
				cout << gugu << 'x' << multiplier << '=' << result << endl;
			}
		}
		else {
			cout << "[오류] 0 ~ 9 사이가 아니다";
		}
	}
}
