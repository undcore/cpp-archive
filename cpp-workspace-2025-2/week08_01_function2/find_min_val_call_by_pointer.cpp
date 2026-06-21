// 정주호 251021
#include <iostream>
using namespace std;

// Call by Value의 한계 극복 => Call by Pointer (포인터로 주소 전달) (<-> Call by Reference)
void callSwap(int* iNo1, int* iNo2);


int main()
{
	int iNo1, iNo2;
	iNo1 = 10;
	iNo2 = 20;

	cout << "--- [Call by Pointer] 값 교환 예제 ---" << endl;
	cout << "교환 전: iNo1 = " << iNo1 << ", iNo2 = " << iNo2 << endl;

	// 변수의 주소(Address)를 함수에 전달
	callSwap(&iNo1, &iNo2);

	cout << "교환 후: iNo1 = " << iNo1 << ", iNo2 = " << iNo2 << endl;

	return 0;
}

// callSwap 함수 (호출 대상)
void callSwap(int* iNo1, int* iNo2)
{
	int iTmp;

	// *iNo1은 주소에 저장된 실제 '값'을 의미함
	// iNo1이 가리키는 곳의 값을 iTmp에 임시 저장
	iTmp = *iNo1;

	// iNo2가 가리키는 값을 iNo1이 가리키는 곳에 대입
	*iNo1 = *iNo2;

	// iTmp에 저장된 원래 iNo1의 값을 iNo2가 가리키는 곳에 대입
	*iNo2 = iTmp;

	// 함수가 종료되어도 호출자의 메모리 값이 변경됨 (Call by Reference의 효과)
	// 반환 값 없이 여러 변수를 변경할 수 있음
}
