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

    // b.a = 5;    // �տ� �ƹ��͵� ���� ������ private �̱� ������ ������ �� ����.
    // b.setA(10); // setA�� protected �̱� ������ �ڽ��� �ƴ� main �Լ������� ������ �� ����.
    b.ShowA();  // ShowA�� public �̱� ������ ������ �� �ִ�.
    // b.b = 10;   // �տ� �ƹ��͵� ���� ������ private �̱� ������ ������ �� ����.
    // b.setB(10); // setB�� protected �̱� ������ �ڽ��� �ƴ� main �Լ������� ������ �� ����.
    b.ShowB();  // ShowB�� public �̱� ������ ������ �� �ִ�.

    return 0;
}