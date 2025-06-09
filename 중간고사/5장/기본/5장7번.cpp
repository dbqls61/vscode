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
    
    cout << "숫자 입력 : ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        sum1 += i;
        sum2 += mypow(i, 2);
        sum3 += mypow(i, 3);
        i++;
    }

    cout << "sum1의 값은 " << sum1 << endl;
    cout << "sum2의 값은 " << sum2 << endl;
    cout << "sum3의 값은 " << sum3 << endl;

    return 0;
}