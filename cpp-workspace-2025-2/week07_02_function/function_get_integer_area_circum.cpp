//정주호 251017
//하나의 정수를 입력받아 반환하는 함수 작성
//main 함수에서 작성된 함수를 호출하여 얻은 값을 출력
#include <iostream>
using namespace std;
// 정수 입출력
int getInt()
{
	int iGet;
	cout << "정수 입력: ";
	cin >> iGet;
	cout << "출력된 값은: " << iGet;
	return iGet;
}
//원의 면적
int getCircleArea(int iRadius)
{
	double area = 3.14 * iRadius * iRadius;
	cout << "원의 면적" << area;
	return area;
}
int getCircleCircum(int iCircum)
{
	double circum = 2 * 3.14 * iCircum;
	cout << "원의 둘레" << circum;
	return circum;
}
//원의 둘레

int main()
{
	//정수 입출력
	int iPrint;
	double circleArea;
	double circleCircum;
	iPrint = getInt();
	cout << endl;
	//원의 면적 출력
	circleArea = getCircleArea(iPrint);
	cout << endl;
	//원의 둘레 출력
	circleCircum = getCircleCircum(iPrint);
	cout << endl;
}// cout을 main으로