#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("triangle.txt");
    ofstream fout("triangle_result.txt");
    
    int num, a, b, c;
    int max, x, y;
    
    if (!fin) {
        cerr << "파일을 열 수 없습니다." << endl;
        return -1;
    }

    if (!fout) {
        cerr << "파일을 열 수 없습니다." << endl;
        return -1;
    }

    while (fin >> num >> a >> b >> c) {

        max = a; x = b; y = c;
        if (max < b) { max = b; x = a; y = c; }
        if (max < c) { max = c; x = a; y = b; }

        if (x + y <= max)
            fout << num << " X" << endl;
        else if (a == b && b == c)
            fout << num << " O 정삼각형" << endl;
        else if (a == b || b == c || c == a)
            fout << num << " O 이등변삼각형" << endl;
        else
            fout << num << " O" << endl;
    }
    
    cout << "완료. 출력파일을 확인해보세요." << endl;
    fin.close();
    fout.close();

    return 0;
}