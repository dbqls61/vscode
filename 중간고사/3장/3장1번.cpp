#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    int a;
    cout << sizeof(a) << " 바이트" << endl;
    cout << typeid(a).name() << " 타입" << endl;
    
    return 0;
}