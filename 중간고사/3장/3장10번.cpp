#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "정수 입력 : ";
    cin >> a;

    cout << showbase;
    cout << "10진수는 " << a << endl;
    cout << "8진수는 " << oct << a << endl;
    cout << "16진수는 " << hex << a << endl;
    cout << "입니다." << endl;
    
    return 0;
}