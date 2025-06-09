#include <iostream>

using namespace std;

int main() {
    double n, sum = 0.0;

    do {
        cout << "실수 입력 아니면 종료 : ";
        cin >> n;
        sum += n;
    }while (n > 0); // 반복 조건을 넣어야함!!!

    sum -= n; // 마지막꺼(0 혹은 음수)는 더하면 안 되니까 다시 빼주기

    cout << "합계는 " << sum << "입니다." << endl;

    return 0;
}