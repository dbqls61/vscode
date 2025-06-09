#include <iostream>

using namespace std;

int main() {
    int a = 0, b, c;
    b = ++a;
    c = b++;
    cout << a << ' ' << b << ' ' << c << endl;
    
    return 0;
}