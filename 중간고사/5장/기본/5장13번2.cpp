#include <iostream>

using namespace std;

int main() {
    double n, sum = 0.0;

    do {
        cout << "���� �Ǽ� �Է� : ";
        cin >> n;
        if (n <= 0)
            break;
        sum += n;
    }while (true);

    cout << "�հ�� " << sum << "�Դϴ�." << endl;

    return 0;
}