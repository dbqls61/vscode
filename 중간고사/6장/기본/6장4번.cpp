#include <iostream>
#include <string>

using namespace std;

void kor_to_eng(string a) {
    if (a == "I am hungry" || a == "i am hungry")
        cout << "�¾ҽ��ϴ�.";
    else
        cout << a << " �� ������ �ƴմϴ�." << endl;
}

int main() {
    string input;
    cout << "���� ������ٸ� ���� �������� �ۼ��ϼ���." << endl;
    getline(cin, input);
    kor_to_eng(input);

    return 0;
}