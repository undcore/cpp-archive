//정주호 251010
//1~45 난수 6개 발생
//이때, 중복은 허용 x .... 정렬 한다 ... 이를 5번 수행
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
#define ARRSIZE 6
int main()
{
	int iRandNo;
	int iNum[ARRSIZE];
	int iCnt;
	bool bFlag;
	srand(time(NULL));

	iCnt = 0;
	for (int iLoop = 0; iLoop < ARRSIZE; ++iLoop)
	{
		while (true)
		{
			bFlag = true;
			iRandNo = rand() % 45 + 1;
			for (int i = 0; i < iCnt; ++i)
			{
				if (iRandNo == iNum[i])
				{
					cout << "중복 : " << iRandNo << endl;
					bFlag = false;
					break;
				}
			}
			if (bFlag == true)
			{
				iNum[iCnt] = iRandNo;
				iCnt++;
				break;
			}
		}
	}

	for (int k = 0; k < ARRSIZE; ++k)
	{
		cout << iNum[k] << " ";
	}
	/* iRandNo = rand() % 45 + 1;
	cout << iRandNo << endl;
	iNum[0] = iRandNo;
	iRandNo = rand() % 45 + 1;
	if (iRandNo == iNum[0]) {
		iRandNo = rand() % 45 + 1;
	}
	else {
		iNum[1] = iRandNo;
		cout << iRandNo << endl;
	}
	for (int i = 0; i < ARRSIZE; ++i) {
		cout << iNum[i] << " ";
	}
	*/
}