// 정주호 250923
/*1부터 100 사이의 난수를 발생하여 변수에 저장
사용자로부터 1-100사이의 정수를 입력하여 난수와 같은 수를 입력할때까지 반복
발생된 난수보다 크면 " 더 작은 수를 입력하세요." 출력
발생된 난수보다 작으면 "더 큰 수를 입력하세요." 출력*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int iRan, inputNum;
	srand(time(NULL));
	iRan = rand() % 100 + 1;
	//cout << iRan << endl;
	while (true)
	{
		cout << "1부터 100사이의 정수를 입력 : ";
		cin >> inputNum;
		if (inputNum == iRan)
		{
			break;
		}
		if ((inputNum <= 100) && (inputNum >= 1))
		{
			if (inputNum > iRan)
			{
				cout << inputNum << " 보다 더 작은 수를 입력하세요" << endl;
			}
			else if (inputNum < iRan)
			{
				cout << inputNum << " 보다 더 큰 수를 입력하세요" << endl;
			}
		}
		else
		{
			cout << "[에러] 1부터 100사이의 정수가 아닙니다." << endl;
		}
	}
	cout << "정답 = " << iRan << " 프로그램 종료";
}