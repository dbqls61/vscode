#include <iostream>

using namespace std;

class Book {
    private :
        string title, author;

    public :
        Book();
        Book(string t, string a);
        void print();
};

Book::Book() {title = "�������", author = "���ڹ̻�";}
Book::Book(string t, string a) {
    title = t;
    author = a;
}
void Book::print() {cout << title << " " << author << endl;}

int main() {
    Book b1, b2("�����", "�������丮"), b3(b2);
    b1.print();
    b2.print();
    b3.print();
    return 0;
}