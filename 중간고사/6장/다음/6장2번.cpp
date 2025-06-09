#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c, pan;
    cout << "[ax^2 = bx + c의 근 찾기]" << endl;
    cout << "계수 a, b, c를 입력하세요 : ";
    cin >> a >> b >> c;
    pan = b*b - 4*a*c;

    if (pan < 0) {
        cout << "근이 없습니다." << endl;
    }
    else if (pan == 0) {
        cout << "두 근이 같습니다." << endl;
        cout << "x1 = x2 = " << -b / (2*a) << endl;
    }
    else {
        cout << "서로 다른 근 2개가 있습니다." << endl;
        cout << "x1 = " << (-b + sqrt(pan)) / (2*a) << endl;
        cout << "x2 = " << (-b - sqrt(pan)) / (2*a) << endl;
    }

    return 0;
}