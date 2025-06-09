#include <iostream>

using namespace std;

class A {
    int a = -1;
    protected: void setA(int a) {this -> a = a;};
    public: void ShowA() {cout << "a = " << a << endl;};
};

class B : public A {
    int b = -2;
    protected: void setB(int b) {setA(100); this -> b = b;};
    public: void ShowB() {ShowA(); cout << "b = " << b << endl;};
};

int main() {
    B b;

    // b.a = 5;    // 앞에 아무것도 적지 않으면 private 이기 때문에 접근할 수 없다.
    // b.setA(10); // setA는 protected 이기 때문에 자식이 아닌 main 함수에서는 접근할 수 없다.
    b.ShowA();  // ShowA는 public 이기 때문에 접근할 수 있다.
    // b.b = 10;   // 앞에 아무것도 적지 않으면 private 이기 때문에 접근할 수 없다.
    // b.setB(10); // setB는 protected 이기 때문에 자식이 아닌 main 함수에서는 접근할 수 없다.
    b.ShowB();  // ShowB는 public 이기 때문에 접근할 수 있다.

    return 0;
}