#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    int a;
    cout << sizeof(a) << " ����Ʈ" << endl;
    cout << typeid(a).name() << " Ÿ��" << endl;
    
    return 0;
}