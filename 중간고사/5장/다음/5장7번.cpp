#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("triangle.txt");
    ofstream fout("triangle_result.txt");
    
    int num, a, b, c;
    int max, x, y;
    
    if (!fin) {
        cerr << "������ �� �� �����ϴ�." << endl;
        return -1;
    }

    if (!fout) {
        cerr << "������ �� �� �����ϴ�." << endl;
        return -1;
    }

    while (fin >> num >> a >> b >> c) {

        max = a; x = b; y = c;
        if (max < b) { max = b; x = a; y = c; }
        if (max < c) { max = c; x = a; y = b; }

        if (x + y <= max)
            fout << num << " X" << endl;
        else if (a == b && b == c)
            fout << num << " O ���ﰢ��" << endl;
        else if (a == b || b == c || c == a)
            fout << num << " O �̵�ﰢ��" << endl;
        else
            fout << num << " O" << endl;
    }
    
    cout << "�Ϸ�. ��������� Ȯ���غ�����." << endl;
    fin.close();
    fout.close();

    return 0;
}