#include <iostream>

using namespace std;

//���׸� �Լ� ���
template <typename T> T sum(T a, T b, T c=0) {return a+b+c;} // T���� ����Ÿ�Ը� ����, c=0 ������

/* �Լ� �����ε�
int sum(int a, int b, int c=0) {return a+b+c;} ���� 3������ �־���Ѵٰ� ġ�� ������ �Լ� ���
double sum(double a, double b, double c) {return a+b+c;}
*/

int main() {
    cout << "�� ������ ���� " << sum(10,20) << endl;
    cout << "�� �ǽǼ��� ���� " << sum(1.1,2.2,4.4) << endl;

    return 0;
}