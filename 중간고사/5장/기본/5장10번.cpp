#include <iostream>

using namespace std;

int main() {
    int n, sum = 0;

    cout << "������ ���� �� �Է��ϼ���. (�����Ϸ��� EOF)" << endl;

    while (cin >> n) {
        sum += n;
    }

    cout << "�� = " << sum << endl;

    return 0;
}