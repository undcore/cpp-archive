// 정주호 250926
// 정수 10개를 입력받아 입력된 수들과 합계 및 평균을 출력하시오.
#include <iostream>
#define ARRSIZE 10 // 배열이 크기가 고정되기 때문에
using namespace std;
int main()
{
	int integer[ARRSIZE], iNum, total = 0;
	double aver;
	for (int i = 0; i < ARRSIZE; ++i)
	{
		iNum = i + 1;
		cout << iNum << "번째 정수 10개를 입력 : ";
		cin >> integer[i];
	}
	cout << "입력된 수 : ";
	for (int j = 0; j < ARRSIZE; ++j)
	{
		cout << integer[j] << " ";
	}
	cout << '\n';
	for (int k = 0; k < ARRSIZE; ++k) // 입력/출력/연산은 따로 절차에 따라서, 함축적으로 작성X
	{
		total = total + integer[k];
	}
	aver = (double)total / ARRSIZE;
	cout << "합계 : " << total << '\n';
	cout << "평균 : " << aver;
}
/* 작성할 구조 파악
cout << integer[0] << endl;
cout << integer[1] << endl;
cout << integer[2] << endl;
*/