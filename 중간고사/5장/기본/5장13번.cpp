#include <iostream>

using namespace std;

int main() {
    double n, sum = 0.0;

    do {
        cout << "�Ǽ� �Է� �ƴϸ� ���� : ";
        cin >> n;
        sum += n;
    }while (n > 0); // �ݺ� ������ �־����!!!

    sum -= n; // ��������(0 Ȥ�� ����)�� ���ϸ� �� �Ǵϱ� �ٽ� ���ֱ�

    cout << "�հ�� " << sum << "�Դϴ�." << endl;

    return 0;
}