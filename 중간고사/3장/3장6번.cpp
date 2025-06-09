#include <iostream>

using namespace std;

int main() {
    cout << boolalpha;
    cout << (1==1 && 2==2) << endl;
    cout << (1==1 && 2==3) << endl;

    cout << (1==1 || 2==3) << endl;
    cout << (1==2 || 2==3) << endl;

    return 0;
}