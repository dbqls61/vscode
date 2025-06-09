#include <iostream>

using namespace std;

int main() {
    int fruit;
    cin >> fruit;
    switch (fruit) {
        case 1:
            cout << "사과" << ' ';
            break;
        case 2:
            cout << "배" << ' ';
        case 3:
            cout << "바나나" << ' ';
            break;
        default:
            cout << "과일" << ' ';
    }

    return 0;
}