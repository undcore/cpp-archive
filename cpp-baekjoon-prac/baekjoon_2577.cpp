#include <iostream>
#include <string>
#define SIZE 10
using namespace std;

int main(){
    int iA, iB, iC;
    int iResult;
    int iCount[SIZE] = {0};

    cin >> iA >> iB >> iC;
    iResult = iA * iB * iC;

    string sResult = to_string(iResult);

    for(int i=0; i<sResult.length(); ++i){
        int iDigit = sResult[i] - '0';
        iCount[iDigit]++;
    }
    for (int i = 0; i < SIZE; ++i) {
        cout << iCount[i] << endl;
    }
}