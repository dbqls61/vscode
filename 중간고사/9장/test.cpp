#include <iostream>

using namespace std;

int main() {
    int *p = new int(10);
    
    cout << *p << " " << p << endl;

    delete p;

    return 0;
}