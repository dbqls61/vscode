#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    cout << "�� �� �Է� : ";
    cin >> a >> b;

    cout << "ū ���� " << (a > b ? a : b) << "�Դϴ�." << endl;

    cout << b << "�� ������ " << abs(b) << "�Դϴ�." << endl;

    cout << a << "�� ¦���ϱ�� Ȧ���ϱ��? ==> ";
    cout << (a%2==0? "¦���Դϴ�." : "Ȧ���Դϴ�.") << endl;

    return 0;
}