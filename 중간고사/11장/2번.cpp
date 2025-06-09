#include <iostream>

using namespace std;

int main() {
    int iarr[] = {10, 20, 30, 77};
    double darr[] = {3.14, 7.99, -1,1};
    string sarr[] = {"딸기", "바나나", "우유"};

    for (auto i : iarr) {cout << i << "\t";}
    cout << endl;

    for (auto i : darr) {cout << i << "\t";}
    cout << endl;

    for (auto i : sarr) {cout << i << "\t";}
    cout << endl;

    return 0;
}