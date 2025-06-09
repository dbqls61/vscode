#include <iostream>

class Calculator1 {
public:
    int add(int a, int b) {
        return a + b;
    }
};

class Calculator2 {
public:
    int add(int a, int b);
};

inline int Calculator2::add(int a, int b) {
    return a + b;
}

int main() {
    Calculator1 c1;
    Calculator2 c2;

    std::cout << c1.add(3, 4) << std::endl;
    std::cout << c2.add(3, 4) << std::endl;

    return 0;
}