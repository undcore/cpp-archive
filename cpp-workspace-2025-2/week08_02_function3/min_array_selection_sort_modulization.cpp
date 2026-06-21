//정주호 251021
//선택정렬
//MIN Array program => Use function
#include <iostream>
#define ARRSIZE 5
using namespace std;

void prnArray(int iNum[]); // 배열 출력 함수 ... or (int *iNum)
void processArray(int iNum[]); // 배열 처리 함수 (선택 정렬) ...

int main() {
	int iNum[ARRSIZE] = { 5, 3, 9, 2, 8 };
	//입력
	/*for (int i = 0; i < ARRSIZE; ++i) 	{		cin >> iNum[i];	}*/

	//출력 및 처리
	cout << "[초기값]" << endl;
	prnArray(iNum);
	cout << "-----------------------" << endl;

	// 배열 처리 (정렬)
	processArray(iNum);

	cout << "-----------------------" << endl;
	cout << "[결과 배열]" << endl;
	prnArray(iNum);
}

// 배열 출력 함수
void prnArray(int iNum[]) {
	for (int k = 0; k < ARRSIZE; ++k)
	{
		cout << iNum[k] << " ";
	}
	cout << endl;
}

// 배열 처리 함수 (선택 정렬)
void processArray(int iNum[]) {
	// iMin: 찾은 최솟값, iIndex: 최솟값의 인덱스, iTemp: swap을 위한 임시 저장 공간 (배열로 선언됨)
	int iMin, iIndex, iTemp[ARRSIZE];

	// 배열 크기만큼 반복하며 정렬
	for (int iLoop = 0; iLoop < ARRSIZE; ++iLoop)
	{
		// 현재 위치(iLoop)의 값을 초기 최솟값으로 설정
		iMin = iNum[iLoop];
		iIndex = iLoop;

		// iNum[iLoop]부터 배열의 끝까지 최소값을 탐색
		for (int j = iLoop; j < ARRSIZE; ++j)
		{
			if (iMin > iNum[j])
			{
				iMin = iNum[j];
				iIndex = j;
			}
		}

		// 찾은 최솟값과 인덱스 출력
		cout << "[" << iLoop + 1 << "번째 탐색] 최솟값 : " << iMin << " , 인덱스 : " << iIndex << endl;

		// 최솟값(iNum[iIndex])을 현재 위치(iNum[iLoop])로 교환 (Swap)
		// 현재 위치의 값을 임시 배열에 저장
		iTemp[iLoop] = iNum[iLoop];
		// 현재 위치에 최솟값 대입
		iNum[iLoop] = iNum[iIndex];
		// 최솟값이 있던 자리에 원래 현재 위치의 값 대입
		iNum[iIndex] = iTemp[iLoop];

		prnArray(iNum);
	}
}
