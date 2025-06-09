#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c, pan;
    cout << "[ax^2 = bx + c�� �� ã��]" << endl;
    cout << "��� a, b, c�� �Է��ϼ��� : ";
    cin >> a >> b >> c;
    pan = b*b - 4*a*c;

    if (pan < 0) {
        cout << "���� �����ϴ�." << endl;
    }
    else if (pan == 0) {
        cout << "�� ���� �����ϴ�." << endl;
        cout << "x1 = x2 = " << -b / (2*a) << endl;
    }
    else {
        cout << "���� �ٸ� �� 2���� �ֽ��ϴ�." << endl;
        cout << "x1 = " << (-b + sqrt(pan)) / (2*a) << endl;
        cout << "x2 = " << (-b - sqrt(pan)) / (2*a) << endl;
    }

    return 0;
}