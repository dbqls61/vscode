#include <iostream>

inline int square(int x) {
    return x * x;
}

int main() {
    for(int i = 1; i <= 10000; ++i) {
        std::cout << square(4) << std::endl; // 4�� ������ 10000�� ���
    }
    return 0;
}