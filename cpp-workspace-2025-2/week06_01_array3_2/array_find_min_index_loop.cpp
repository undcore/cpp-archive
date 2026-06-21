//정주호 251010
/* 1. 최솟값 <-> 0 index 2. 0 index 제외한 배열 3. 최솟값 2 index */
// 배열 1. 주사위 줄눈 count 2. 최솟값 계산 3. 중간값 계산
#include <iostream>
#define ARRSIZE 5
using namespace std;
int main()
{
	int iNum[ARRSIZE] = { 5, 3, 9, 2, 8 }, iTemp[ARRSIZE];
	int iMin, iIndex;
	//입력
	/*for (int i = 0; i < ARRSIZE; ++i) {
		cin >> iNum[i];
	}*/
	//
	for (int k = 0; k < ARRSIZE; ++k) {
		cout << iNum[k];
	}
	cout << endl;
	for (int iLoop = 0; iLoop < ARRSIZE; ++iLoop)
	{
		iMin = iNum[iLoop];
		iIndex = iLoop;
		for (int j = iLoop; j < ARRSIZE; ++j)
		{
			if (iMin > iNum[j])
			{
				iMin = iNum[j];
				iIndex = j;
			}
		}
		cout << "[최솟값] : " << iMin << " , [인덱스] : " << iIndex << endl;
		iTemp[iLoop] = iNum[iLoop];
		iNum[iLoop] = iNum[iIndex];
		iNum[iIndex] = iTemp[iLoop];
		for (int k = 0; k < ARRSIZE; ++k)
		{
			cout << iNum[k];
		}
		cout << endl;
	}
	/*
	iMin = iNum[0]; // 첫번째 값은 일단 최솟값,, index값은 0
	for (int j = 0; j < ARRSIZE; ++j)
	{
		if (iMin > iNum[j])
		{
			iMin = iNum[j];
			iIndex = j;
		}
	}
	iTemp[0] = iNum[0];
	iNum[0] = iNum[iIndex];
	iNum[iIndex] = iTemp[0];
	cout << "최솟값은" << " " << iMin << " " << "인덱스값은" << iIndex << endl;
	for (int k = 0; k < ARRSIZE; ++k) {
		cout << iNum[k];
	}
	cout << endl;
	iMin = iNum[1];
	iIndex = 1;
	for (int j = 1; j < ARRSIZE; ++j)
	{
		if (iMin > iNum[j])
		{
			iMin = iNum[j];
			iIndex = j;
		}
	}
	iTemp[1] = iNum[1];
	iNum[1] = iNum[iIndex];
	iNum[iIndex] = iTemp[1];
	cout << "최솟값은" << " " << iMin << " " << "인덱스값은" << iIndex << endl;
	for (int k = 0; k < ARRSIZE; ++k) {
		cout << iNum[k];
	}
	cout << endl;
	iMin = iNum[2];
	iIndex = 2;
	for (int j = 2; j < ARRSIZE; ++j)
	{
		if (iMin > iNum[j])
		{
			iMin = iNum[j];
			iIndex = j;
		}
	}
	iTemp[2] = iNum[2];
	iNum[2] = iNum[iIndex];
	iNum[iIndex] = iTemp[2];
	cout << "최솟값은" << " " << iMin << " " << "인덱스값은" << iIndex << endl;
	for (int k = 0; k < ARRSIZE; ++k) {
		cout << iNum[k];
	}
	cout << endl;
	iMin = iNum[3];
	iIndex = 3;
	for (int j = 3; j < ARRSIZE; ++j)
	{
		if (iMin > iNum[j])
		{
			iMin = iNum[j];
			iIndex = j;
		}
	}
	iTemp[3] = iNum[3];
	iNum[3] = iNum[iIndex];
	iNum[iIndex] = iTemp[3];
	cout << "최솟값은" << " " << iMin << " " << "인덱스값은" << iIndex << endl;
	for (int k = 0; k < ARRSIZE; ++k) {
		cout << iNum[k];
	}
	cout << endl;
	*/
}