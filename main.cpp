#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::cout << "Hello, C++ World!" << std::endl;
    std::cout << "VS Code C++ 환경 설정이 성공적으로 완료되었습니다." << std::endl;

    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
    std::cout << "1부터 5까지의 합: " << sum << std::endl;

    return 0;
}
