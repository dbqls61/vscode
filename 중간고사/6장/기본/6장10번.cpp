#include <iostream>

using namespace std;

double myavg(int a, int b, int c);

int main() {
    int k, e, m;
    cout << "������ ���� �Է� : ";
    cin >> k >> e >> m;
    cout.precision(2);
    cout << fixed;
    cout << "����� " << myavg(k, e, m) << " �Դϴ�." << endl;

    return 0;
}

double myavg(int a, int b, int c) {
    double result;
    result = (a+b+c)/3.0;
    return result;
}