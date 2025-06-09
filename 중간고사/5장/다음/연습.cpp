#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    int low = 5, high = 10;
    int tryLimits = 5, count = 0, guess;
    bool found = false;
    srand(time(0));
    int num = rand()%(high - low + 1) + low;

    while (count <= tryLimits || found == true) {
        cout << "5~15 사이의 정수를 입력하시오 : ";
        cin >> guess;
        if (guess == num) found = true;
        else if (guess < num) cout << "더 큰 숫자입니다." << endl;
        else cout << "더 큰 숫자입니다." << endl;
        count++;
    }
    if (found) cout << "축하합니다. 추측에 성공하셨습니다. ";
    else cout << "아쉽게 추측에 실패했습니다. ";

    cout << "(답 : " << num << ')' << endl;

    return 0;
}