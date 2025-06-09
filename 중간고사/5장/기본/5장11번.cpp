#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int n, sum = 0;

    ifstream fin;
    fin.open("numbers.txt");

    if (!fin){
        cerr << "파일을 열지 못했습니다." << endl;
        return -1;
    }

    while (fin >> n) {
        sum += n;
    }
    
    fin.close();

    ofstream fout;

    fout.open("number_sum.txt");

    if (!fout){
        cerr << "파일을 열지 못했습니다." << endl;
        return -1;
    }

    fout << "합은 " << sum << "입니다." << endl;

    fout.close();

    return 0;
}