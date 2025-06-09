#include <iostream>

using namespace std;

//제네릭 함수 사용
template <typename T> T sum(T a, T b, T c=0) {return a+b+c;} // T에는 숫자타입만 가능, c=0 때문에

/* 함수 오버로딩
int sum(int a, int b, int c=0) {return a+b+c;} 만약 3가지씩 넣어야한다고 치면 디폴드 함수 사용
double sum(double a, double b, double c) {return a+b+c;}
*/

int main() {
    cout << "두 정수의 합은 " << sum(10,20) << endl;
    cout << "세 실실수의 합은 " << sum(1.1,2.2,4.4) << endl;

    return 0;
}