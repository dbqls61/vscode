#include <iostream>

using namespace std;

int main() {
    int fruit;
    cin >> fruit;
    switch (fruit) {
        case 1:
            cout << "���" << ' ';
            break;
        case 2:
            cout << "��" << ' ';
        case 3:
            cout << "�ٳ���" << ' ';
            break;
        default:
            cout << "����" << ' ';
    }

    return 0;
}