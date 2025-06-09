#include <iostream>

using namespace std;

class Person {
    private :
        string name;
    
    public :
        Person(string n) {name = n;}
        string getName() {return name;}
        void setName(string n) {
            int len = sizeof("��");
            if (name.substr(0, len) == n.substr(0, len)) {
                name = n;
                cout << name << "(��)�� ���� �Ϸ�" << endl;
            }
            else {
                cout << "Family name change not allowed." << endl;
            }
        }
        ~Person() {cout << "name destroyed" << endl;};
};

int main() {  
    Person person("��浿");
    cout << "���� �̸�: " + person.getName() << endl;
    person.setName("���");  // ù ���� �ٸ� 
    person.setName("����");   // ù ���� ���� (����)
    person.setName("�ڱ浿");  // ù ���� �ٸ�
    cout << "���� �̸�: " + person.getName() << endl;
 
    return 0;
}