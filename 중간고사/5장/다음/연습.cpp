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
        cout << "5~15 ������ ������ �Է��Ͻÿ� : ";
        cin >> guess;
        if (guess == num) found = true;
        else if (guess < num) cout << "�� ū �����Դϴ�." << endl;
        else cout << "�� ū �����Դϴ�." << endl;
        count++;
    }
    if (found) cout << "�����մϴ�. ������ �����ϼ̽��ϴ�. ";
    else cout << "�ƽ��� ������ �����߽��ϴ�. ";

    cout << "(�� : " << num << ')' << endl;

    return 0;
}