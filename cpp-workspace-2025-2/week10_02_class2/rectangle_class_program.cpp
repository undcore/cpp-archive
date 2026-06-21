//정주호 251107 251111
#include <iostream>
#include "rectangle.h"
using namespace std;
void prnResult(bool bSquare);
int main() 
{
	Rectangle oRect1; // 기본생성자 호출
	Rectangle oRect(10); // 매개변수1개 생성자 호출
	Rectangle oRect3(3, 5); // 매개변수2개 생성자 호출
	//oRect.iWidth = 5; private 멤버변수 사용불가 상태
	//oRect.iHeight = 5;
	int iArea = oRect.getArea();
	cout << "사각형의 면적: " << iArea << endl;
	int iCircum = oRect.getCircum();
	cout << "사각형의 둘레: " << iCircum << endl;
	cout << "정사각형 여부: ";
	bool bSquare = oRect.isSquare(); // 클래스의 목적은 재사용성
	prnResult(bSquare);
}
void prnResult(bool bSquare) {
	if (bSquare == true) { // 여기까지는 함수화 // 클래스까지 함수화는 추천하지 않음
		cout << "정사각형이다" << endl;
	}
	else {
		cout << "정사각형이 아니다" << endl;
	}
}