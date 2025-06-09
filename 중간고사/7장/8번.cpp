#include <iostream>

using namespace std;

class Person {
    private :
        string name;
    
    public :
        Person(string n) {name = n;}
        string getName() {return name;}
        void setName(string n) {
            int len = sizeof("고");
            if (name.substr(0, len) == n.substr(0, len)) {
                name = n;
                cout << name << "(으)로 변경 완료" << endl;
            }
            else {
                cout << "Family name change not allowed." << endl;
            }
        }
        ~Person() {cout << "name destroyed" << endl;};
};

int main() {  
    Person person("고길동");
    cout << "원래 이름: " + person.getName() << endl;
    person.setName("곡식");  // 첫 글자 다름 
    person.setName("고구마");   // 첫 글자 같음 (성공)
    person.setName("박길동");  // 첫 글자 다름
    cout << "최종 이름: " + person.getName() << endl;
 
    return 0;
}