// ¡§¡÷»£ 250916
#include <iostream>
using namespace std;

int gugu = 5, iCount, total;
int main()
{

	for (int i = 0; i < 9; ++i)
	{
		iCount = i + 1;
		total = gugu * iCount;
		cout << gugu << 'x' << iCount << '=' << total << endl;
	}
}