#include <iostream>

class Test {
    public :
        Test() {std::cout << "Constructor\n";}
        ~Test() {std::cout << "Destructor\n";}
};

int main() {
    Test t1;
    {
        Test t2;
    } // 블록이 끝나면서 t2 소멸
    std::cout << "End\n";
    return 0;
}