#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cout << "나는 배고프다를 영어 문장으로 작성하세요." << endl;
    getline(cin, input);
    if (input == "I am hungry" || input == "i am hungry")
        cout << "맞았습니다." << endl;
    else
        cout << input << "은 답이 아닙니다." << endl;

    return 0;
}