#include <iostream>
#include <fstream>
#include <algorithm>
#include <cassert>

using namespace std;

int main() {
    ifstream fin("scores.txt");
    ofstream fout("result.txt");

    assert(fin && fout);

    string name;
    double s, sum = 0.0, arr[100];
    int count = 0;

    while (fin >> name >> s) {
        arr[count] = s;
        count++;
    }

    sort(arr, arr + count, greater<double>());

    for (int i = count-1; i >= 0; i--) {
        fout << arr[i] << endl;
    }

    fin.close();
    fout.close();

    return 0;
}