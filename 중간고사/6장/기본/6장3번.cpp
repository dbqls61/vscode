#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cout << "���� ������ٸ� ���� �������� �ۼ��ϼ���." << endl;
    getline(cin, input);
    if (input == "I am hungry" || input == "i am hungry")
        cout << "�¾ҽ��ϴ�." << endl;
    else
        cout << input << "�� ���� �ƴմϴ�." << endl;

    return 0;
}