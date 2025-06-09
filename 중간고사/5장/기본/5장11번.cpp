#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int n, sum = 0;

    ifstream fin;
    fin.open("numbers.txt");

    if (!fin){
        cerr << "������ ���� ���߽��ϴ�." << endl;
        return -1;
    }

    while (fin >> n) {
        sum += n;
    }
    
    fin.close();

    ofstream fout;

    fout.open("number_sum.txt");

    if (!fout){
        cerr << "������ ���� ���߽��ϴ�." << endl;
        return -1;
    }

    fout << "���� " << sum << "�Դϴ�." << endl;

    fout.close();

    return 0;
}