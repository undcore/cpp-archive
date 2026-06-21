// 반지름을 입력 받아 Circle클래스의 객체를 동적할당하고
// Circle 클래스의 멤버를 이용하여 면적을 출력
#include <iostream>
#include "circle.h"
using namespace std;

int main() {
	
	/*입력 동적할당*/
	int iRadius;
	Circle* pCircle;
	Circle oCircle;
	//변수는 한곳에 동적(포인터변수)과 정적의 차이
	
	
	
	cout << "반지름: ";
	cin >> iRadius;
	pCircle = new Circle(iRadius);
	cout << pCircle->getArea();

	delete pCircle;


	// private 변수 >> setradius 함수 구현
}