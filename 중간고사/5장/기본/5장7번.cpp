#include <iostream>

using namespace std;

int mypow(int a, int b) {
    int result = 1;
    for (int i = 1; i <= b; i++){
        result *= a;
    }
    return result;
}

int main() {
    int n, sum1 = 0, sum2 = 0, sum3 = 0;
    
    cout << "���� �Է� : ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        sum1 += i;
        sum2 += mypow(i, 2);
        sum3 += mypow(i, 3);
        i++;
    }

    cout << "sum1�� ���� " << sum1 << endl;
    cout << "sum2�� ���� " << sum2 << endl;
    cout << "sum3�� ���� " << sum3 << endl;

    return 0;
}