#include <iostream>

inline int square(int x) {
    return x * x;
}

int main() {
    for(int i = 1; i <= 10000; ++i) {
        std::cout << square(4) << std::endl; // 4의 제곱을 10000개 출력
    }
    return 0;
}