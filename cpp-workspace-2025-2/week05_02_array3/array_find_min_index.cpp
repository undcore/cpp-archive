//정주호 250930
// 1000 개의 정수 입력하여 1000개 출력 1000개 중 최솟값 출력
#include <iostream>
#define ARRSIZE 5
using namespace std;
int main()
{
	int iNum[ARRSIZE] = { 5,3,9,2,8 };
	int iMin, iIndex;
	//입력
	for (int i = 0; i < ARRSIZE; ++i)
	{
		cin >> iNum[i];
	}
	//출력
	for (int k = 0; k < ARRSIZE; ++k)
	{
		cout << iNum[k];
	}
	cout << endl;
	iMin = iNum[0]; // 첫번째 값은 일단 최솟값
	for (int j = 0; j < ARRSIZE; ++j)
	{
		if (iMin > iNum[j])
		{
			iMin = iNum[j];
			iIndex = j;
		}
	}
	//출력
	cout << "최솟값은" << " " << iMin << " " << "인덱스값은" << iIndex;
}