#include <iostream>

using namespace std;

int main() {
    int rows, cols;
    char sym;
    cout << "���� �� �� ���� ���� �Է��ϼ��� : ";
    cin >> rows >> cols;
    cout << "� ��ȣ�� �簢���� ������? : ";
    cin >> sym;

    for (int count1 = 1; count1 <= rows; count1++){
        for (int count2 = 1; count2 <= cols; count2++){
            cout << sym;
        }
        cout << endl;
    }

    return 0;
}