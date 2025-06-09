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

Book::Book() {title = "제목없음", author = "작자미상";}
Book::Book(string t, string a) {
    title = t;
    author = a;
}
void Book::print() {cout << title << " " << author << endl;}

int main() {
    Book b1, b2("어린왕자", "생텍쥐페리"), b3(b2);
    b1.print();
    b2.print();
    b3.print();
    return 0;
}