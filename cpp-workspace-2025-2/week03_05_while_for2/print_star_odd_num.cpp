// 정주호 250919
/*	0이상의 홀수 정수를 입력받아 다음과 같이 출력하세요
	0보다 작은 값 또는 짝수가 입력되면 오류 메시지를 출력하고 다시 입력 받는다
	0이 입력될때까지 반복한다  */
#include <iostream>
using namespace std;
int main5()
{
	int lineCount, starCount, integer, blankCount, divide;
	while (true)
	{
		cout << "0이상의 홀수 정수 입력 : ";
		cin >> integer;
		if (integer == 0) {

			break;
		}
		divide = integer % 2;
		lineCount = (integer / 2) + 1;
		if (integer != 0)
		{
			if ((integer >= 0) && ((divide) != 0)) {
				for (int i = 0; i < lineCount; ++i) {
					blankCount = (lineCount - 1) - i;
					for (int k = 0; k < blankCount; ++k) {
						cout << " ";
					}
					starCount = (i * 2) + 1;
					for (int j = 0; j < starCount; ++j) {
						cout << "*";
					}
					cout << endl;
				}
			}
			else {
				cout << "[오류] : 0이상의 홀수  정수가 아님" << endl;
			}
		}
	}
	cout << "0을 입력하여 반복종료";
}