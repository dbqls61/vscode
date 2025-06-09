#include <iostream>

using namespace std;

int main() {
    double n, sum = 0.0;

    do {
        cout << "양의 실수 입력 : ";
        cin >> n;
        if (n <= 0)
            break;
        sum += n;
    }while (true);

    cout << "합계는 " << sum << "입니다." << endl;

    return 0;
}